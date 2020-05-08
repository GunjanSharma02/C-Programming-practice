//Print the sum of n digits  of a number.
#include<stdio.h>
#include<conio.h>

void main()
{
    int number,sum;
    int sumOfNDigit(int);
    printf("Please Enter Numbers.\n");
    scanf("%d",&number);
    sum = sumOfNDigit(number);
    printf("The Sum of N Digit of Number is %d",sum);
}

int sumOfNDigit(int number){
    int sum = 0;
    while(number>0){
       sum = sum + number % 10;
       number = number/10;
       //printf("Num is %d",number);
    }
    return sum;
}
