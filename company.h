#ifndef COMPANY_H
#define COMPANY_H

#include "employee.h"
#include <string>

const int COMPANY_MAX_SIZE = 3;

class Company {
public:
    void init();
    void addEmployee(Employee *emp);
    void fireEmployee(const std::string& empName);
    bool hasEmployee(const std::string& empName) const;
    void promoteEmployee(const std::string& empName, const std::string& newTitle);
    void adjustSalary(const std::string& empName, double amount);
    void print() const;

private:
    int findEmployee(const std::string& empName) const;
    int currSize;
    Employee *employees[COMPANY_MAX_SIZE];
};

#endif
