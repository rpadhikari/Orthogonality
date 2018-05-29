double exp(double);
double fx(int n, double x) {
//  static double pi=3.14159265358979;  // pi
  static double pi_2=1.772453850905516; // square root of pi
  return n*exp(-n*n*x*x)/pi_2;
}
