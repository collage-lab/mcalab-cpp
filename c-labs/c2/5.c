#include <stdio.h>
#include <conio.h>
void main()
{
int num ,rim,intg;
float dec;
clrscr();
printf("Enter the number") ;
scanf("%d",&num);
rim = (num%5);
intg=num/5;
dec=rim/5.0;
if (rim==0)
printf("%d is divisible by 5 ",num);
else if(rim!=0)
printf("%d is not divisible by 5 \ninteger part=%d\n desmil part=%f  %d ",num,intg,dec,rim);
else
printf("%d is devalued number",num);
getch();
}