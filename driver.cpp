// Krystle Dao Weeki 3 Homework

#include <iostream>
#include <string>
#include "Student.hpp"
#include "LinkedList.hpp"
// TO DO:
// If you want to use the LinkedList code you wrote in Week 4 Mon Lab for creating list
// include LinkedList.hpp here and also add it both LinkedList.hpp and LinkedList.tpp to this repository.

using namespace std;

int main()
{
  // TO DO: Insert your code to display a menu for user to select to add/delete/view Student and course information.
  LinkedList<Student> students;

  int choice;

  cout << "1. Insert Student" << endl;
  cout << "2. Delete Student" << endl;
  cout << "3. Search Student" << endl;
  cout << "4. Display All" << endl;
  cout << "5. Count Students" << endl;
  cout << "6. Add Course" << endl;
  cout << "7. Exit" << endl;

  do {

    cout << "Enter choice: ";
    
    cin >> choice;

    if (cin.fail()) {
      cin.clear();
      cin.ignore(10000, '\n');
      continue;
    }

    if (choice == 1) {
      int id;
      string name;
      double gpa;

      cout << "Enter ID: " ;
      cin >> id;
      cout << "Enter Name: ";
      cin >> name;
      cout << "Enter GPA: ";
      cin >> gpa;
      cout << endl;

      students.append(Student(id, name, gpa));
    }
    
    else if (choice == 2) {
      int id;
      cout << "Enter ID to delete: ";
      cin >> id;

      for(int i = 0; i < students.getLength(); ++i) {
        if(students.getElement(i).getId() == id) {
          students.remove(i);
          cout << "Deleted student with ID " << id << endl;
          break;
        }
      }
    }
    
    else if (choice == 3) {
      int id;
      cout << "Enter ID to search: ";
      cin >> id;

      bool found = false;

      for(int i = 0; i < students.getLength(); ++i) {
        if(students.getElement(i).getId() == id) {
          students.getElement(i).displayWithCourses();
          found = true;
          break;
        }
      }
      if (!found) {
          cout << "Student not found." << endl;
      }
    }

    else if (choice == 4) {
        cout << "Students in List:" << endl;
      
        for(int i = 0; i < students.getLength(); ++i) {
          students.getElement(i).display();
        }
    }

    else if (choice == 5) {
      cout << "Total students: " << students.getLength() << endl;
    }

    else if (choice == 6) {
      int id;
      int loc;
      string cName;

      cout << "Enter ID: ";
      cin >> id;

      cout << "Enter Course Name: ";
      cin.ignore();
      getline(cin, cName);

      cout << "Enter location: ";
      cin >> loc;

      for(int i = 0; i < students.getLength(); ++i) {
        if(students.getElement(i).getId() == id) {
          students.getElement(i).addCourse(Course(cName, loc));
          break;
        }
      }
    }

  } while (choice != 7);

  return 0;

}
