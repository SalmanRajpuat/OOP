#include <iostream>
#include <string>

using namespace std;

// Course structure
struct Course {
    int course_ID;
    string course_title;
    int credit_hrs;
};

// Function prototypes
void addCourse(Course courses[], int &size);
void updateCourse(Course courses[], int size);
void deleteCourse(Course courses[], int &size);
void displayCourse(const Course courses[], int size);
void displayAllCourses(const Course courses[], int size);

int main() {
    const int MAX_COURSES = 5;
    Course courses[MAX_COURSES];
    int size = 0;

    char choice;
    do {
        // Display menu options
        cout << "\nCourse Management Menu:\n";
        cout << "Press 1 to Add a Course\n";
        cout << "Press 2 to Update a Course\n";
        cout << "Press 3 to Delete a Course\n";
        cout << "Press 4 to Search and Display a Course\n";
        cout << "Press 5 to Display All Courses\n";
        cout << "Press e to Exit\n";
        cout << "Enter your choice (1-5) or e: ";
        cin >> choice;
        cin.ignore();

    
        switch (choice) {
            case '1':
                addCourse(courses, size);
                break;
            case '2':
                updateCourse(courses, size);
                break;
            case '3':
                deleteCourse(courses, size);
                break;
            case '4':
                displayCourse(courses, size);
                break;
            case '5':
                displayAllCourses(courses, size);
                break;
            case 'e':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 to 5 or e for exit." << endl;
        }
    } while (choice != 'e');

    return 0;
}

// Function to add a course
void addCourse(Course courses[], int &size) {
    if (size >= 5) {
        cout << "Cannot add more courses. Array is full." << endl;
        return;
    }

    Course newCourse;
    cout << "Enter Course ID: ";
    cin >> newCourse.course_ID;
    cin.ignore(); // To ignore newline character
    cout << "Enter Course Title: ";
    getline(cin, newCourse.course_title);
    cout << "Enter Credit Hours: ";
    cin >> newCourse.credit_hrs;

    courses[size] = newCourse;
    size++;
    cout << "Course added successfully." << endl;
}

// Function to update a course
void updateCourse(Course courses[], int size) {
    int id;
    cout << "Enter Course ID to update: ";
    cin >> id;

    for (int i = 0; i < size; ++i) {
        if (courses[i].course_ID == id) {
            cout << "Enter new Course Title: ";
            cin.ignore(); // To ignore the newline character 
            getline(cin, courses[i].course_title);
            cout << "Enter new Credit Hours: ";
            cin >> courses[i].credit_hrs;
            cout << "Course updated successfully." << endl;
            return;
        }
    }
    cout << "Course with ID " << id << " not found." << endl;
}

// Function to delete a course
void deleteCourse(Course courses[], int &size) {
    int id;
    cout << "Enter Course ID to delete: ";
    cin >> id;

    for (int i = 0; i < size; ++i) {
        if (courses[i].course_ID == id) {
            for (int j = i; j < size - 1; ++j) {
                courses[j] = courses[j + 1];
            }
            size--;
            cout << "Course deleted successfully." << endl;
            return;
        }
    }
    cout << "Course with ID " << id << " not found." << endl;
}

// Function to search and display a course
void displayCourse(const Course courses[], int size) {
    int id;
    cout << "Enter Course ID to search: ";
    cin >> id;

    for (int i = 0; i < size; ++i) {
        if (courses[i].course_ID == id) {
            cout << "Course ID: " << courses[i].course_ID << endl;
            cout << "Course Title: " << courses[i].course_title << endl;
            cout << "Credit Hours: " << courses[i].credit_hrs << endl;
            return;
        }
    }
    cout << "Course with ID " << id << " not found." << endl;
}

// Function to display all courses
void displayAllCourses(const Course courses[], int size) {
    if (size == 0) {
        cout << "No courses to display." << endl;
        return;
    }

    cout << "List of Courses:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Course ID: " << courses[i].course_ID << endl;
        cout << "Course Title: " << courses[i].course_title << endl;
        cout << "Credit Hours: " << courses[i].credit_hrs << endl;
        cout << "----------------------" << endl;
    }
}

