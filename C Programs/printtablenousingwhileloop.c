#include<stdio.h>
#include<conio.h>
void main()
{
    /*@ Print the table of a number using for loop ? */
    int i =1,n,t;
    printf("Please Enter a Number\n");
    scanf("%d",&n);
    printf("The Table of a Number is: %d\n",n);
    while(i<=10)
    {
        t= n*i;
        printf("%d\n",t);
        i++;
    }
}

