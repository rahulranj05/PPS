#include <stdio.h>

int main() 
{
  char grade;
  int years;
  float salary;

    
  printf("Enter your grade (A, B, C): ");
  scanf(" %c", &grade);
  printf("Enter your years of service: ");
  scanf("%d", &years);

  if (grade == 'A' || grade == 'a') 
  {
    if (years > 10) 
    {
      salary = 10000;
    } 
    else
    {
      salary = 7000;
    }
  } 
  else if (grade == 'B' || grade == 'b') 
  {
    if (years > 10) 
    {
      salary = 8000;
    } 
    else 
    {
      salary = 6000;
    }
  } 
  else if (grade == 'C' || grade == 'c') 
  {
    if (years > 10) 
    {
      salary = 6000;
    } 
    else 
    {
      salary = 4000;
    }
  }
  else 
  {
    printf("Invalid grade!\n");

    return 1;
  } 

  printf("Your salary is: $%f\n", salary);

  return 0;
}
