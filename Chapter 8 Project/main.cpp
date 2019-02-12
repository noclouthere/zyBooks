#include <iostream>
#include "Employee.h"

using namespace std;

void printCheck(Employee);

int main() {

    Employee emp1(37,"Joe Brown","124 Main St.","123-6788",45,10);
    Employee emp2(70,"Edward Newgate","141 Main St.","123-8876",45,11);
    Employee emp3(46,"Marshall D. Teech","121 Main St.","123-5377",45,9);

    char response = 'z';

    do{
        cout << "This program has two options:" << endl;
        cout << "1 - Create a data file, or" << endl;
        cout << "2 - Read data from a file and print paychecks." << endl;
        cout << "Please enter <1> to create a file or <2> to print checks:" << endl;
        cin >> response;

        if(response != 'q'){
            if(response == '1'){
                //open a file to write to
                ofstream theFile;
                string fileName;
                cin >> fileName;
                //theFile.open("Bob.mre");
                theFile.open(fileName);
                emp1.write(theFile);
                emp2.write(theFile);
                emp3.write(theFile);

                theFile.close();
            }
            else if(response == '2'){
                Employee emp4, emp5, emp6;

                ifstream theFile;
                theFile.open("Bob.mre");

                printCheck();

                theFile.close();
            }
        }

    }while(response != 'q');


    return 0;
}

void printCheck(Employee empt) {
    cout << "Name: " << empt.getName() << endl;
}