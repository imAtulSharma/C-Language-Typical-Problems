//To illustrate the use of function pointer

#include<stdio.h>

void func1(int input){
    printf("func1 is executed and your input is %d", input);
}

void func2(int input){
    printf("func2 is executed and your input is %d", input);
}

void func3(int input){
    printf("func3 is executed and your input is %d", input);
}


void (*ptr_to_func)();

void main(){
    ptr_to_func = func2;

    int input;

    printf("please a input : ");
    scanf("%d", &input);

    ptr_to_func(input);
}