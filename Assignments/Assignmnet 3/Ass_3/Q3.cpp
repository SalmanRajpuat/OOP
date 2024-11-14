#include <iostream>
#include <string>
using namespace std;

// Base class
class GraduateCourse {
protected:
    string courseID;
    string courseName;
    int creditHours;
    double courseFee;

public:
    // Parameterized constructor
    GraduateCourse(string id, string name, int hours, double fee);

    // Destructor 
    ~GraduateCourse();

    // Getter functions
    string getCourseID() const;
    string getCourseName() const;
    int getCreditHours() const;
    double getCourseFee() const;
};

// Implementation of GraduateCourse functions
GraduateCourse::GraduateCourse(string id, string name, int hours, double fee)
    : courseID(id), courseName(name), creditHours(hours), courseFee(fee) {}

GraduateCourse::~GraduateCourse() {}

string GraduateCourse::getCourseID() const 
{
    return courseID;
}
string GraduateCourse::getCourseName() const
{
    return courseName;
}
int GraduateCourse::getCreditHours() const
{
    return creditHours;
}
double GraduateCourse::getCourseFee() const
{
    return courseFee;
}

// Derived class
class ResearchCourse : public GraduateCourse {
private:
    double experimentFee;

public:
    // Parameterized constructor
    ResearchCourse(string id, string name, int hours, double fee, double expFee);

    // Functions
    void setExperimentFee(double expFee);
    void display() const;
    double totalFee() const;
};

// Implementation of ResearchCourse functions
ResearchCourse::ResearchCourse(string id, string name, int hours, double fee, double expFee)
    : GraduateCourse(id, name, hours, fee), experimentFee(expFee) {}

void ResearchCourse::setExperimentFee(double expFee) {
    experimentFee = expFee;
}

void ResearchCourse::display() const {
    cout << "Course ID: " << getCourseID() << endl;
    cout << "Course Name: " << getCourseName() << endl;
    cout << "Credit Hours: " << getCreditHours() << endl;
    cout << "Course Fee: Rs. " << getCourseFee() << endl;
    cout << "Experiment Fee: Rs. " << experimentFee << endl;
}

double ResearchCourse::totalFee() const {
    return getCourseFee() + experimentFee;
}

int main() {
    // Creating an instance of ResearchCourse
    ResearchCourse researchCourse("CS2133", "OOP", 3, 10000, 5000);

    // Displaying attributes and total fee
    researchCourse.display();
    cout << "Total Fee: Rs. " << researchCourse.totalFee() << endl;

    return 0;
}

