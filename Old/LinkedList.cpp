// Krystle Dao Week 3 Homework
#include "Student.hpp"

class LinkedList {
    protected:
        struct Node {
            Student data;
            Node* next;

            Node(Student d = Student(), Node* n = nullptr) 
            : data(d), next(n) { }
        };
        
        Node* head;
    public:
        LinkedList() {
            head = nullptr;
        }

        ~LinkedList() {
            clear();
        }

        void clear() {
            Node* curr = head;

            while(curr != nullptr) {
                Node* temp = curr;
                curr = curr-> next;
                delete temp;
            }
            head = nullptr;
        }

        void insertStudent(const Student& d){
            Node* newNode = new Node(d);

            if(head == nullptr) {
                head = newNode;
            }
            else {
                Node* curr = head;
                while(curr != nullptr) {
                    curr = curr->next;
                }
                curr->next = newNode;
            }
        }

        void deleteStudent(Student s, )
};

