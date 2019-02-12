//
// Created by 105166 on 12/3/18.
//

#include "Employee.h"

int Employee::getEmpNum() const {

    return employeeNumber;
}

Employee::Employee() {
    name = "Spongebob";
    employeeNumber = 000;
}


Employee::Employee(int _empNum, string _name, string _address, string _phone, double _hoursWorked, double _hourlyWage) {
    employeeNumber = _empNum;
    name = _name;
    address = _address;
    phone = _phone;
    hoursWorked = _hoursWorked;
    hourlyWage = _hourlyWage;
}

double Employee::calcPay() {
    //declare constants
    const double FED_TAX_RATE = .20;
    const double STATE_TAX_RATE = .075;

    double grossPay, netPay;
    //Check and pay overtime
    if(hoursWorked > 40) {
        double OTPay = (hoursWorked - 40)*(1.5 * hourlyWage);
        grossPay = OTPay + (40 * hourlyWage);
    }
    else {
        grossPay = hoursWorked * hourlyWage;
    }

    netPay = grossPay - (grossPay * FED_TAX_RATE) - (grossPay * STATE_TAX_RATE);

    return netPay;
}

void Employee::write(ostream &theFile) {
    theFile << employeeNumber << endl;
    theFile << name << endl;
    theFile << address << endl;
    theFile << phone << endl;
    theFile << hoursWorked << endl;
    theFile << hourlyWage << endl;
}

void Employee::read(ifstream &theFile) {


    theFile >> employeeNumber;
    theFile.ignore();
    getline(theFile,name);
    getline(theFile,address);
    getline(theFile,phone);
    theFile >> hoursWorked;
    theFile >> hourlyWage;


}
