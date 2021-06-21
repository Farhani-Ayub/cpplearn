#include<iostream>
#include<iomanip>

using namespace std;
int main(){
	const size_t max{100}; // number of primes required
	long primes[max]{2L}; //first prime defined
	size_t count{1}; //count of primes found so far
	long trial {3L}; //candidate prime

	while(count < max){
		bool isprime{true}; //indicates when a prime is found

		// try dividing the candidate by all the primes so far
		for (size_t i {}; i < count && isprime; ++i){
			isprime = trial % *(primes + i) > 0; // false for exact division
		}
		if (isprime){ // we got one
			*(primes + count++) = trial; // save it in primes array
		}
		trial += 2;	
	}
	// output primes 10 to a line
	cout<<"the first\t"<<max<<"\tprimes are:\t"<<endl;
	for (size_t i{};i < max;++i){
		cout<<setw(7)<<*(primes + i);
		if((i+1) % 10 == 0){
			cout<<endl;
		}
	}
	cout<<endl;
	return 0;
}
