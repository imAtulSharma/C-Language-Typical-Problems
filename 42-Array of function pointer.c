//To illustrate the use of Array of function pointers

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

typedef void (*ptr_to_func)();

void main(){
    ptr_to_func array_to_function_pointer[3] = {func1, func2, func3};

    int index;
    printf("please a number from 1 to 3 : ");
    scanf("%d", &index);

    if(index == 1 || index == 2 || index == 3)
    {   
        int input;

        printf("please a input : ");
        scanf("%d", &input);

        array_to_function_pointer[index-1](input);
    }
    else
    {
        printf("wrong input");
    }
    
}