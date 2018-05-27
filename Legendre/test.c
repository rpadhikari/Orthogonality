#include<stdio.h>
#include<math.h>
FILE *fout;
  double legendre(int, double);

int main() {
  int i, n=3;
  double x;
  int m=99;
  fout=fopen("data.dat", "w");
  for(i=-m; i<=m; i++) {
    x=(double)i*0.01;
    fprintf(fout,"%7.2lf %lf\n", x, legendre(n, x));
  }
  fclose(fout);
}

