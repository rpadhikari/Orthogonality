double Hermite(int, double);
double exp(double);
double ortho(int m, int n, double x) {
  return Hermite(m, x)*Hermite(n, x)*exp(-x*x);
}

