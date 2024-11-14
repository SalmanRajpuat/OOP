#include<iostream>
using namespace std;
void swap(float &a, float &b);
int main(){
	
	float a=10,b=20;
	
	cout<<"A before swapping is "<<a<<endl;
	cout<<"B before swapping is "<<b<<endl;
	
	
	swap(a,b);
	
		cout<<"\n\nA After swapping is "<<a<<endl;
		cout<<"B after swapping is "<<b<<endl;
	
	
	
	return 0;
}
void swap(float &a, float &b){
	float c;
	c=a;
	a=b;
	b=c;
}
