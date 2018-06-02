findPrimes: findPrimes.o sieve.o
	g++ -gdwarf-2 -o findPrimes findPrimes.o sieve.o

%.o: %.cpp sieve.h
	g++ -gdwarf-2 -c $*.cpp

clean:
	rm findPrimes *.o *~


