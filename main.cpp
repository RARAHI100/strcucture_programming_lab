#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

const int MAX_STUDENTS = 100;

struct Student {
    int id;
    string name;
    string department;
    float marks;
    string grade;
};

Student students[MAX_STUDENTS];
int studentCount = 0;

string calculateGrade(float marks) {
    if (marks >= 80) return "A+";
    if (marks >= 70) return "A";
    if (marks >= 60) return "A-";
    if (marks >= 50) return "B";
    if (marks >= 40) return "C";
    if (marks >= 33) return "D";
    return "F";
}

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int findStudent(int id) {
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == id) return i;
    }
    return -1;
}

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "\nStudent limit reached.\n";
        return;
    }

    Student s;
    cout << "\nEnter Student ID: ";
    while (!(cin >> s.id)) {
        cout << "Invalid ID. Enter again: ";
        clearInput();
    }

    if (findStudent(s.id) != -1) {
        cout << "A student with this ID already exists.\n";
        return;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Student Name: ";
    getline(cin, s.name);

    cout << "Enter Department: ";
    getline(cin, s.department);

    cout << "Enter Marks (0-100): ";
    while (!(cin >> s.marks) || s.marks < 0 || s.marks > 100) {
        cout << "Please enter marks between 0 and 100: ";
        clearInput();
    }

    s.grade = calculateGrade(s.marks);
    students[studentCount++] = s;

    cout << "\nStudent added successfully!\n";
}

void displayStudents() {
    if (studentCount == 0) {
        cout << "\nNo student records found.\n";
        return;
    }

    cout << "\n================ STUDENT LIST ================\n";
    cout << left << setw(8) << "ID"
         << setw(25) << "Name"
         << setw(20) << "Department"
         << setw(10) << "Marks"
         << setw(8) << "Grade" << '\n';
    cout << string(71, '-') << '\n';

    for (int i = 0; i < studentCount; i++) {
        cout << left << setw(8) << students[i].id
             << setw(25) << students[i].name
             << setw(20) << students[i].department
             << setw(10) << fixed << setprecision(2) << students[i].marks
             << setw(8) << students[i].grade << '\n';
    }
}

void searchStudent() {
    int id;
    cout << "\nEnter Student ID to search: ";
    while (!(cin >> id)) {
        cout << "Invalid ID. Enter again: ";
        clearInput();
    }

    int index = findStudent(id);

    if (index == -1) {
        cout << "Student not found.\n";
        return;
    }

    Student &s = students[index];
    cout << "\nStudent Found\n";
    cout << "ID         : " << s.id << '\n';
    cout << "Name       : " << s.name << '\n';
    cout << "Department : " << s.department << '\n';
    cout << "Marks      : " << fixed << setprecision(2) << s.marks << '\n';
    cout << "Grade      : " << s.grade << '\n';
}

void updateStudent() {
    int id;
    cout << "\nEnter Student ID to update: ";
    while (!(cin >> id)) {
        cout << "Invalid ID. Enter again: ";
        clearInput();
    }

    int index = findStudent(id);
    if (index == -1) {
        cout << "Student not found.\n";
        return;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter New Name: ";
    getline(cin, students[index].name);

    cout << "Enter New Department: ";
    getline(cin, students[index].department);

    cout << "Enter New Marks (0-100): ";
    while (!(cin >> students[index].marks) ||
           students[index].marks < 0 || students[index].marks > 100) {
        cout << "Please enter marks between 0 and 100: ";
        clearInput();
    }

    students[index].grade = calculateGrade(students[index].marks);
    cout << "Student updated successfully!\n";
}

void deleteStudent() {
    int id;
    cout << "\nEnter Student ID to delete: ";
    while (!(cin >> id)) {
        cout << "Invalid ID. Enter again: ";
        clearInput();
    }

    int index = findStudent(id);
    if (index == -1) {
        cout << "Student not found.\n";
        return;
    }

    for (int i = index; i < studentCount - 1; i++) {
        students[i] = students[i + 1];
    }

    studentCount--;
    cout << "Student deleted successfully!\n";
}

void showStatistics() {
    if (studentCount == 0) {
        cout << "\nNo data available.\n";
        return;
    }

    float total = 0;
    float highest = students[0].marks;
    float lowest = students[0].marks;

    for (int i = 0; i < studentCount; i++) {
        total += students[i].marks;
        if (students[i].marks > highest) highest = students[i].marks;
        if (students[i].marks < lowest) lowest = students[i].marks;
    }

    cout << "\n============== CLASS STATISTICS ==============\n";
    cout << "Total Students : " << studentCount << '\n';
    cout << "Average Marks  : " << fixed << setprecision(2)
         << total / studentCount << '\n';
    cout << "Highest Marks  : " << highest << '\n';
    cout << "Lowest Marks   : " << lowest << '\n';
}

void showMenu() {
    cout << "\n\n===============================================\n";
    cout << "       STUDENT MANAGEMENT SYSTEM\n";
    cout << "       Structure Programming Project\n";
    cout << "===============================================\n";
    cout << "1. Add Student\n";
    cout << "2. Display All Students\n";
    cout << "3. Search Student\n";
    cout << "4. Update Student\n";
    cout << "5. Delete Student\n";
    cout << "6. Show Class Statistics\n";
    cout << "7. Exit\n";
    cout << "===============================================\n";
    cout << "Enter your choice: ";
}

int main() {
    int choice;

    do {
        showMenu();

        while (!(cin >> choice)) {
            cout << "Invalid choice. Please enter 1-7: ";
            clearInput();
        }

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                showStatistics();
                break;
            case 7:
                cout << "\nThank you for using Student Management System!\n";
                break;
            default:
                cout << "\nInvalid choice. Please choose 1-7.\n";
        }
    } while (choice != 7);

    return 0;
}
