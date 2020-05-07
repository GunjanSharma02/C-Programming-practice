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
int j=0,n,h =1, s;

        printf("Please Enter a Number greater than one\n");
        scanf("%d",&n);

    for(int i =1; i<=n/2;i++)
    {
        for( s=1;s<=h;s++)
        printf("*");
        if (s>h)
        {
            printf("\n");

        }

            for(h =1;h<=s; h++)
            printf("#");
            if (h>s)
            {
               printf("\n");

            }



    }


}

