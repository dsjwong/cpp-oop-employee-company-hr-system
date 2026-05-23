#include "employee.h"
#include <iostream>
using namespace std;

string Employee::getName() const { return name; }
double Employee::getSalary() const { return salary; }
char Employee::getGender() const { return gender; }
string Employee::getTitle() const { return title; }

void Employee::setName(const string &newName) { name = newName; }
void Employee::setSalary(double newSalary) { salary = newSalary; }
void Employee::setGender(char newGender) { gender = newGender; }
void Employee::setTitle(const string &newTitle) { title = newTitle; }

void Employee::print() const {
    cout << "[Name: " << name << ", Title: " << title << ", Gender: " << gender << ", Salary: " << salary << "]" << endl;
}
