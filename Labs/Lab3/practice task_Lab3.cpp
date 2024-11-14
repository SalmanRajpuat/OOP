#include<iostream>
#include<string>
using namespace std;
class English{
	string sentence;
	int size;
	public:
		English(){
			cout<<"Enter the Sentence:";
			cin>>sentence;
			size=string.length(sentence);
			cout<<"Size is:"<<size;
		}
};
int main(){
	English obj1;
	
	
	return 0;
}
