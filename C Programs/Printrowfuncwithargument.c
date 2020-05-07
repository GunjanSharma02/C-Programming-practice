/*@ Print This upto the n rows?
*
##
***
####
*****
######
*/

#include<stdio.h>
#include<conio.h>

void main()
{
        int p;
        printf("Please Enter a Number to print number of Rows.\n");
        scanf("%d",&p);
        printRow(p); /*Calling printRow() Function*/
}
/*Function For printing Number of Rows.*/
printRow(int n)
{

        int j;
        if(n<0)
        {
            printf("Please Enter a Positive Number");
        }
        else{
                for(int i =1; i<=n;i++)
                {
                    printf("\n");
                    for(int j =1; j<=i;j++)
                    {
                        if(i%2==0)
                        {
                           printf("#");
                        }
                        else{
                            printf("*");
                        }

                    }
                }
        }
}
