#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int reversedigit=0;
	int lastdigit;
	while(n>0){
		lastdigit = n%10;
		n=n/10;
		reversedigit = (reversedigit*10) + lastdigit;
		
	}
	cout<<reversedigit;

}
