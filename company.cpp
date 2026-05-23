#include "company.h"
#include <iostream>
using namespace std;

void Company::init() {
    currSize = 0;
    for (int i = 0; i < COMPANY_MAX_SIZE; i++) employees[i] = nullptr;
}

void Company::addEmployee(Employee* emp) {
    if (hasEmployee(emp->getName())) {
        cout << "Employee " << emp->getName() << " already exists in the company" << endl;
        return;
    }
    if (currSize == COMPANY_MAX_SIZE) {
        cout << "Company is full" << endl;
        return;
    }
    employees[currSize++] = emp;
    cout << "Employee " << emp->getName() << " is hired" << endl;
}

int Company::findEmployee(const string& empName) const {
    for (int i = 0; i < currSize; i++)
        if (employees[i]->getName() == empName) return i;
    return -1;
}

bool Company::hasEmployee(const string& empName) const {
    return findEmployee(empName) != -1;
}

void Company::fireEmployee(const string& empName) {
    int index = findEmployee(empName);
    if (index == -1) { cout << "Employee " << empName << " is not found in the company" << endl; return; }
    cout << "Employee " << empName << " is fired" << endl;
    for (int i = index; i < currSize - 1; i++) employees[i] = employees[i + 1];
    currSize--;
}

void Company::promoteEmployee(const string& empName, const string& newTitle) {
    int index = findEmployee(empName);
    if (index == -1) { cout << "Employee " << empName << " is not found in the company" << endl; return; }
    employees[index]->setTitle(newTitle);
    cout << "Employee " << empName << " is promoted to " << newTitle << endl;
}

void Company::adjustSalary(const string& empName, double amount) {
    int index = findEmployee(empName);
    if (index == -1) { cout << "Employee " << empName << " is not found in the company" << endl; return; }
    employees[index]->setSalary(employees[index]->getSalary() + amount);
    cout << "Employee " << empName << "'s salary is changed by " << amount << endl;
}

void Company::print() const {
    cout << "Company with " << currSize << " employees:" << endl;
    for (int i = 0; i < currSize; i++) { cout << "    "; employees[i]->print(); }
}
