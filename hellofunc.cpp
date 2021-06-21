#include <iostream>
#include <string>

using namespace std;

string hello(string name){
	string greeting = "hello\t" + name;
	return greeting;
}

int main(){
	cout<<hello("hm")<<endl;
	return 0;
}