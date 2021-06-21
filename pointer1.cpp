#include<iostream>
using namespace std;
int main(){
	int* num1;
	int num2 {12};
	int* num3 {&num2};
	cout<<sizeof(num1)<<endl;
	cout<<num3<<endl;
	return 0;
}