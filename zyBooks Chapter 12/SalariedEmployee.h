//
// Created by 105166 on 2/19/19.
//

#ifndef ZYBOOKS_CHAPTER_12_SALARIEDEMPLOYEE_H
#define ZYBOOKS_CHAPTER_12_SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee: public Employee {

private:
    double salary;

public:
    SalariedEmployee()=default;
    ~SalariedEmployee()= default;
    //Paramaterized constructor
    SalariedEmployee(int, string, string, string, double);
    double calcPay() override;
    void write(ofstream&);
    SalariedEmployee* read(ifstream);
};


#endif //ZYBOOKS_CHAPTER_12_SALARIEDEMPLOYEE_H
