//
// Created by 105166 on 2/12/19.
//

#ifndef ZYBOOKS_CHAPTER_12_EMPLOYEE_H
#define ZYBOOKS_CHAPTER_12_EMPLOYEE_H

#include <iostream>
#include <fstream>

using namespace std;

class Employee {
protected:
    //data members
    int empNum;
    string name;
    string address;
    string phone;
public:
    virtual ~Employee() = 0;
    //Getters
    int getEmpNum();
    string getName();
    string getAddress();
    string getPhone();
    //Setters
    void setName(string);
    void setAddress(string);
    void setPhone(string);
    virtual void write(ofstream&);
    virtual double calcPay();
    virtual void printCheck();

protected:
    virtual ~Employee(){};
    Employee() = default;
    Employee* readData(ifstream);
    Employee(int _empNum, string _name, string _address, string _phone);

};


#endif //ZYBOOKS_CHAPTER_12_EMPLOYEE_H
