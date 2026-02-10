// WAP to add student details and display record
#include <iostream>
using namespace std;

class student
{
private:
    int id;
    char name[20];
    int arr[5];
    int total;
    float percentage;
    char grade;

public:
    // Parameterized Constructor
    student(int i, char n[], int m[])
    {
        id = i;

        // copy name
        int k = 0;
        while (n[k] != '\0')
        {
            name[k] = n[k];
            k++;
        }
        name[k] = '\0';

        // copy marks
        for (int j = 0; j < 5; j++)
        {
            arr[j] = m[j];
        }

        cal();   // calculate automatically
    }

    void cal()
    {
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += arr[i];
        }

        percentage = total / 5.0;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void print()
    {
        cout << "\nStudent Record\n";
        cout << "Student ID       : " << id << endl;
        cout << "Student Name     : " << name << endl;
        cout << "Total Marks      : " << total << endl;
        cout << "Percentage Marks : " << percentage << "%" << endl;
        cout << "Grade            : " << grade << endl;
    }
};

int main()
{
    int id;
    char name[20];
    int marks[5];

    cout << "Enter student id: ";
    cin >> id;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        if (marks[i] < 0 || marks[i] > 100)
        {
            cout << "Invalid marks! Enter again: ";
            i--;
        }
    }

    student s(id, name, marks);  // constructor call
    s.print();

    return 0;
}
