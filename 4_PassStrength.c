#include <stdio.h>

int main() 
{
  char password[100];
  int length = 0;
    
  printf("Enter your password: ");
  scanf("%s", password);
    
  while (password[length] != '\0') 
  {
    length++;
  }
    
  if (length < 6) 
  {
    printf("Weak\n");
  } 
  else if (length <= 12) 
  {
    printf("Moderate\n");
  } 
  else 
  {
    printf("Strong\n");
  }
    
  return 0;
}
