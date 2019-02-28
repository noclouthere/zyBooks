//
// Created by 105166 on 2/12/19.
//

#include "Employee.h"

int Employee::getEmpNum() {
    return empNum;
}

string Employee::getName() {
    return name;
}

string Employee::getAddress() {
    return address;
}

string Employee::getPhone() {
    return phone;
}

void Employee::setName(string _name) {
    name = _name;
}

void Employee::setAddress(string _address) {
    address = _address;
}

void Employee::setPhone(string _phone) {
    phone = _phone;
}
