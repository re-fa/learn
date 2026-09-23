#include <stdio.h>
#include <string.h>

// 23 September 2026

int main(void) {
  char userName[50];
  char passWord[50];
  char fullName[100];
  
  char checkUser[50];
  char checkPass[50];
  
  printf("Hello, create your account now!\n");
  
  printf("Enter your full name: ");
  scanf("%s", fullName);
  
  printf("Enter your new username: ");
  scanf("%s", userName);
  
  printf("Enter your password: ");
  scanf("%s", passWord);
  
  printf("\n\nThank you to creating account!\n");
  printf("Now, login to your account\n");
  
  printf("Enter your username: ");
  scanf("%s", checkUser);
  
  printf("Enter your password: ");
  scanf("%s", checkPass);
  
  if (strcmp(userName, checkUser) == 0 && strcmp(passWord, checkPass) == 0) {
    printf("\nCorrect data!");
    printf("\n\n\n\nHello %s in your account\n", fullName);
    printf("UserName: %s\n", userName);
    printf("PassWord: ********\n");
    printf("GoodBye!\n");
  }
  else {
    printf("\nIncorrect data\n");
    printf("GoodBye!\n");
  }
}
