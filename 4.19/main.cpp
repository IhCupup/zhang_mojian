#include <iostream>

using namespace std;

int main()
{
int i,m1,m2,x;

cout<<"请输入10个整数："<<endl;
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
cout<<"最大值="<<m1<<"  次大值="<<m2<<endl;
return 0;
}
