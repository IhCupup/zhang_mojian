#include<iostream>
#include<iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

int main()
{
    CommissionEmployee commissionEmployee ("sue","Jone","222-22-2222",10000,.06);

    commissionEmployee*commissionEmployee=nullptr;

    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","333-33-3333",5000,.04,300);

    basePlusCommissionEmployee*basePlusCommissionEmployee=nullptr;

    cout<<fixed<<setprecision(2);
    cout << "Print base-class and derived-class objects:\n\n";
    commissionEmployee.print();
    cout<<"\n\n";
    basePlusCommissionEmployee.print();

    commissionEmployeeptr=&commissionEmployee;
    cout<<"\n\n\nCalling print with base-class pointer to "
        <<"\nbase-class object invokes base-class print function:\n\n";
    commissionEmployeeptr->print();

    basePlusCommissionEmployee=&basePlusCommissionEmployee;
    cout<<"\n\n\nCalling print with derived-class pointer to"
        <<"\nderived-class object invokes derived-class"
        <<"print function:\n\n";
    basePlusCommissionEmployee->print();

    commissionEmployeeptr=&basePlusCommissionEmployee;
    cout<<"\n\n\nCalling print with base-class pointer to"
        <<"derived-class object\ninvokes base-class print"
        <<"function on that derived-class object:\n\n";
    commissionEmployee->print();
    cout<<endl;
}
