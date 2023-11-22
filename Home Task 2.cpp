#include <iostream>
using namespace std;

int main(){
	int count, count1;
	for(count=1; count<=5; count++){
		for(count1=1; count1<=count; count1++){
			cout<<count1<<" ";
		}
		cout<<endl;
	}
}