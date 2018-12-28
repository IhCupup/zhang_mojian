#include <stdio.h>
#include <stdlib.h>


int main()
{
char buff[25];

for(int i=1;i<=256;i++)
    {
       itoa(i,buff,2);
       printf("%d\t%s\t%o\t%x\n",i,buff,i,i);
    }
    return 0;
}
