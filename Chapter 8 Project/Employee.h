//
// Created by 105166 on 12/3/18.
//

#ifndef AN_EMPLOYEE_CLASS_EMPLOYEE_H
#define AN_EMPLOYEE_CLASS_EMPLOYEE_H

#include <iostream>
#include <fstream>

using namespace std;

class Employee {
private:
    int employeeNumber;
    string name;
    string address;
    string phone;
    double hoursWorked;
    double hourlyWage;


public:
    Employee()=default;
    Employee(int, string, string, string, double, double);

    int getEmpNum() const;
    string getName() const;

    double calcPay();

    void write(ostream&);
    void read(ifstream&);
};


#endif //AN_EMPLOYEE_CLASS_EMPLOYEE_H