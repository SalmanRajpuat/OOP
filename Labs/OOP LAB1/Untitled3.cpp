#include<iostream>
using namespace std;
int main(){
	
	int number;
	
	cout<<"Enter number:\n";
	cin>>number;
	
	
	switch(number){
		case 1:
			cout<<"2GB"<<endl;
			break;
		case 2:
			cout<<"4GB"<<endl;
			break;
		case 3:
			cout<<"16GB"<<endl;
			break;
		case 4:
			cout<<"32GB"<<endl;
			break;
		case 5:
			cout<<"64GB"<<endl;
			break;
		default:
			cout<<"inavlid number"<<endl;
			
	}
	
	
	
	return 0;
}
