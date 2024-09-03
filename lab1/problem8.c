#include <stdio.h>

int bitSet(){
    int userInt;
    int userBit; 
    int* userInt_ptr = &userInt;

    printf("Enter integer: ");
    scanf(" %i", &userInt);
    printf("Enter bit: ");
    scanf(" %i", &userBit);

    userInt = (userInt >> (userBit)) & 0x1;

    if (userInt){
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
    

    return 0;
}

int main(){
    return 0; 
}