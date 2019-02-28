//
// Created by 105166 on 2/14/19.
//

#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(int _empNum, string _name,
        string _address, string _phone, double _hoursWorked,
        double _hourlyWage)
{
    empNum = _empNum;
    name = _name;
    address = _name;
    phone = _phone;
    hoursWorked = _hoursWorked;
    hourlyWage = _hourlyWage;
}

double HourlyEmployee:: calcPay() {
    //declare constants
    const double FED_TAX_RATE = .20;
    const double STATE_TAX_RATE = .075;
    double grossPay, netPay;
    //Check and pay overtime
    if (hoursWorked > 40){
        double OTPay = (hoursWorked - 40) * (1.5 *hourlyWage);
        grossPay = OTPay + (40 * hourlyWage);
    }
    else{
        grossPay = hoursWorked * hourlyWage;
    }
    netPay = grossPay - (FED_TAX_RATE*grossPay) - (STATE_TAX_RATE * grossPay);
    return netPay;
}

void HourlyEmployee:: write(ofstream &theFile) {
    theFile << getEmpNum() << endl;
    theFile << getName() << endl;
    theFile << getAddress() << endl;
    theFile << getPhone() << endl;
    theFile << hourlyWage << endl;
    theFile << hoursWorked << endl;
}
HourlyEmployee* HourlyEmployee:: read(ifstream &theFile) {

    int _empNum;
    string _name, _address, _phone;
    double _hourlyWage, _hoursWorked;
    theFile >> _empNum;
    theFile.ignore();
    getline(theFile, _name);
    getline(theFile, _address);
    getline(theFile, _phone);
    theFile >> _hoursWorked;
    theFile >> _hourlyWage;
    HourlyEmployee* tempEmp = new HourlyEmployee(
            _empNum,
            _name,
            _address,
            _phone,
            _hoursWorked,
            _hourlyWage);
}
