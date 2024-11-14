#include <iostream>
#include <fstream>
#include <iomanip>
#include<string>

using namespace std;
  bool openFileIn(fstream &, string);
   void showContents(fstream &);
int main() {
  fstream dataFile;
  if(openFileIn(dataFile, "table.txt"))
  {
  	cout<<"File Opened succesfully.\n";
  	cout<<"Contents in the file are:\n";
  	showContents(dataFile);
  	cout<<"\nDone\n";
  }
  else
  cout<<"File open error!"<<endl;

 

    return 0;
}

bool openFileIn(fstream& file, string name){
	file.open(name, ios::in);
	if(!file){
		cout<<"doesnt exist";
		return false;
	}
	else{
		return true;
	}
}
void showContents(fstream &file){
	string line;
	while(file>>line){
		cout<<line<<endl;
	}
}
