// To demonstrate the use of structure

#include<stdio.h>

typedef struct
{
  char name[20];
  int roll;
}data;

void get_data(data *ptr)
{
  printf("Enter your name : ");
//   scanf("%s", &(*ptr).name);
  scanf("%s", &ptr -> name);

  printf("Enter your roll number : ");
//   scanf("%d", &(*ptr).roll);
  scanf("%d", &ptr -> roll);
  
}
void put_data(data *ptr)
{
//   printf("your name is %s and roll number is %d", (*ptr).name, (*ptr).roll);
  printf("Your name is %s and roll number is %d", ptr -> name, ptr -> roll);
}


void main()
{

  data student1;

  get_data(&student1);
  put_data(&student1);
}