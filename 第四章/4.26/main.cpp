#include <stdio.h>

using namespace std;

int main()
{
int num, temp;
int sum=0;
printf("Please input a number:");
scanf("%d", &num);
temp=num;
while(num)
{
sum=sum*10+num%10;
num/=10;
}
if(temp==sum)
printf("yes\n");
else
printf("no\n");
return 0;
}
