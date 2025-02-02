#include <stdio.h>
#include <string.h>

int main() 
{
  char stored_username[] = "rahulranj"; 
  char stored_password[] = "jamz"; 
  char input_username[20];
  char input_password[20];

  printf("Enter username: ");
  scanf("%s", input_username);
  printf("Enter password: ");
  scanf("%s", input_password);

  if (strcmp(input_username, stored_username) == 0 && strcmp(input_password, stored_password) == 0) 
  {
    printf("Authentication successful\n");
  } 
  else 
  {
    printf("Authentication failed\n");
  }

  return 0;
}
