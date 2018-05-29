double sin(double);
double fx(int n, double x) {
  static double pi=3.14159265358979;
//  static double pi_2=1.772453850905516;
  if(x !=0.0) {
//    return sin(((double)n+0.5)*x)/(2.0*pi*sin(x*0.5));
    return sin((double)n*x)/(pi*x);
  }
}

