# strcucture_programming_lab
# 🎓 Student Management System

A simple **console-based Student Management System** developed in **C++** as a laboratory project for the **Structure Programming** course.

---

## 📌 Project Information

| Information              | Details                         |
| ------------------------ | ------------------------------- |
| **Project Title**        | Student Management System       |
| **Programming Language** | C++                             |
| **Course**               | Structure Programming           |
| **Academic Level**       | 1st Year, 2nd Semester          |
| **Project Type**         | Console-Based C++ Project       |
| **Purpose**              | Academic Laboratory Requirement |

---

## 📖 About the Project

The **Student Management System** is a beginner-level console-based C++ application developed as part of my **Structure Programming laboratory requirement** during my 1st Year, 2nd Semester.

The main purpose of this project is to apply the fundamental programming concepts learned throughout the course in a practical application.

Instead of implementing small individual programming problems, this project combines several basic C++ concepts into one complete system.

The system is designed to manage basic student academic information, including:

* Student ID
* Student Name
* Department
* Marks
* Grade

The project focuses on fundamental programming techniques such as **structures, arrays, functions, loops, conditional statements, searching, data manipulation, and input validation**.

---

## ✨ Main Features

### 1. ➕ Add Student

Users can add a new student by entering:

* Student ID
* Student Name
* Department
* Marks

The system automatically calculates the student's grade based on the entered marks.

---

### 2. 📋 Display All Students

Displays all stored student records in a formatted table containing:

* Student ID
* Name
* Department
* Marks
* Grade

---

### 3. 🔍 Search Student

Users can search for a specific student by entering the student's **ID**.

If the student exists, their complete information is displayed.

---

### 4. ✏️ Update Student

Existing student information can be updated using the student's ID.

The system allows modification of:

* Student Name
* Department
* Marks

The grade is automatically recalculated when the marks are changed.

---

### 5. 🗑️ Delete Student

Users can remove a student record by entering the student's ID.

The corresponding array element is removed and the remaining records are shifted accordingly.

---

### 6. 📊 Class Statistics

The system calculates and displays basic class statistics, including:

* Total number of students
* Average marks
* Highest marks
* Lowest marks

---

## 🧠 Programming Concepts Used

This project was developed using the fundamental concepts covered in a **Structure Programming** course.

### Core Concepts

* `struct`
* Variables and data types
* Arrays
* Functions
* Strings
* Conditional statements
* `if-else`
* `switch-case`
* `while` loop
* `do-while` loop
* Input validation
* Searching
* Array element shifting
* Mathematical calculations
* Formatted console output

---

## 📁 Project Structure

```text
Student_Management_System_CPP/
│
├── main.cpp
├── README.md
├── Student_Management_System_CPP.code-workspace
└── .gitignore
```

### File Description

| File                                           | Description                         |
| ---------------------------------------------- | ----------------------------------- |
| `main.cpp`                                     | Main C++ source code                |
| `README.md`                                    | Project documentation               |
| `Student_Management_System_CPP.code-workspace` | VS Code workspace configuration     |
| `.gitignore`                                   | Files and folders excluded from Git |

---

## ⚙️ How to Run the Project

### Step 1: Install a C++ Compiler

A C++ compiler such as **MinGW-w64** or **MSYS2** is required.

Open the VS Code terminal and check whether `g++` is installed:

```bash
g++ --version
```

If the compiler version is displayed, the C++ compiler is ready to use.

---

### Step 2: Open the Project

1. Download or clone this repository.
2. Open **Visual Studio Code**.
3. Select:

```text
File → Open Folder
```

4. Select the `Student_Management_System_CPP` folder.

---

### Step 3: Compile the Program

Open the VS Code terminal and run:

```bash
g++ main.cpp -o student_management
```

---

### Step 4: Run the Program

#### Windows

```bash
.\student_management.exe
```

#### Linux / macOS

```bash
./student_management
```

---

## 🖥️ Sample Project Workflow

When the program starts, a menu is displayed containing different operations.

```text
========================================
       STUDENT MANAGEMENT SYSTEM
========================================

1. Add Student
2. Display All Students
3. Search Student
4. Update Student
5. Delete Student
6. Show Class Statistics
7. Exit

Enter your choice:
```

