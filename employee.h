#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
public:
    string getName() const;
    double getSalary() const;
    char getGender() const;
    string getTitle() const;

    void setName(const string &newName);
    void setSalary(double newSalary);
    void setGender(char newGender);
    void setTitle(const string &newTitle);

    void print() const;

private:
    string name;
    double salary;
    char gender;
    string title;
};

#endif
