//
// Author: Kritika Singh
// Created on June 16, 2022, 12:25 p.m.
// Version: 1.0
// Purpose: using and writing classes
//
//

#pragma once


class manager{

    int id;
    double Salary;

public:

    //default Constructor
    manager();

    //Overloaded Constructor
    manager(int manager_id, double manager_salary);

    //setters or modifiers
    void setId(int manager_id);
    void setSalary(double manager_salary);

    //getter or query
    int getId() const;
    double getSalary() const;

    //helper or support
    void print() const;
};
