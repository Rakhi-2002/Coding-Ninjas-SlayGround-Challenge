#include<iostream>
using namespace std;

int main() {

	int n;
	int evensum = 0, oddsum = 0;
	cin>>n;

	while(n != 0){
		int digit = n % 10;
		if(digit % 2 == 0)
			evensum += digit;
		else
			oddsum += digit;
		
		n /= 10;
	}
	cout<<evensum<<" "<<oddsum;
	return 0;
}
