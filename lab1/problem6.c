#include <stdio.h>
int stringCounter(){
    //init var
    char userString[100];
    int stringLength; 
    int counter = 0; 

    //get user input 
    printf("Enter string: ");
    scanf(" %s", &userString);

    //keep counting while derefenced pointer is something
    while(*(userString+counter)){
        counter += 1; 
        }
    
    //
    printf("%d", counter);
    return 0;
}

int main(){
    return 0; 
}