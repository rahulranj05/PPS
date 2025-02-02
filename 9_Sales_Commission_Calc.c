#include <stdio.h>

int main() 
{
  float sales, commission;

  printf("Enter the sales amount: ");
  scanf("%f", &sales);
    
  if (sales <= 5000) 
  {
    commission = sales * 0.02;
  } 
  else if (sales <= 10000) {
    commission = sales * 0.05;
  } 
  else 
  {
    commission = sales * 0.10;
  }

  printf("The commission is: $%f\n", commission);

  return 0;
}
