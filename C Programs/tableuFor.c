/* Print the table of a number using for loop ? */
#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Please Enter a Number\n");
    scanf("%d",&num);
    tableOfANo(num);/*calling function tableofNo and Paasing num argument.*/
}
/*To get table of a number tableOfNo() function is used*/
/*@param Pass Paramter a number that we need table of that no*/
tableOfANo(int n)
{
    int t;
    if(n<0){
        printf("please Enter a positive Number\n");
    }
    else{
        printf("Table of %d is:\n",n);
        for(int i = 1;i<=10;i++)
        {
            t= n*i;

            printf("%d\n",t);
        }

    }
}



