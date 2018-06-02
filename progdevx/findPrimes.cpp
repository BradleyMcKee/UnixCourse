#include "sieve.h"
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void findSomething () {}

void findPrimes (int maxNum, bool* theSieve)
{
  sieve (maxNum, theSieve);
  string message = " is prime.";
  for (int i = 0; i < maxNum; ++i)
    if (theSieve[i])
      cout << i+1 << message << endl;
}


int main (int argc, char** argv)
{
  int maxNum = -1;
  if (argc == 2)
    {
      istringstream in (argv[1]);
      in >> maxNum;
    }
  else
    {
      cout << "What is the largest value you want to check? " << flush;
      cin >> maxNum;
    }
  // bool* theSieve = NULL; // error
  bool* theSieve = new bool[maxNum]; // correct
  findPrimes (maxNum, theSieve);
  delete [] theSieve;
  return 0;
}
