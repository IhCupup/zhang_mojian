#include <iostream>

using namespace std;

int main()
{
int i,a,b;

 cout << "Enter a number to limit:";
 cin>>i;
 cout << "Enter a number:";
 cin>>a;
 for(int n=1; n<i;++n)
{
cout << "Enter a number:";
cin >>b;
  if (b<a)
  a=b;
}
cout<<min(a, b)<<endl;
return 0;
}
