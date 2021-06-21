#include<iostream>
#include<iomanip>

using namespace std;
int main(){
	int unit_price {295}; //item unit price in cents
	int count {}; //number of items ordered
	int discount_threshold {25}; //quantity threshold for discount
	double discount {0.07}; //discount for quantities over discount_threshold

	int* pcount {&count}; // pointer to count
	cout<<"enter number of items::\t";
	cin>>*pcount;
	cout<<"price is\t"<<fixed<<setprecision(2)<<"$"<<unit_price/100<<endl;

	//calculate gross price
	int* punit_price{&unit_price}; //pointer to unit price
	int price{ *pcount * *punit_price}; //gross price via pointers
	auto* pprice{&price}; //pointer to gross price

	//calculate net price in US $
	double net_price{};
	double* pnet_price{nullptr};
	pnet_price = &net_price;
	if(*pcount > discount_threshold){
		cout<<"you qualify for a discount of "<<static_cast<int>(discount*100.0)<<" percent.\n";
		*pnet_price = price*(1.0 - discount)/100.0;
	}
	else{
		net_price = *pprice / 100.0;
	}
	cout<<"net price for\t"<<*pcount<<"\titems is $"<<net_price<<endl;
	return 0;
}