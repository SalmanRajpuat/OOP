#include<iostream>
using namespace std;
int main(){
	
	int var1 = 11;
	int var2 = 22;
	int* ptr;
	ptr = &var1;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	
	ptr = &var2;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	
	
	
	
	return 0;
}
