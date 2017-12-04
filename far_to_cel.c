#include<stdio.h>
void main(){
  float fahr, celsius;
  int lower, upper, step;
  lower = 0;  /* lowest limit of temperature table */
  upper = 300;  /* upper limit of temperature table */
  step = 20;  /* step size */
  fahr = lower;
  printf("farenheit\tcelsius\n");
  while(fahr <= upper){
    celsius = 5.0 * (fahr - 32.0) / 9.0;
    printf("%5.0f\t%13.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
