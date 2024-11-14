#include<iostream>
using namespace std;
struct Marks{
	int arr[3];
	
	
	
};


int main(){
	
	
	Marks st;
	for(int i=0; i<3; i++){
		cout<<"Enter marks for student "<<i+1<<endl;
		cin>>st.arr[i];
	}
	int Avgmarks;
	Avgmarks=(st.arr[0]+st.arr[1]+st.arr[2])/3;
	cout<<"Average Marks are:"<<Avgmarks<<endl;
	
	
	
	return 0;
}
