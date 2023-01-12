//C program to find HCF(GCD) AND LCM of two numbers
//C program to find HCF(GCD) AND LCM of two numbers

#include <stdio.h>
int main() {
  int a, b, x, y, m, gcd, lcm;

  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);

  a = x;
  b = y;

  while (b != 0) {
    m = b;
    b = a % b;
    a = m;
  }

  gcd = a;
  lcm = (x*y)/gcd;

  printf("Greatest common divisor of %d and %d = %d\n", x, y, gcd);
  printf("Least common multiple of %d and %d = %d\n", x, y, lcm);

  return 0;
}

