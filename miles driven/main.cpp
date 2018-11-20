#include <iostream>

using namespace std;

int main()
{
double milesdriven=0;
double gallonsused=0;
double MPG=0;
double TMPG=0;
double sum1=0;
double sum2=0;
cout << "Enter miles driven(-1 to quit):" ;
cin >> milesdriven;
while (milesdriven!=-1)
{
cout << "Enter gallons used:" ;
cin >> gallonsused;
MPG=milesdriven/gallonsused;
cout << "MPG this trip:" << MPG << endl;
sum1+=milesdriven;
sum2+=gallonsused;
TMPG=sum1/sum2;
cout << "Total MPG:" << TMPG << endl;
cout << "Enter miles driven(-1 to quit):" ;
cin >> milesdriven;
}
return 0;
}
