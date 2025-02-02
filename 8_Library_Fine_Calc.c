#include <stdio.h>

int main() 
{
  int overdue_days;
  float fine = 0.0;

  printf("Enter the number of overdue days: ");
  scanf("%d", &overdue_days);

  if (overdue_days <= 5) 
  {
    fine = overdue_days * 0.5;
  } 
  else if (overdue_days <= 10) 
  {
    fine = (5 * 0.5) + ((overdue_days - 5) * 1.0);
  } 
  else if (overdue_days <= 30) 
  {
    fine = (5 * 0.5) + (5 * 1.0) + ((overdue_days - 10) * 5.0);
  } 
  else 
  {
    fine = (5 * 0.5) + (5 * 1.0) + (20 * 5.0) + ((overdue_days - 30) * 10.0);
  }

  printf("The total fine is: $%f\n", fine);

  return 0;
}
