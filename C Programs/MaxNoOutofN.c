//@Print the max number out of N numbers ?
#include<stdio.h>
#include<conio.h>
void main()
{
    int  maxNumber, totalNumber;
    int findMaxNumber(int numbers[], int totalNumber);
    printf("Enter the count of numbers.\n");
    scanf("%d",&totalNumber);
    printf("Please Enter N Numbers.\n");

    int numbers[totalNumber];
    for(int i=0 ; i<totalNumber; i++){
        scanf("%d",&numbers[i]);
    }
    maxNumber= findMaxNumber(numbers,totalNumber);
    printf("Maximum Number is %d ",maxNumber);
    //return 0;
}

int findMaxNumber(int numbers[], int totalNumber){
    int maxNumber=0;
    for(int i=0 ; i<totalNumber; i++){

        if(maxNumber < numbers[i]){
           maxNumber = numbers[i];
        }
    }
    return maxNumber;

}
