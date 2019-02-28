//
// Created by 105166 on 2/14/19.
//

#ifndef ZYBOOKS_CHAPTER_12_HOURLYEMPLOYEE_H
#define ZYBOOKS_CHAPTER_12_HOURLYEMPLOYEE_H


#include "Employee.h"

class HourlyEmployee: public Employee {
private:
    double hoursWorked;
    double hourlyWage;


public:
    HourlyEmployee()=default;
    ~HourlyEmployee()=default;
    //Paramaterized constructor
    HourlyEmployee(int, string, string, string, double, double);
    double calcPay() override;
    void write(ofstream&);
    HourlyEmployee* read(ifstream&);

};


#endif //ZYBOOKS_CHAPTER_12_HOURLYEMPLOYEE_H
