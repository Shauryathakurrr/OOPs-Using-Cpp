#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
};


class Student : public Person {
private:
    float marks[5];

public:
    void setMarks() {
        cout << "Enter 5 subject marks:\n";
        for(int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }


    void calculate() {
        float sum = 0;
        for(int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        float gpa = (sum / 5) / 10;  // simple GPA logic
        cout << "Student GPA: " << gpa << endl;
    }
};

class Professor : public Person {
private:
    float basic, bonus;

public:
    void setSalary(float b, float bo) {
        basic = b;
        bonus = bo;
    }

    
    void calculate() {
        float salary = basic + bonus;
        cout << "Professor Salary: " << salary << endl;
    }
};

int main() {
    Student s;
    s.setPerson("Rahul", 20);
    s.setMarks();
    s.calculate();

    cout << endl;

    Professor p;
    p.setPerson("Dr. Sharma", 45);
    p.setSalary(50000, 10000);
    p.calculate();

    return 0;
}