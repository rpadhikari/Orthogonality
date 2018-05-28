#include<stdio.h>
#include<math.h>
int main() {
  int m;
  int n;
  int p=9000;
  double pow(double, double);
  double fact(int);
  static double pi=M_PI;
  double simp(double, double, int, int, int);
  printf(" Value of m and n = ");
  scanf("%d %d", &m, &n);
  double a=-15.0;
  double b=15.0;
  printf(" m = %2d n = %2d \t Integral = %15.8lf\n", m, n, simp(a, b, p, m, n));
  if(m==n) {
    printf("Exact value of integral = %15.8lf\n", 
            pow(2,(double)n)*pow(pi,0.5)*fact(n));
  } else {
    printf("Exact value of integral = 0.00000\n");
  }
  
}

