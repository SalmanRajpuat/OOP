#include<iostream>
#include<string>
using namespace std;
#include<fstream>
#include<cstdlib>


int main(){
	ifstream inFile;
	inFile.open("prices.txt");
	
	if(inFile.fail()){
		cout<<"\n The file was not successfully opened \n"
			<<"Please check that the file exists."<<endl;
			exit(1);
	}
	
	cout<<"File is opened\n";
	string line;
	while(inFile){
		getline(inFile,line);
		cout<<line<<endl;
	}
	
	inFile.close();
	
	cout<<"int:"<<sizeof(int)<<endl;
	
	return 0;
	
}
