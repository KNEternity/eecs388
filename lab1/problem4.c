#include <stdio.h>
int hexToBinary(){
    //init var
    char hex[4];

    //get user input, expecting valid input
    printf("Type hex: ");
    scanf("%s", hex);

    //HUGE if block, hard coding hex to binary
    for (int i = 0; i < 4; i++){
        if (hex[i] == '0'){
            printf("0000");
        }
        if (hex[i] == '1'){
            printf("0001");
        }
        if (hex[i] == '2'){
            printf("0010");
        }
        if (hex[i] == '3'){
            printf("0011");
        }
        if (hex[i] == '4'){
            printf("0100");
        }
        if (hex[i] == '5'){
            printf("0101");
        }
        if (hex[i] == '6'){
            printf("0110");
        }
        if (hex[i] == '7'){
            printf("0111");
        }
        if (hex[i] == '8'){
            printf("1000");
        }
        if (hex[i] == '9'){
            printf("1001");
        }
        if (hex[i] == 'A'){
            printf("1010");
        }
        if (hex[i] == 'B'){
            printf("1011");
        }
        if (hex[i] == 'C'){
            printf("1100");
        }
        if (hex[i] == 'D'){
            printf("1101");
        }
        if (hex[i] == 'E'){
            printf("1110");
        }
        if (hex[i] == 'F'){
            printf("1111");
        }

    }
    return 0;
}
int main(){
    hexToBinary();
    return 0; 
}