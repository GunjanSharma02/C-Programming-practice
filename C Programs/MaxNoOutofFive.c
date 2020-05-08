//@Print the max number out of 5 numbers ?
#include<stdio.h>
#include<conio.h>
void main()
{
    int numbers[5], maxNumber;
    int findMaxNumber(int numbers[]);
    printf("Please Enter Five Numbers.\n");

    for(int i=0 ; i<5; i++){
        scanf("%d",&numbers[i]);
    }
    maxNumber= findMaxNumber(numbers);
    printf("Maximum Number is %d ",maxNumber);
    //return 0;
}

int findMaxNumber(int numbers[]){
    int maxNumber=0;
    for(int i=0 ; i<5; i++){

        if(maxNumber < numbers[i]){
           maxNumber = numbers[i];
        }
    }
    return maxNumber;

}
