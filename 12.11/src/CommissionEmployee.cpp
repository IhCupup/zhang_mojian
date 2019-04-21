#include<iostream>
#include<stdexcept>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(
    const string&first,const string&last, const string&ssn,
    double sales,double rate)
{
    firstName=first;
    lastName=last;
    socialSecurityNumber=ssn;
    setGrossSales(sales);
    setCommissionRate(rate);
}

void CommissionEmployee::setFirstName(const string&first)
{
    firstName=first;
}
string CommissionEmployee::getFirstName()const
{
    return firstName;
}
void CommissionEmployee::setLastName(const string&last)
{
    lastName=last;
}
string CommissionEmployee::getLastName()const
{
    return lastName;
}
void CommissionEmployee::setSocialSecurityNumber(const string&ssn)
{
    socialSecurityNumber=ssn;
}
string CommissionEmployee::getSocialSecurityNumber()const
{
    return socialSecurityNumber;
}
void CommissionEmployee::setGrossSales(double sales)
{
    if(sales>=0.0)
        grossSales=sales;
    else
        throw invalid_argument("Gross sales must be>=0.0");
}
double CommissionEmployee::getGrossSales()const
{
    return grossSales;
}
void CommissionEmployee::setCommissionRate(double rate)
{
    if(rate>0.0&rate<1.0)
        commissionRate=rate;
    else
        throw invalid_argument("commission rate must be>0.0and<1.0");
}
double CommissionEmployee::getCommissionRate()const
{
    return commissionRate;
}
void CommissionEmployee::setBaseSalary(double salary)
{
    if(salary>=0.0)
        baseSalary=salary;
    else
        throw invalid_argument("salary must be>=0.0")
}
double CommissionEmployee::getBasesalary()const
{
    return baseSalary;
}
double BasePlusCommissionEmployee::earnings()const
{
    return baseSalary+(commissionRate*grossSales);
}
void BasePlusCommissionEmployee::print()const
{
    cout<<"base-salaried commission employee:"<<firstName<<''
    <<lastName<<"\nsocial security number:"<<socialSecurityNumber
    <<"\ncommission rate:"<<grossSales
    <<"\nbase salary:"<<baseSalary;
}







