#include "sieve.h"


void fill (bool* anArray, int size, bool value)
{
  for (int i = 0; i < size; ++i)
    anArray[i] = value;
}


void eliminateMultiplesOf (int k, int size, bool* sieve)
{
  if (sieve[k-1])
    {
      for (int i = 2; i*k <= size; ++i)
	{
	  sieve[i*k-1] = false;
	}
    }
}

// Sieve of Erastothenes method for finding prime numbers
// maxNum: input, largest number that we wish to check for prime-ness
// theSieve: input, array of maxNum booleans
//           output: theSieve[i] will be true if and only 
//                      if i+1 is a prime number
void sieve(int maxNum, bool* theSieve)
{
  fill (theSieve, maxNum, true);
  for (int k = 2; k < maxNum; ++k)
    eliminateMultiplesOf (k, maxNum, theSieve);
  theSieve[0] = false; // 1 is not considered a prime number
}



