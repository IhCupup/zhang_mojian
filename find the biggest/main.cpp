#include <iostream>

using namespace std;

int input()
{
int a[10];
int i,b;
for (i=0;i<10;i++)
{
cout<<"Input the value of number "<<i+1<<endl;
cin>>a[i];
}
b=a[0];
for (i=1;i<10;i++)
{
if (b<a[i])
{
b=a[i];
}
}
return b;
}
int main()
{
cout<<"The Biggest number: "<<input()<<endl;
return 0;
}
