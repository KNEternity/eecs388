#include <stdio.h>
int stringCounter(){
    char userString[100];
    int stringLength; 
    int counter = 0; 
    printf("Enter string: ");
    scanf(" %s", &userString);

    while(*(userString+counter)){
        counter += 1; 
        }
    
    printf("%d", counter);
    return 0;
}

int main(){
    return 0; 
}