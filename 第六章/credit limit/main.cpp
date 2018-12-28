#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
int account;
double bbalance;
double charges;
double credit;
double limit;
double nbalance;
cout << "Enter account number (-1 to end):";
cin >> account;

while ( account != -1 )
{
cout << "Enter beginning balance:";
cin >> bbalance;
cout << "Enter total charges:";
cin >> charges;
cout << "Enter total credits:";
cin >> credit;
cout << "Enter credit limit:";
cin >> limit;
nbalance = bbalance + charges - credit;
cout << "Enter new balance"<<nbalance<<endl;


if ( nbalance > limit )
{
cout << "Account: " << account <<endl;
cout << "Credit limit:" << limit <<endl;
cout << "Balance: " << nbalance << endl;
cout << "Credit Limit Exceeded." << endl;
}
cout << "Enter account number (-1 to end):";
cin >> account;
}
return 0;
}
