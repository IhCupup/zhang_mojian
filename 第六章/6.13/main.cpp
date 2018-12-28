#include <iostream>
#include <cmath>

using namespace std;

int main()
{
double x=0;
double y=0;

while(y!=0.5)
{
   cout <<"Please Enter a float number:";
   cin >>x;
   y=floor(x+0.5);
   cout <<"The original number is: "<< x
   <<"\nThe final number is: "<<y<<"\n"<<endl;
}
return 0;
}
