#include <iostream>

using namespace std;

int main()
{
int value;
int count=0;
int number;
int sum=0;

cin>>value;

while (value != 9999)
{
sum+=value ;
count++;
cin>>value;
}
if (count !=0 )
cout<<"The average is:"<<static_cast<double>(sum)/count<<endl;
else
cout<<"\nNo values were entered"<<endl;
}
