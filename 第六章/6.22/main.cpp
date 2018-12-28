#include <iostream>

using namespace std;

int main()
{
int m;
cout<<"请输入要打印的行列数n(n>=4)：\n";
cin>>m;
for(int i=0;i<m;i++)
{
for(int j=0;j<m;j++)
{
 if(i==0||i==m-1)
{
 cout<<"*";
 }
else if(j==0||j==m-1)
{
 cout<<"*";
}
else
 cout<<"";
}
return 0;
}
}
