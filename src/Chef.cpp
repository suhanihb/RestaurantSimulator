#include "../header/Chef.h"
#include "../header/Employee.h"

#include <iostream>
using namespace std;

Chef::Chef() {

}

string Chef::viewOrdersList() {
return " ";
}

bool Chef::makeOrder() {
return 0.0;
}

void Chef::removeOrder() {

}

void Chef::printCharacterDetails() {
    string name;
    cout << "Enter your chef name: ";
    getline(cin, name);
    Employee::setEmployeeName(name);
    cout << endl << "You are officially Chef " << name << "!" << endl;
}