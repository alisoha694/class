#include <stdio.h>
int main()
{
int a;
int num, sum=0;
for(a=1;a<=5;++a)
{
printf(" enter:",a);
scanf(" %d", num);
if(num<0)
{
break;
}

sum+=num;
}
printf(" %d ", sum);
return 0;
}

