// TO DO:  Student class definition  here.
// Krystle Dao Week 3 Homework

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "Course.hpp"
#include "LinkedList.hpp"
#include <string>

class Student {
    protected:
        int id;
        string name;
        double gpa;
        LinkedList<Course> courses;

    public:
        Student();
        Student(int, string, double);

        int getId() const;
        
        void addCourse(const Course&);
        void display() const;
        void displayWithCourses() const;


};

#endif

