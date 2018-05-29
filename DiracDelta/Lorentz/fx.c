double fx(int n, double x) {
  static double pi=3.14159265358979;
//  static double pi_2=1.772453850905516; // pi/2 in case I need.
  if(x != 0.0) {
    return ((double)n/pi)/(1.0+(double)n*(double)n*x*x);
  }
}

