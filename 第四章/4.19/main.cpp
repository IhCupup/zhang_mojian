#include <iostream>

using namespace std;

int main()
{
int i,m1,m2,x;

cout<<"������10��������"<<endl;
cin>>x;

m1=m2=x;

for(i=1;i<10;i++)
{
cin>>x;
if(x>m1)
{
m2=m1;
m1=x;
}
else if(x>m2)
m2=x;
}
cout<<"���ֵ="<<m1<<"  �δ�ֵ="<<m2<<endl;
return 0;
}
