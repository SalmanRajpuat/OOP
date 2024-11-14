#include <iostream>
#include <string>

using namespace std;

class Laboratory {
protected:
    string name;
    string location;

public:
    // No-argument constructor
    Laboratory() : name("NoName"), location("NULL") {}

    // Member function to input data
    virtual void input() {
        cout << "Enter Laboratory name: ";
        getline(cin, name);
        cout << "Enter Laboratory location: ";
        getline(cin, location);
    }

    // Member function to show data
    virtual void show() {
        cout << "Laboratory Name: " << name << endl;
        cout << "Laboratory Location: " << location << endl;
    }

    // Virtual destructor
    virtual ~Laboratory() {}
};

class WetLab : public Laboratory {
private:
    int no_of_microscopes;
    string scientist_name;

public:
    // Overriding input function
     void input() {
        cout << "Enter Laboratory name: ";
        getline(cin, name);
        cout << "Enter Laboratory location: ";
        getline(cin, location);
        
        cout << "Enter number of microscopes: ";
        cin >> no_of_microscopes;
        cin.ignore(); // To ignore the newline character left in the buffer
        cout << "Enter Scientist's name: ";
        getline(cin, scientist_name);
    }

    // Overriding show function
    void show()  {
        cout << "Laboratory Name: " << name << endl;
        cout << "Laboratory Location: " << location << endl;
        cout << "Number of Microscopes: " << no_of_microscopes << endl;
        cout << "Scientist's Name: " << scientist_name << endl;
    }

    // Setter and Getter 
    void setNoOfMicroscopes(int microscopes) 
	{ 
		no_of_microscopes = microscopes; 
	}
    int getNoOfMicroscopes() 
	{
	 	 return no_of_microscopes;
	}

   
    void setScientistName(const string& name)
	{ 
	 	scientist_name = name;
	}
    string getScientistName() 
	{
	 return scientist_name; 
	}
};

class DryLab : public Laboratory {
private:
    int no_of_computers;
    int capacity;

public:
    // Overriding input function
    void input() {
        cout << "Enter Laboratory name: ";
        getline(cin, name);
        cout << "Enter Laboratory location: ";
        getline(cin, location);
        
        cout << "Enter number of computers: ";
        cin >> no_of_computers;
        cout << "Enter capacity: ";
        cin >> capacity;
        cin.ignore(); // To ignore the newline character left in the buffer
    }

    // Overriding show function
    void show() {
        cout << "Laboratory Name: " << name << endl;
        cout << "Laboratory Location: " << location << endl;
        cout << "Number of Computers: " << no_of_computers << endl;
        cout << "Capacity: " << capacity << endl;
    }

    // Setter and Getter for no_of_computers
    void setNoOfComputers(int computers)
	{
	  no_of_computers = computers; 
	}
	
    int getNoOfComputers() 
	{
	  return no_of_computers;
	}

    // Setter and Getter for capacity
    void setCapacity(int cap) 
	{
	 capacity = cap; 
	}
    int getCapacity()  
	{
	 return capacity;
	}
};

int main() {
    // instance of Laboratory
    Laboratory lab;
    lab.input();
    lab.show();
    cout << endl;


  //instance of WetLab
   	Laboratory *p;
   	WetLab w;
   	p =&w;
   	p->input();
   	p->show();
   	cout<<endl;
  

    // instance of DryLab
    DryLab dryLab;
    dryLab.input();
    dryLab.show();
    cout << endl;

    return 0;
}

