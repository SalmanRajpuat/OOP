#include<iostream>
#include<string>
using namespace std;
class Android_Device{
	
	int IMEIno;
	string Type;
	string Make;
	int Modelno;
	float Memory;
	string Operating_System;
		
	public:
		//setters
	void setIMEIno(int IMI){
		IMEIno = IMI;
	}
	void setType(string Type){
		this->Type=Type;
	}
	void setMake(string Make){
		this->Make=Make;
	}
	void setMemory(float Memory){
		this->Memory = Memory;
	}
	void setOS(string OS){
		Operating_System=OS;
	}
	
	
	//getter
	int getIMEIno(){
		return IMEIno;
	}
	string getType(){
		return Type;
	}
	string getMake(){
		return Make;
	}
	float getMemory(){
		return Memory;
	}
	string getOS(){
		return Operating_System;
	}
		
	
};
int main(){
	Android_Device s1;
	s1.setIMEIno(040);
	s1.setMake("Samsung");
	s1.setType("Solo");
	s1.setMemory(128);
	s1.setOS("Linux");
	cout<<"IMEI No is:"<<s1.getIMEIno()<<endl;
	cout<<"Make of the mobile is:"<<s1.getMake()<<endl;
	cout<<"Type of the mobile is:"<<s1.getType()<<endl;
	cout<<"Memory of the mobile is:"<<s1.getMemory()<<endl;
	cout<<"Operating system of the device is:"<<s1.getOS()<<endl;
	
	
	
	
	return 0;
}
