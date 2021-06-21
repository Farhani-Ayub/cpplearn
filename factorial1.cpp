#include<iostream>
#include<iomanip>

using namespace std;
int main(){
	unsigned int limit {};
	cout<<"factorial calculator"<<endl;
	cout<<"upper limit for factorial calculation"<<endl;
	cin>>limit;
	cout<<setw(8)<<"integer"<<setw(8)<<"sum"<<setw(20)<<"factorial"<<endl;
	for(unsigned long long n {1},sum {},factorial {1};n<=limit;++n){
		sum += n;//accumulate to current n
		factorial *= n; //find n! for current n
		cout<<setw(8)<<n<<setw(8)<<sum;
		cout<<setw(200)<<factorial<<endl;
	}
	return 0;
}