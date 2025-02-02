#include <stdio.h>

int main() 
{
  int day;

  printf("Enter a day number (1 for Monday, 2 for Tuesday, etc.): ");
  scanf("%d", &day);

  if (day == 1) 
  {
    printf("The day of the week is Monday.\n");
  } 
  else if (day == 2) 
  {
    printf("The day of the week is Tuesday.\n");
  } 
  else if (day == 3) 
  {
    printf("The day of the week is Wednesday.\n");
  } 
  else if (day == 4) 
  {
    printf("The day of the week is Thursday.\n");
  } 
  else if (day == 5) 
  {
    printf("The day of the week is Friday.\n");
  } 
  else if (day == 6) 
  {
    printf("The day of the week is Saturday.\n");
  } 
  else if (day == 7) 
  {
    printf("The day of the week is Sunday.\n");
  } 
  else 
  {
    printf("Invalid day number.\n");
  }

  return 0;
}
