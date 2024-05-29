// 4. WAP to create an application for Student Assessment using inheritance?
// a) There are 5 Students in the class.
// b) Each student has attributes like Name , Roll No for unique ID and 5 subjects like C, C++, Java,
// Python, IoT. Full mark of each subject is 100 that is combination of 40 Marks for internal and 60 for
// external. CreditPoint of each subject is 3.
// c) For each subject, accept number of classes attendered by students and total number of class taken
// by teacher and find the ratio between these two estimate the internal mark of the subject.
// d) external mark will be received from the teacher.
// e) Find grade of each subject.
// f) Find SGPA of student.
// g) Display the result as per the IGIT result format

#include <iostream>
#include <string>
using namespace std;

// Base class for Student
class Student {
	protected:
	    string name;
	    int rollNo;
	    int subjects[5];
	    int internalMarks[5];
	    int externalMarks[5];
	    float creditPoints[5];
	    float SGPA;
	
	public:
	    Student(string n, int r) {
	        name = n;
	        rollNo = r;
	    }
	
	    virtual void getInternalMarks() = 0;
	    virtual void getExternalMarks() = 0;
	    virtual void calculateGrade() = 0;
	    virtual void calculateSGPA() = 0;
	    virtual void displayResult() = 0;
};

// Derived class for Student Assessment
class StudentAssessment : public Student {
	public:
	    StudentAssessment(string n, int r) : Student(n, r) {}
	
	    void getInternalMarks()  {
	        cout << "Enter the number of classes attended and total classes for each subject:" << endl;
	        for (int i = 0; i < 5; i++) {
	            int attended, total;
	            cout << "Subject " << i + 1 << ": ";
	            cin >> attended >> total;
	            internalMarks[i] = (attended * 40) / total;
	        }
	    }
	
	    void getExternalMarks() {
	        cout << "Enter the external marks for each subject:" << endl;
	        for (int i = 0; i < 5; i++) {
	            cout << "Subject " << i + 1 << ": ";
	            cin >> externalMarks[i];
	        }
	    }
	
	    void calculateGrade() {
	        for (int i = 0; i < 5; i++) {
	            subjects[i] = internalMarks[i] + externalMarks[i];
	            if (subjects[i] >= 90) {
	                creditPoints[i] = 4.0;
	            } else if (subjects[i] >= 80) {
	                creditPoints[i] = 3.5;
	            } else if (subjects[i] >= 70) {
	                creditPoints[i] = 3.0;
	            } else if (subjects[i] >= 60) {
	                creditPoints[i] = 2.5;
	            } else if (subjects[i] >= 50) {
	                creditPoints[i] = 2.0;
	            } else {
	                creditPoints[i] = 0.0;
	            }
	        }
	    }
	
	    void calculateSGPA() {
	        float totalCreditPoints = 0.0;
	        float totalCredits = 0.0;
	        for (int i = 0; i < 5; i++) {
	            totalCreditPoints += creditPoints[i] * 3;
	            totalCredits += 3;
	        }
	        SGPA = totalCreditPoints / totalCredits;
	    }
	
	    void displayResult() {
	        cout << "Student Name: " << name << endl;
	        cout << "Registration Number: " << rollNo << endl;
	        cout << "Grades in all subjects:" << endl;
	        for (int i = 0; i < 5; i++) {
	            cout << "[" << i + 1 << "] Subject " << i + 1 << ": " << subjects[i] << endl;
	        }
	        cout << "SGPA: " << SGPA << endl;
	    }
};

int main() {
    const int numStudents = 5;
    cout << "Enter student name and registration number for student: " << endl;
    string name;
    int rollNo;
    cin >> name >> rollNo;
    StudentAssessment students(name, rollNo);

    students.getInternalMarks();
    students.getExternalMarks();
    students.calculateGrade();
    students.calculateSGPA();
    students.displayResult();

    return 0;
}
