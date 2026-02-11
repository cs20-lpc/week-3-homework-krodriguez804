// Krystle Dao Week 3 Homework

// TODO:  Course class definitins go here.

#ifndef COURSE_HPP
#define COURSE_HPP

#include <iostream>
#include <string>
using namespace std;

class Course {
  protected:
    string courseName;
    int location;

  public:
    Course(string n = " ", int l = 0) {
      courseName = n;
      location = l;
    }  
    
    void display() const {
      cout << courseName << " " << location;
    }
};

#endif