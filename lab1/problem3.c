#include <stdio.h>

int isPrime(int n){
    if (n == 2 || n == 3){
        return 1;
    }
    
    if (n <= 1 || n % 2 == 0 || n % 3 == 0){
        return 0; 
    }

    for (int i = 5; i*i <= n; i++){
        if (n % i == 0 || n % (i+2) == 0){
            return 0; 
        }
    }
    return 1; 
}


int main(){
    int number; 
    printf("Enter number: "); 
    scanf(" %d", &number);

    int i; 
    for (i = 0; i < number; i++){
        if (isPrime(i) == 1){
            printf("%d ", i);
        }
    }
    return 0; 
}