---

### ➕ Add Student

Example:

```text
Enter Student ID: 101
Enter Student Name: Raihan Alam
Enter Department: CSE
Enter Marks: 85

Student added successfully!
Grade: A+
```

---

### 📋 Display Students

The system displays the stored records in a formatted table.

```text
---------------------------------------------------------------
ID       Name                 Department       Marks    Grade
---------------------------------------------------------------
101      Raihan Alam          CSE              85       A+
102      Ahmed Hasan          EEE              72       A
103      Sakib Khan           CSE              64       A-
---------------------------------------------------------------
```

---

### 🔍 Search Student

Example:

```text
Enter Student ID: 101

Student Found!

ID         : 101
Name       : Raihan Alam
Department : CSE
Marks      : 85
Grade      : A+
```

---

### ✏️ Update Student

The user can enter a student's ID and modify their information.

For example:

```text
Enter Student ID: 101

Enter New Name: Raihan Alam
Enter New Department: CSE
Enter New Marks: 90

Student updated successfully!
New Grade: A+
```

---

### 🗑️ Delete Student

Example:

```text
Enter Student ID: 103

Student deleted successfully!
```

---

### 📊 Class Statistics

The system calculates basic statistics from the stored student records.

Example:

```text
========================================
          CLASS STATISTICS
========================================

Total Students : 3
Average Marks  : 73.67
Highest Marks  : 90
Lowest Marks   : 64
```

---

## 🎯 Grading System

|  Marks | Grade |
| -----: | :---: |
| 80–100 |   A+  |
|  70–79 |   A   |
|  60–69 |   A-  |
|  50–59 |   B   |
|  40–49 |   C   |
|  33–39 |   D   |
|   0–32 |   F   |

The grade is automatically determined by the program according to the student's marks.

---

## 💾 Data Storage

This is a basic **Structure Programming** project, so student information is stored temporarily in an **array** while the program is running.

The current version does **not** use:

* Database
* External files
* Cloud storage

Therefore, all student records are lost when the program terminates.

This approach keeps the project simple and focused on the fundamental programming concepts taught in the laboratory course.

---

## 🎓 Why I Created This Project

Creating a programming project was part of my **Structure Programming laboratory requirement**.

I chose a **Student Management System** because it provides a practical way to combine multiple basic programming concepts into a single application.

Through this project, I practiced:

* Using structures
* Working with arrays
* Creating and using functions
* Implementing loops
* Using conditional statements
* Searching data
* Updating and deleting records
* Shifting array elements
* Performing mathematical calculations
* Validating user input
* Formatting console output

This project helped me understand how fundamental programming concepts can be combined to solve a real-world-style problem.

---

## 🚀 Future Improvements

The current system can be extended with several additional features:

* [ ] File handling for permanent student records
* [ ] Student login and authentication
* [ ] Attendance management
* [ ] Multiple subjects and course management
* [ ] GPA calculation
* [ ] Student ranking
* [ ] Sorting students by marks
* [ ] Separate header and source files
* [ ] Database integration
* [ ] Graphical User Interface (GUI)

---

## 👨‍🎓 Academic Information

| Information             | Details                                  |
| ----------------------- | ---------------------------------------- |
| **Student**             | Md Raihan Alam                           |
| **Program**             | BSc in Computer Science and Engineering  |
| **Academic Level**      | 1st Year, 2nd Semester                   |
| **Course**              | Structure Programming                    |
| **Project Type**        | Laboratory Project                       |
| **Project Requirement** | Development of a C++ Programming Project |

---

## 🏁 Conclusion

The **Student Management System** is a beginner-level C++ project developed to fulfill my **Structure Programming laboratory project requirement**.

The project demonstrates how fundamental programming concepts can be combined to build a simple but functional application.

Although the system is intentionally kept simple, it provides a strong foundation for developing more advanced student management applications using **file handling, databases, authentication, GUI frameworks, and other modern technologies** in the future.

---

## ⭐ Project Status

**Completed — Academic Laboratory Project**

> This project was developed for educational purposes as part of a Structure Programming laboratory course.
