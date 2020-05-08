//@Print the min number out of N numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
    int  minNumber, totalNumber;
    int findMinNumber(int numbers[], int totalNumber);
    printf("Enter the count of numbers.\n");
    scanf("%d",&totalNumber);
    printf("Please Enter N Numbers.\n");

    int numbers[totalNumber];
    for(int i=0 ; i<totalNumber; i++){
        scanf("%d",&numbers[i]);
    }
    minNumber= findMinNumber(numbers,totalNumber);
    printf("Minimum Number is %d ",minNumber);
    //return 0;
}

int findMinNumber(int numbers[], int totalNumber){
    int minNumber;
    for(int i=0 ; i<totalNumber; i++){
       if(i==0){
        minNumber = numbers[i];
       }else if(minNumber > numbers[i]){
           minNumber = numbers[i];
       }
    }
    return minNumber;

}
