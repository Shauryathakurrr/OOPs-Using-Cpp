#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class student {
public:
    int id;
    char name[50];   // FIX: use char array instead of string
    float marks;

    void input() {
        cout << "Enter student id: ";
        cin >> id;
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Student id: " << id << endl;
        cout << "Student name: " << name << endl;
        cout << "Student marks: " << marks << endl;
    }

    void addStudent() {
        student s;
        ofstream file("students.txt", ios::app | ios::binary);
        s.input();
        file.write((char*)&s, sizeof(s));
        file.close();
        cout << "Detail added successfully!" << endl;
    }
};

int main() {
    int ch;
    cout << "student management system" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Delete Student" << endl;
    cout << "4. Update Student" << endl;
    cout << "5. Search Student" << endl;
    cout << "Enter your choice: ";
    cin >> ch;

    switch (ch) {
        case 1: {
            student s;
            s.addStudent();
            break;
        }

        case 2: {
            student s;
            ifstream file("students.txt", ios::in | ios::binary);
            while (file.read((char*)&s, sizeof(s))) {
                s.display();
                cout << "-----------------------" << endl;
            }
            file.close();
            break;
        }

        case 3: {
            // Code for delete student
            break;
        }

        case 4: {
            // Code for update student
            break;
        }

        case 5: {
            // Code for search student
            break;
        }

        default:
            cout << "Invalid choice!" << endl;
    }
}


void viewstudents() {
    student s;
    ifstream file("students.txt", ios::in | ios::binary);
    while (file.read((char*)&s, sizeof(s))) {
        s.display();
        cout << "-----------------------" << endl;
    }
    file.close();
}