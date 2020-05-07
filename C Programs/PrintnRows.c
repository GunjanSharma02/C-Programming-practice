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
int j=0;
    for(int i =1; i<=6;i++)
    {
    j = i;

switch(j)
    {
    case 1: printf("*\n"); break;
case 2: printf("##\n"); break;
case 3: printf("***\n"); break;
case 4: printf("#####\n"); break;
case 5: printf("*****\n"); break;
case 6: printf("######\n"); break;
    }

    }

}
