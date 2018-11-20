#include <iostream>

using namespace std;

int main()
{
int passes=0;
int failures=0;
int counter=0;

while (counter<10)
{
cout<<"Enter result(1=pass,2=fail):";
int result=0;
cin >> result;
if (result==1||result==2)
{
if (result==1)
++passes;
else
++failures;
++counter;
}
else cout<<"reenter a new number.\n";
}
cout <<"Passed"<<passes<<"\nFailed"<<failures<<endl;

}



