#include <stdio.h>
#include <string.h>

// 22 September 2026

int main(void) {
  char firstName[50];
  int birthday;
  int thisYear;
  
  printf("Enter your first name: ");
  scanf("%s", firstName);
  
  printf("Enter your birth year: ");
  scanf("%d", &birthday);
  
  printf("Enter current year: ");
  scanf("%d", &thisYear);
  
  int age = thisYear - birthday;
  
  printf("\nHello %s in my code in C, Your age is %d.\n\n", firstName, age);
  
  char msg[150];
  
  printf("Enter message to me: ");
  scanf(" %[^\n]", msg);
  
  printf("\nThank you for using!");
  printf("\nGoodBye, %s.\n", firstName);
}
