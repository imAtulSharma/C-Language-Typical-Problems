//Programme to read characters and seperate them accordingly

#include<stdio.h>

void main(){
    char ch;
    int upper = 0, lower = 0, numbers = 0;

    do{
        printf("Type any one character....\n");
        scanf("%c", &ch);
        getchar();

        if(ch >= 'A' && ch <= 'Z'){
            upper++;
        }
        else if(ch >= 'a' && ch <= 'z'){
            lower++;
        }
        else if(ch >= '0' && ch <= '9'){
            numbers++;
        }
    }while (ch != '*');
    
    printf("You have entered %d upper case letters, %d lower case letters and %d numbers", upper, lower, numbers);
    
}