#include <stdio.h>

int calculator()
{
    int num1;
    char operator; 
    int num2;
    float answer;

    printf("Enter 1st operand: ");
    scanf("%d", &num1);

    printf("Enter operation: ");
    scanf(" %c", &operator);

    if (operator == 's')
    {
        num1 *= num1;
        printf("%d", num1);
        return 0;
    }


    printf("Enter 2nd operand: ");
    scanf("%d", &num2);    


    if (operator == '+')
    {
        answer = num1 + num2; 
    }
    else if (operator == '-')
    {
        answer = num1 - num2;
    }
    else if (operator == '*')
    {
        answer = num1 * num2; 
    }
    else if (operator == '/')
    {
        if (num2 != 0)
        {
            answer = (float) num1 / num2;
        }
        else
        {
            printf("0 not valid denominator!");
        }
    }
    else
    {
        printf("invalid operator");
    }
    printf("Answer: %f", answer);
    return 0;
}

int weighter(){
    int weight; 

    printf("Input weight: ");
    scanf("%d", &weight);

    if (weight < 10000){
        printf("l");
    }
    else if (weight < 26000){
        printf("m");
    }
    else{
        printf("h");
    }
    return 0;

}

int printPrime(){
    int num; 
    
    if (num < 1)
    for (i = 1; i <= num; i++){
      for (i = 1; i*i < num; i++){
        
    }
}
    printf("Enter a number");

    return 0; 

}

int hexToBinary(){
    char hex[4];

    printf("Type hex: ");
    scanf("%s", hex);

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

int main()
{
    //calculator();
    //weighter();
    //hexToBinary();
    //stringCounter();
    //intPter();
    //bitSet();
    return 0;
}