#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;


bool stringsEqual (const char* s1, const char* s2)
{
  return (strcmp(s1, s2) == 0);
}


int unorderedSearch 
  (char* a[], unsigned n, const char* x)
// Look for x within an unsorted array a, containing n items.
// Return the position where found, or -1 if not found.
{
  int i;
  for (i = 0; ((i <= n) && (!stringsEqual(a[i], x))); i++) ;
  if (i >= n) 
    i = -1;
  return i;
}


void lowercase (char* str)
  // Convert any upper-case alphabetic characters in str to
  // lowercase
{
  while (*str != 0) {
    char c = *str;
    if ((c >= 'A') && (c <= 'Z'))
      *str = c - 'A' + 'a';
    ++str;
  }
}


const int MAXARRAYSIZE = 5000;

typedef char* charArray;

void countWords (char* filename)
{
  ifstream input (filename);

  char word[256];
  char** knownWords = new charArray[MAXARRAYSIZE];
  int nKnownWords = 0;
  int allWords = 0;
  while (input >> word)
    {
      lowercase(word); // e.g., so "word" and "Word" are treated as the same
      ++allWords;
      if (unorderedSearch(knownWords, nKnownWords, word) < 0)
	{
	  knownWords[nKnownWords] = new char[strlen(word)+1];
	  strcpy(knownWords[nKnownWords], word);
	  ++nKnownWords;
	}
    }
  cout << "This file contains " << allWords << " words, "
       << nKnownWords << " of them distinct." << endl;

}


int main(int nargs, char** argv)
{
  if (nargs != 2)
    {
      cerr << "To run this program, do \n";
      cerr << argv[0] << " fileName\n";
      return -1;
    }

  countWords (argv[1]);

  return 0;
}



