//
// Author: Kritika Singh
// Created on June 16, 2022, 12:25 p.m.
// Version: 1.0
// Purpose: using and writing classes
//
//

#include <iostream>
#include "manager.h"

using namespace std;

manager::manager()
{
    int manager_id = 0;
    double  manager_salary = 1;
}

manager::manager(int manager_id, double manager_salary)
{
    setId(manager_id);
    setSalary(manager_salary);
}

void manager::setId(int manager_id)
{
    if(manager_id > 0)
    {
        id = manager_id;
    }
    else
    {
        id = 0;
    }
}

void manager::setSalary(double manager_salary)
{
    if (manager_salary > 1)
    {
        Salary = manager_salary;
    }

    else
    {
        Salary = 1;
    }
}

int manager::getId() const
{
    return id;
}

double manager::getSalary() const
{
    return Salary;
}

void manager::print() const
{
    cout << "The details of the manager is" << endl;
    cout << "ID: " << getId() << endl;
    cout << "Salary: " << getSalary() << endl;
}


