#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
double sales;
double salary;
cout << "Enter sales in dollars(-1 to end):";
cin >> sales;

while ( sales != -1 )
{
salary=sales*9/100+200;
cout << "salary is:" << salary << endl;

cout << "Enter sales in dollars(-1 to end):";
cin >> sales;
}

    return 0;
}
