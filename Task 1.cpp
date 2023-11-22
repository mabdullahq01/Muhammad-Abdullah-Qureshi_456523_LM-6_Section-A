#include <iostream>
using namespace std;
 
int main(){
	int numr, count, num1, num2, sum, count2;
	num1=0;
	num2=1;
	cout<<"Enter Number of Rows: ";
	cin>>numr;
	cout<<num1<<endl;
	cout<<num1<<" "<<num2<<endl;
	cout<<num1<<" "<<num2<<" "<<num1+num2<<endl;
	for(count=3; count<numr; count++){
		num1=0;
		num2=1;
		cout<<num1<<" "<<num2<<" ";
		for(count2=2; count2<=count; count2++){
			sum=num1+num2;
			num1=num2;
			num2=sum;
			cout<<sum<<" ";
		}
		cout<<endl;
	}
}