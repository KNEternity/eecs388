#include <stdio.h>

int bitSet(){
    //init var
    int userInt;
    int userBit; 
    int* userInt_ptr = &userInt;


    //enter user input
    printf("Enter integer: ");
    scanf(" %i", &userInt);
    printf("Enter bit: ");
    scanf(" %i", &userBit);

    //push user bit to bit 0, isolate
    userInt = (userInt >> (userBit)) & 0x1;

    //check if bit is 1 or 0 
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