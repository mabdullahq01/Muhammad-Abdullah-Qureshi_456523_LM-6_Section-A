#include <iostream>
using namespace std;

int main(){
	int count, number, numr, count1;
	cout<<"How many Rows?";
	cin>>numr;
	number=0;
		for(count=0; count<=numr; count++){
		for(count1=0; count1<=count; count1++){
			number=number+1;
			cout<<number<<" ";
		}
		cout<<endl;
	}
}