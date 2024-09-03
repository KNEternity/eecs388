#include <stdio.h>

int countDuplicates(){
    //init var
    int arraySize;
    int duplicateNum = 0; 

    //get user input
    printf("Array Size: ");
    scanf(" %d", &arraySize);

    //init array
    int numberArray[arraySize]; 

    //put in numbers 
    for (int i = 1; i <= arraySize; i++){
        int number; 
        printf("Enter element %d: ", i);
        scanf(" %d", &number);
        numberArray[i] = number;

    }

    //double for loop to check for duplicates
    for (int i = 0; i < arraySize; i++){ //iterate through indexes of array
        for(int j = i+1; j < arraySize; j++){
            if (numberArray[j] == numberArray[i]){
                duplicateNum += 1; 
                break;
            }
        }
        }
    
    printf("%d", duplicateNum);

    }





int main(){
    countDuplicates();
    return 0; 
}