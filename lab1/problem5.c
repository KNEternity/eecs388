#include <stdio.h>

int countDuplicates(){
    int arraySize;
    int duplicateNum = 0; 

    printf("Array Size: ");
    scanf(" %d", &arraySize);

    int numberArray[arraySize]; 

    for (int i = 1; i <= arraySize; i++){
        int number; 
        printf("Enter element %d: ", i);
        scanf(" %d", &number);
        numberArray[i] = number;

    }

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