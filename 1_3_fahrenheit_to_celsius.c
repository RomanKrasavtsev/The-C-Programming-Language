#include <stdio.h>

int main(){
  float farh, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  
  printf("Fahrenheit\tCelsius\n");

  farh = lower;
  while (farh <= upper)
  {
    celsius = (5.0 / 9.0) * (farh - 32.0);
    printf("%.0f\t\t%.1f\n", farh, celsius);
    farh += step;
  }
}
