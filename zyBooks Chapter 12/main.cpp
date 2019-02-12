#include <iostream>
#include "Employee.h"
using namespace std;

int main() {


    Employee emp1(37, "Joe Brown", "123 Main St.", "123-6788");
    Employee emp2(37, "Sam Jones", "45 East State", "661-9000");
    Employee emp3(15, "Mary Smith", "12 High Street", "401-8900");


    char response = 'z';

    while( response != 'q'){
        cout << "This program has two options:" << endl;
        cout << "1 - Create a data file, or" << endl;
        cout <<"2 - Read data from a file and print paychecks." << endl;
        cout << "Please enter (1) to create a file or (2) to print checks:" << endl;
        cin >> response;


        if ( response == '1'){
            //open a file to write to.
            cout << "Please enter a file name:" << endl;
            ofstream theFile;
            string filename;
            cin >> filename;
            theFile.open(filename);
            emp1.write(theFile);
            emp2.write(theFile);

            cout << "Data file created ... you can now run option 2." << endl;
            response = 'q';




            theFile.close();
        }
        else if(response == '2') {
            Employee emp4, emp5, emp6;
            cin >> response;
            ifstream theFile;

            emp4 = emp4.read(theFile);
            emp5 = emp5.read(theFile);
            cout << "Please enter a file name:" << endl;
            printCheck(emp4);
            printCheck(emp5);

            response = 'q';

        }

    }
}