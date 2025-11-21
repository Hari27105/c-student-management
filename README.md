# Student Management System in C 🎓

A professional, menu-driven student management system built in C programming language. Perfect for fresher portfolios, job applications (Cognizant GenC, TCS, Wipro, Infosys), and coding interviews.

## 📋 Project Overview

This mini-project demonstrates core C programming concepts through a practical application. The system manages student records including roll number, name, marks, and automatic grade calculation.

## ✨ Features

### Core Functionality
- ✅ Add new student records
- ✅ Display all students in tabular format
- ✅ Search student by roll number
- ✅ Automatic grade calculation (A-F based on marks)
- ✅ Input validation (marks range: 0-100)
- ✅ Menu-driven interface
- ✅ Clean, readable, and well-documented code

### Technical Highlights
- Uses **structures** to organize student data
- Implements **arrays** for data storage
- Modular code with **functions**
- **Input validation** and error handling
- Professional console output formatting

## 🛠️ Technologies Used

- **Language**: C (ANSI C / C99)
- **Compiler**: GCC / MinGW / Turbo C
- **Concepts**: Structures, Arrays, Functions, Loops, Switch-case

## 📁 Project Structure

```
c-student-management/
│
├── student_management.c    # Main source code
└── README.md              # Project documentation
```

## 🚀 How to Run

### Prerequisites
- GCC compiler (Linux/Mac) or MinGW (Windows)
- Command prompt / Terminal

### Compilation & Execution

**Linux / Mac:**
```bash
gcc student_management.c -o student_management
./student_management
```

**Windows (MinGW):**
```bash
gcc student_management.c -o student_management.exe
student_management.exe
```

**Online Compilers:**
- Copy code to [OnlineGDB](https://www.onlinegdb.com/online_c_compiler)
- Click "Run"

## 📊 Sample Output

```
================================================
   STUDENT MANAGEMENT SYSTEM IN C
================================================
   Author: Hariprasad J Kadu
   Portfolio Project for Job Applications
================================================

========== MAIN MENU ==========
1. Add New Student
2. Display All Students
3. Search Student by Roll Number
4. Exit
================================
Enter your choice (1-4): 1

--- Add New Student ---
Enter Roll Number: 101
Enter Student Name: Rahul Sharma
Enter Marks (0-100): 85

✓ Student record added successfully!
Grade assigned: B

========== MAIN MENU ==========
1. Add New Student
2. Display All Students
3. Search Student by Roll Number
4. Exit
================================
Enter your choice (1-4): 2

========== STUDENT RECORDS ==========
Roll No    Name                      Marks      Grade   
-----------------------------------------------------
101        Rahul Sharma              85.00      B       
-----------------------------------------------------
Total Students: 1
```

## 🎯 Key Concepts Demonstrated

| Concept | Implementation |
|---------|----------------|
| **Structures** | `Student` struct with rollNo, name, marks, grade |
| **Arrays** | Array of structures to store multiple students |
| **Functions** | Modular functions for add, display, search, grade calculation |
| **Loops** | While loop for menu, for loops for iteration |
| **Switch-Case** | Menu selection logic |
| **Input Validation** | Marks range checking (0-100) |
| **Pointers** | Pass-by-reference using pointers for count updates |

## 📚 Grade Calculation Logic

| Marks Range | Grade |
|-------------|-------|
| 90 - 100 | A |
| 80 - 89 | B |
| 70 - 79 | C |
| 60 - 69 | D |
| 50 - 59 | E |
| 0 - 49 | F |

## 🎓 Learning Outcomes

This project showcases:
- Clean and readable code structure
- Modular programming approach
- Real-world application development
- User input handling and validation
- Professional documentation
- Interview-ready coding skills

## 💼 Why This Project?

✅ **Portfolio-Ready**: Professional structure and documentation  
✅ **Interview-Friendly**: Easy to explain concepts  
✅ **Practical Application**: Real-world use case  
✅ **Beginner to Intermediate**: Demonstrates progression  
✅ **Cognizant/TCS/Wipro Ready**: Suitable for fresher applications

## 👨‍💻 Author

**Hariprasad J Kadu**  
- 🎓 Electronics & Computer Engineering (2025)
- 💼 Aspiring Software Developer | Fresher
- 🐍 Skills: C, Python, SQL, Data Structures

## 🔗 Contact

- **LinkedIn**: [Hariprasad Kadu](https://www.linkedin.com/in/hariprasad-kadu-855382314/)
- **GitHub**: [Hari27105](https://github.com/Hari27105)
- **Email**: kaduhariprasad@gmail.com

## 📝 Technical Skills Highlighted

- C Programming
- Data Structures (Structures, Arrays)
- Modular Programming
- Input/Output Handling
- Algorithm Implementation
- Code Documentation

## 🚀 Future Enhancements (Optional)

- File handling (save/load student data)
- Delete/Update student records
- Sort students by marks
- Calculate class average
- Export data to CSV

## 📄 License

Open source - Available for educational and portfolio purposes

## 🙏 Acknowledgments

Created as a portfolio project for fresher job applications at Cognizant GenC, TCS, Wipro, Infosys, and other IT companies.

---

**⭐ Star this repository if you find it helpful!**  
**💼 Perfect for freshers' resumes and job applications**