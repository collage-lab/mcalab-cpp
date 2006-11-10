#include <stdio.h>
#include <conio.h>
void main()
{
char ch,I;
clrscr();
printf("Enter the Character:") ;
scanf("%c",&ch);
I=((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')||(ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'));
if (I==1)
    printf("The Character  %c is a  Vowel",ch);
else if (I==0)
    printf("The Character  %c not a  Vowel",ch);
else
  printf("The Character  %c not a  invalued",ch);
getch();
}