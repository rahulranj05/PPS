#include <stdio.h>

int main() 
{
  int choice;
  float temperature, convertedTemperature;

  printf("Temperature Conversion Program\n");
  printf("Choose the conversion type:\n");
  printf("1. Fahrenheit to Celsius\n");
  printf("2. Celsius to Fahrenheit\n");
  printf("Enter your choice (1 or 2): ");
  scanf("%d", &choice);

  if (choice == 1) 
  {
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temperature);

    convertedTemperature = (temperature - 32) * 5 / 9;
    printf("%f Fahrenheit is %f Celsius\n", temperature, convertedTemperature);
  } 
  else if (choice == 2) 
  {
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    convertedTemperature = (temperature * 9 / 5) + 32;
    printf("%f Celsius is %f Fahrenheit\n", temperature, convertedTemperature);
  } 
  else 
  {
    printf("Invalid choice! Please run the program again.\n");
  }

  return 0;
}
