
#include<stdio.h>
#include<conio.h>

int main()
{
    int i,n ;
    Starting:
    printf("Enter a Number: \n");
    scanf("%d",&n);
    if(n>25)
    {
        printf("%d is greater than 25.\n", n);
        goto Starting;
    }
    else{
        printf("%d is less than 25.", n);
    }
}
