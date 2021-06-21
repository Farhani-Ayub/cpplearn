#include <iostream>
#include <cctype>
using namespace std;
int main(){
	for(char x='A';x<'Z';x++){
		if (isgraph(x)){
			cout<<x<<endl;
		}
	}
	return 0;
}