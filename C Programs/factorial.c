#include<stdio.h>
#include<conio.h>
void main()
{
int i,n , t ;
printf("Please Enter a Number\n");
scanf("%d",&i);
int fact(int);
t=fact(i);
printf("%d",t);
}

int fact(int f)
{
int rec;
     rec= f*fact(f-1);

    return (rec);
}
