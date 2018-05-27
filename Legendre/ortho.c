double legendre(int, double);
double ortho(int m, int n, double x) {
  return legendre(m,x)*legendre(n,x);
}

