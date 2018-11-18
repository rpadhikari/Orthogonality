#include<stdio.h>
#include<math.h>
FILE *fout;

double fnx(double, double, double, int);
int main() {
  int n, N=1000;
  double x1=0.3, x2=0.4, x=0.5;
  fout=fopen("data.dat", "w");

  for(n=1; n<=N; n++) {
    fprintf(fout,"%d %lf\n", n, fnx(x1, x2, x, n));
  }
  fclose(fout);

}
