#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;
int main() {


	string input;


	fstream dataFile("murphy.txt", ios::out);
	dataFile << "Jayne Murogt h$, dskfhad \n asdlfhkdshfiewf $kfaksdfh";
	dataFile.close();


	 dataFile.open("murphy.txt", ios::in);

	if (dataFile) {
		getline(dataFile, input, '$');

		while (dataFile) {
			cout << input << " ";
			getline(dataFile, input, '$');

		}
	}












	return 0;
}