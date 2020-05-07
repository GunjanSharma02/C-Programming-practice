//@ Print the factorial of a number using Recursion.
#include<stdio.h>
#include<conio.h>
void main(){

    //declarations
    int num;
    int factorial(int);

    printf("please Enter a Number\n");
    scanf("%d",&num);
    int fact = factorial(num); //calling
    printf("Factorial of %d is %d", num, fact);

}

/*
*Method to find the factorial of a number
*
*@param num number to find factorial
*@return factorial
*/
int factorial(int num){
    int res=1;
    if(num == 1)
    {
       return(1);
    }else{
        res = num * factorial(num-1);
        return(res);
    }
}
