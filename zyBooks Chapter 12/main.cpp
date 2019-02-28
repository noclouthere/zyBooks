#include <iostream>
#include <vector>
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

using namespace std;

int main() {
    //Create a vector of Employee pointers names employees
    vector<Employee*> employees;
    //Add the four employees from the project description to the employees
    //Vector
    employees.push_back(new HourlyEmployee(1, "H. Potter", "Privet Drive", "201-9090",40,12));
    employees.push_back(new SalariedEmployee(2, "A. Dumbledore", "Hogwarts", "803-1230",1200));
    employees.push_back(new HourlyEmployee(3,"Ron Weasley", "The Burrow", "892-20000",40,10));
    employees.push_back(new SalariedEmployee(4, "R. Hagrid", "Hogwarts", "910-8765", 1000));


    char response = 'z';

    while( response != 'q'){
        cout << "This program has two options:" << endl;
        cout << "1 - Create a data file, or" << endl;
        cout <<"2 - Read data from a file and print paychecks." << endl;
        cout << "Please enter <1> to create a file or (2) to print checks:" << endl;
        cin >> response;


        if ( response == '1'){
            //open a file to write to.
            cout << "Please enter a file name:" << endl;
            ofstream theFile;
            string filename;
            cin >> filename;
            theFile.open(filename);
            (employees[0])->write(theFile);
            (employees[1])->write(theFile);
            (employees[3])->write(theFile);





            theFile.close();
        }
        else if(response == '2') {
            HourlyEmployee emp4, emp5, emp6;
            ifstream theFile;
            theFile.open("Bob.mre");

            emp4.read(theFile);
            emp4.printCheck();

            theFile.close();


        }

    }while(response!= 'q');

    return 0;
}
