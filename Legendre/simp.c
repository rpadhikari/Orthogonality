/*
 * simp.c Simpson's 3/8th rule
 *  Created on: May 25, 2017
 *  Author: Rajendra Adhikari
*/
double ortho(int, int, double);
double simp(double a, double b, int n, int p, int q) {
  int i;
  double sum1=0.0;
  double sum2=0.0;
  double sum3=0.0;
  double h, x;
  h=(b-a)/(double)n;
  for(i=1;i<=n-2;i=(i+3)){
    x=a+(double)i*h;
    sum1+=ortho(p,q,x);
    }
  for(i=2;i<=n-1;i=(i+3)){
    x=a+(double)i*h;
    sum2+=ortho(p,q,x);
  }
  for(i=3;i<=n-3;i=(i+3)){
    x=a+(double)i*h;
    sum3+=ortho(p,q,x);
  }
  return (3.0*h/8.0)*(ortho(p,q,a)+ortho(p,q,b)+3.0*sum1+3.0*sum2+2.0*sum3);
}

