#include<stdio.h>
#include<conio.h>
main()
{
    int t,i=1,n;
    printf("Please Enter a Number.\n");
    scanf("%d",&n);
  do{
    t = i*n;
    printf("%d\n",t);
    i++;
    }while(i<=10);
}
