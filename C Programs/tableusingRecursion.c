//@ Print the table of a number using do while loop.

#include<stdio.h>
#include<conio.h>
void main()
{

    int num;
    int factorial(int);//declaration
    printf("please Enter a Number\n");
    scanf("%d",&num);
    //int fact = factorial(num); //calling
    factorial(num);
   // printf("Factorial of %d is %d", num, fact);
}
 int factorial(int num) // function defination
{
    int res=1;
    if(num == 1)
    {
       return(1);
    }else{
        res = num * factorial(num-1); //recursive statement
       // return(res);
       printf("%d", res);
    }



}
