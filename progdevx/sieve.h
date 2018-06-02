#ifndef SIEVE_H
#define SIEVE_H

// Sieve of Erastothenes method for finding prime numbers
// maxNum: input, largest number that we wish to check for prime-ness
// theSieve: input, array of maxNum booleans
//           output: theSieve[i] will be true if and only
//                      if i+1 is a prime number
void sieve(int maxNum, bool* theSieve);

#endif
