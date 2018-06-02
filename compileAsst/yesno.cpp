#include "yesno.h"

using namespace std;

// Return true if response is "yes", "y", or any upper/lowercase
// variant of those two strings.
bool yesNo(string response)
{
  if (response.length() == 1)
    {
      return (response == "Y") || (response == "y");
    }
  else if (response.length() == 3)
    {
      return (((response[0] == 'Y') || (response[0] == 'y'))
	      && ((response[1] == 'E') || (response[1] == 'e'))
	      && ((response[2] == 'S') || (response[2] == 's')));
    }
  else
    return false;
}

