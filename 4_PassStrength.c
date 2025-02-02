#include <stdio.h>
#include <string.h>

int main() 
{
  char password[20];
  printf("Enter your password: ");
  scanf("%s", password);
    
  int length = strlen(password);
    
  if (length < 6) 
  {
    printf("Weak\n");
  } 
  else if (length >= 6 && length <= 12) 
  {
    printf("Moderate\n");
  } 
  else 
  {
    printf("Strong\n");
  }
    
return 0;
}