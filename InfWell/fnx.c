
double sin(double);
double cos(double);
static double pi=3.14159265358979;
double fnx(double x1, double x2, double x, int n) {
double sum, L=1.0;
  int i;
  sum=0.0;
  for(i=1; i<=n; i++) {
    sum+=sin((double)i*pi*x/L)*(cos((double)i*pi*x1/L)-
        cos((double)i*pi*x2/L))/((double)i);
  }
  return 2.0*sum/pi;
}
