Student Record Management System
📌 Project Overview

The Student Record Management System is a menu-driven application developed using the C programming language. It is designed to manage student records efficiently using a Singly Linked List and Dynamic Memory Allocation.

The application allows users to add, delete, display, modify, search, sort, save, and manage student records. It also supports file handling to store student information permanently.

🎯 Objectives

- To understand and implement Singly Linked Lists.
- To use Dynamic Memory Allocation.
- To develop modular programming using functions.
- To implement searching and sorting operations.
- To perform file handling in C.
- To understand memory allocation and deallocation.

✨ Features

1. Add Student Record – Add new student details with an automatically assigned unique roll number.
2. Delete Student Record – Delete student records using roll number or name.
3. Display Student Records – Display all student details in a tabular format.
4. Modify Student Record – Update student details using roll number, name, or percentage.
5. Save Records – Store student information in a file.
6. Load Records – Automatically load previously saved records when the application starts.
7. Sort Records – Sort student records alphabetically by name or by percentage in descending order.
8. Delete All Records – Delete all student records and release allocated memory.
9. Reverse Linked List – Reverse the order of student records.
10. Exit – Save and exit or exit without saving.

🛠️ Technologies Used

- Programming Language: C
- Data Structure: Singly Linked List
- Memory Management: Dynamic Memory Allocation ("malloc()" and "free()")
- File Handling: File operations in C
- Compiler: GCC

📂 Project Structure

Student-Record-Management-System/
│
├── stud_main.c
├── stud_add.c
├── stud_del.c
├── stud_show.c
├── stud_mod.c
├── stud_save.c
├── student.h
├── student.dat
├── student
└── README.md

📋 Student Record Structure

Each student record contains:

- Roll Number – Unique identification number.
- Name – Student name.
- Percentage – Student academic percentage.
- Next Pointer – Pointer to the next student node.

⚙️ Compilation

Compile all the source files using GCC:

gcc stud_main.c stud_add.c stud_del.c stud_show.c stud_mod.c stud_save.c -o student

▶️ Execution

Run the executable using:

./student

💾 File Handling

Student records are stored in a file named "student.dat".

- Existing records are loaded automatically when the program starts.
- Records can be saved using the Save option.
- Users can choose to save and exit or exit without saving.

✅ Input Validation

- Roll numbers must be positive and unique.
- Student names must not be empty.
- Percentage must be between 0 and 100.
- Invalid menu choices are handled appropriately.
- Non-existing records are handled with suitable messages.

📚 Concepts Learned

Through this project, we gained practical knowledge of:

- Structures and Pointers
- Singly Linked Lists
- Dynamic Memory Allocation
- Functions and Modular Programming
- Searching and Sorting
- File Handling
- Memory Management

👩‍💻 Conclusion

The Student Record Management System provides a simple and efficient way to manage student information using C programming concepts. This project helped us understand linked list operations, pointers, dynamic memory allocation, file handling, and modular programming through practical implementation
