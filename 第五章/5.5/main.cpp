#include <iostream>

using namespace std;

int main()
{int sum=0;
 int i=0;
 int a=0;
 cout << "Enter a number to limit:";
 cin>>i;

 for(int n=1; n<=i;++n)
{
 cout << "Enter a number:";
 cin>>a;
 sum=sum+a;
}
cout<<i<<" "<<sum<<endl;
return 0;
}
