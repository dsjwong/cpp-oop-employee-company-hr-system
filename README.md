# Employee & Company HR System (C++ OOP)

Models an HR system with employees and a company, demonstrating object composition, encapsulation, and class relationships in C++.

## Tech Stack

- **Language:** C++17
- **Concepts:** OOP, composition, encapsulation, multi-file compilation

## Class Design

- `Employee`: stores employee ID, name, salary, department. Provides getters/setters and formatted display.
- `Company`: owns a collection of `Employee` objects. Supports adding, removing, and searching employees, computing payroll totals, and filtering by department.

## Project Structure

```
cpp-oop-employee-company-hr-system/
├── main.cpp
├── employee.h / employee.cpp
└── company.h / company.cpp
```

## How to Build & Run

```bash
g++ -std=c++17 -o hr_system main.cpp employee.cpp company.cpp
./hr_system
```

## Features

- Add / remove employees
- Look up employee by ID or name
- Compute total payroll
- List employees by department
- Display formatted employee records
