// TODO:  Student class methods implementation here.
// Krystle Dao Week 3 Homework

#include "Student.hpp"

Student::Student() {
    id = 0;
    name = " ";
    gpa = 0.0;
}

Student::Student(int i, string n, double g) {
    id = i;
    name = n;
    gpa = g;
}

int Student::getId() const {
    return id;
}

void Student::addCourse(const Course& c) {
    courses.append(c);
}

void Student::display() const {
    cout << id << " " << name << " " << gpa;

    if(courses.isEmpty()) {
        cout << " None";
    }
    cout << endl;
}

void Student::displayWithCourses() const {
    cout << "Found: " << id << " " << name << " " << gpa << endl;
    
    if(courses.isEmpty()) {
        cout << "Courses: None" << endl;
    }
    else {
        cout << "Courses: " << endl;
        courses.getElement(0).display();
        cout << endl;

        for(int i = 1; i < courses.getLength(); ++i) {
            cout << "    ";
            courses.getElement(i).display();
            cout << endl;
        }
    }

}