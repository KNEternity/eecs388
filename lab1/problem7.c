#include <stdio.h>

int intPter(){
    int temp; 
    int* temp_ptr = &temp; 

    printf("Enter integer: ");
    scanf(" %d", &temp);

    printf("%d\n", temp);
    printf("%d\n", *temp_ptr);
    printf("%p\n", &temp);
    printf("%p\n", temp_ptr);

    return 0; 
}

int main(){
    return 0; 
}