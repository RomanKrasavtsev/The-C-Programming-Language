#include <stdio.h>

int main(){
  float farh, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Celsius\tFahrenheit\n");

  celsius = lower;
  while (celsius <= upper)
  {
    farh = celsius / (5.0 / 9.0) + 32.0;
    printf("%.2f\t%.1f\n", celsius, farh);
    celsius += step;
  }
}
