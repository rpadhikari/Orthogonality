double exp(double);
double fx(int n, double x) {
//  static double pi=3.14159265358979;
  static double pi_2=1.772453850905516;
  return (double)n*exp(-(double)n*(double)n*x*x)/pi_2;
}

