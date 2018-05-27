#include<stdio.h>
#include<math.h>
double simp(double, double, int, int, int);
int main() {
  int m=5;
  int n=5;
  int p=3000;
  double a=-1.0;
  double b=1.0;
  printf("%d %d %10.5lf\n", m, n, simp(a, b, p, m, n));
}

