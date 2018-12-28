#include <iostream>

using namespace std;

int main()
{
double hoursworked=0;
double salary=0;

cout << "Enter hours worked(-1 to end ):" ;
cin >> hoursworked ;
while ( hoursworked !=-1 )
{
if(hoursworked<=40)
  {
 cout << "Enter hourly rate of the employee($00.00):" << 10<<endl;
 salary=hoursworked*10;
 cout << "Salary is:" <<  salary <<endl<<endl;
   }
else
{
 cout << "Enter hourly rate of the employee($00.00):" << 10<< endl;
 salary=400+(hoursworked-40)*15;
 cout << "Salary is:" <<  salary <<endl<<endl;
}
  cout << "Enter hours worked(-1 to end ):" ;
  cin >> hoursworked ;
}
return 0;
}
