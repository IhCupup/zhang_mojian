#include <iostream>

using namespace std;

int main()
{
int i=0;
int j=0;
int k=1;

for(;i<=10;i++)
{
    for(;j<=10-i;j++)
    cout <<endl;
    for(;k<=10*i;k++)
    cout <<"*";
}

    return 0;
}
