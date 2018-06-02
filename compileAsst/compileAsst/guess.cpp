#include <iostream>
#include <string>
#include "yesno.h"

using namespace std;

//
// Try to guess a number beween low and high (exclusive)
// by asking a series of "Is it bigger than X?" questions.
// Return true if able to guess it. Return false and complain
// if person's responses are inconsistent.
bool doGuesses (int low, int high)
{
  if (low >= high)
    {
      cout << "Hey, no cheating!  There is no number that is\n";
      return false;
    }
  else if (high == low + 2)
    {
      cout << "I'm guessing that your number is " << low+1 << endl;
      cout << "Is that right? " << flush;
      
      string response;
      getline(cin, response);
      if (yesNo(response))
	{
	  cout << "\nHooray! (Oops. Sorry - I don't mean to gloat.)" << endl;
	  return true;
	}
      else
	{
	  cout << "Hey, no cheating!  There is no number other than "
	       << low+1 << " that is\n";
	  return false;
	}
    }
  else
    {
      int mid = (low + high) / 2;
      cout << "Is your number bigger than " << mid << "? " << flush;
      string response;
      getline(cin, response);
      if (yesNo(response))
	{
	  if (doGuesses(mid,high))
	    return true;
	  else
	    {
	      cout << " bigger than " << mid << ",\n";
	      return false;
	    }
	}
      else
	{
	  if (doGuesses(low,mid+1))
	    return true;
	  else
	    {
	      cout << " smaller than " << mid+1 << ",\n";
	      return false;
	    }
	}
    }
}


int main()
{
  cout << "Think of an integer between 1 and 1000. I will try to guess it."
       << endl;

  bool result = doGuesses(0, 1001);

  if (!result) {
    cout << " and is between 1 and 1000." << endl;
    cout << "\n\nI demand a rematch!" << endl;
  }

  return 0;
}
