//
// Created by 105166 on 2/19/19.
//

#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(int _empNum, string _name,
        string _address, string _phone, double _salary)
{
    empNum = _empNum;
    name = _name;
    address = _address;
    phone = _phone;
    salary = _salary;
}

double SalariedEmployee::getSalary() {
    return salary;
}

void SalariedEmployee::setSalary(double _salary) {
    salary = _salary;
}

SalariedEmployee *SalariedEmployee::read(ifstream &theFile) {
    auto newEmp = new SalariedEmployee();

    newEmp->readData( theFile);

    return newEmp;
}

void SalariedEmployee::readData(ifstream &theFile) {
    Employee::readData( theFile);
    theFile >> salary;
}

double SalariedEmployee::calcPay() {
    //declare constants
    const double FED_TAX_RATE = .20;
    const double STATE_TAX_RATE = .075;
    const double BENEFIT_RATE = .0524;

    double grossPay, netPay;
    grossPay = salary;
    netPay = grossPay
            -(grossPay*FED_TAX_RATE)
            -(grossPay*STATE_TAX_RATE)
            -(grossPay*BENEFIT_RATE);
    return netPay;
}

void SalariedEmployee::write(ofstream &theFile) {
    Employee::write( theFile);
    theFile << salary << endl;

}

void SalariedEmployee::printCheck() {
    Employee::printCheck();
    cout << "$" << fixed << setprecision(2) << calcPay() << endl;
    cout << endl;
    cout << "United Community Credit Union" << endl;
    cout << "................................................................................." << endl;
    cout << endl << endl << endl << endl;
    cout << "Salary: " << getSalary() << endl;
}
