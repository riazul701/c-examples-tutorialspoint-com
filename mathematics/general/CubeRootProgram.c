#include <stdio.h>

double cubeRoot(double n) {
   double i, precision = 0.000001;

   for(i = 1; (i*i*i) <= n; ++i);         //Integer part

   for(--i; (i*i*i) < n; i += precision);  //Fractional part

   return i;
}

int main() {
   int n = 125;

   printf("Cube root of %d = %lf", n, cubeRoot(n));

   return 0;
}