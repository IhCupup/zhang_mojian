#include<iostream>

using namespace std;

int main()
{
int n,i,j=1;
cout<<"������������n:";
cin>>n;
i=1;
if (n==1||n==0)
{
cout<<"������"<<n<<"�Ľ׳�Ϊ:"<<j<<endl;
}
while (i<n)
{
i++;
j*=i;
}
cout<<"������"<<n<<"�Ľ׳�Ϊ:"<<j<<endl;
return 0;
}
