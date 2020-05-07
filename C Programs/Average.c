#include<stdio.h>
#include<conio.h>

void main()
{
    /*Average of 10 Numbers.*/
    int a[10];
    int sum=0, avg =0,i,j;
    printf("Please Enter Values For Average");


    for(int i=0; i<=9;i++)
    {
        scanf("%d",&j);
        a[i]=j;
        sum= sum+a[i];
    }

    avg = sum/10;

    printf("The sum of 10 Number is %d ",avg);


}
