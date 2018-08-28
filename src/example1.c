#include <stdio.h> 
#include "finitediff_backward/finitediff_backward.h"
#include "finitediff_central/finitediff_central.h"
#include "finitediff_forward/finitediff_forward.h"

// shorthand function pointer
typedef double (*EVAL_FUNC_PTR)(double *, int);

// mean squared error, x=xi - xmean
double mse(double *x, int n){
    double f = 0.0;
    for(int i=0; i<n; i++){
        f += x[i] * x[i];
    }
    f /= (double)n;
    return f;
}

int main(){
    EVAL_FUNC_PTR evalfunc = &mse;
    double x[]={-.6, -.5, -.4, -.3, -.2, -.1, 0.0, .1 , .2, .3, .4, .5, .6};
    int n = 13;

    double gf[n];
    double gb[n];
    double gc[n];
    
    double h = 0.001;
    finitediff_forward(evalfunc, x, n, h, gf);
    finitediff_backward(evalfunc, x, n, h, gb);
    finitediff_central(evalfunc, x, n, h, gc);
    
    for(int i=0; i<n; i++){
        printf("x[%2d]: %7.4f | gf(x): %7.4f | gc(x): %7.4f | gb(x): %7.4f \n", 
            i, x[i], gf[i], gc[i], gb[i] );
    }
    
    return 0;
}
