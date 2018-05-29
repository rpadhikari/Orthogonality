#include<stdio.h>
#include<math.h>
double simp(double, double, int, int);
int main() {
  int n=4;
  double a, b;
  static int p=3000;
  printf(" Value of n = ");
  scanf("%d", &n);
  printf(" Lower limit of integral a = ");
  scanf("%lf",&a);
  printf(" Lower limit of integral b = ");
  scanf("%lf",&b);
  printf(" n = %2d \t Integral = %15.8lf\n", n, simp(a, b, p, n));
  
}

