#include <stdio.h>
int main()
{

int num, sum=0;
do{
printf("enter number a number: ");
scanf("%d", &num);
sum+=num;
}
while(num!=0);
{
printf("sum of all number is %d;", sum);
}
return 0;
}

