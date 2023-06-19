#include <iostream>
#include "manager.h"

using namespace std;

/*
* Author: Kritika Singh
 * Created on June 16, 2022, 12:25 p.m.
 * Version: 1.0
 * Purpose: using and writing classes
 *
 * Description:
 * Default constructor to set object to safe empty state.
 * Overloaded constructor that sets both properties of the manager using its two parameters.
 * Setters and getters for each of the manager properties.
 * Display function that will print out the values of the properties of a manager.
 *
 */

int main()
{

    manager m1; //variable for manager id
    manager m2;

    int input;

    manager m3(115, 79000);
    m3.print();

    cout << "Please enter id: " << endl;
    cin >> input;
    m1.setId(input);
    m1.setSalary(25000);

    m1.print();


    cout << "Please enter id: " << endl;
    cin >> input;
    m2.setId(input);
    m2.setSalary(45000);

    m2.print();

    return 0;
}
