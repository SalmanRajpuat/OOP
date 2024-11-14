#include <iostream>
#include <string>

using namespace std;

// Base class Record
class Record {
protected:
    int rollNo;
    string course1Name;
    string course2Name;

public:
    // Parameterized constructor
    Record(int roll, const string& course1, const string& course2)
        : rollNo(roll), course1Name(course1), course2Name(course2) {}

    // Getter functions
    int getRollNo() const
	 { return rollNo; }
	 
    string getCourse1Name()  
	{ return course1Name; }
	
    string getCourse2Name() 
	 { return course2Name; }
};

// Derived class CourseRecord
class CourseRecord : public Record {
protected:
    int marksCourse1;
    int marksCourse2;

public:
    // Parameterized constructor
    CourseRecord(int roll, const string& course1, const string& course2, int marks1, int marks2)
        : Record(roll, course1, course2), marksCourse1(marks1), marksCourse2(marks2) {}

    // Getter functions
    int getMarksCourse1() 
	 { return marksCourse1; }
	 
    int getMarksCourse2() 
	 { return marksCourse2; }
};

// Derived class CourseResult
class CourseResult : public CourseRecord {
private:
    int totalMarks;

public:
    // Parameterized constructor
    CourseResult(int roll, const string& course1, const string& course2, int marks1, int marks2)
        : CourseRecord(roll, course1, course2, marks1, marks2) {
        totalMarks = marksObtained(); 
    }

    // Function to calculate and return total marks
    int marksObtained() {
         totalMarks = marksCourse1 + marksCourse2;
         return totalMarks;
    }

    // Function to display all information
    void display()  {
        cout << "Roll No: " << getRollNo() << endl;
        cout << "Course 1 Name: " << getCourse1Name() << endl;
        cout << "Course 2 Name: " << getCourse2Name() << endl;
        cout << "Marks in Course 1: " << getMarksCourse1() << endl;
        cout << "Marks in Course 2: " << getMarksCourse2() << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    // instance of CourseResult
    CourseResult result(1, "Mathematics", "Physics", 85, 90);
    result.display();

    return 0;
}

