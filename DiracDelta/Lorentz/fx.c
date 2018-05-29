double fx(int n, double x) {
  static double pi=3.14159265358979; // pi
//  static double pi_2=1.772453850905516; // square root of pi
  return ((double)n/pi)/(1.0+(double)n*(double)n*x*x);
}
