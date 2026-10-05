#include <cstdio>
#include "dvector.h"

dvector f(dvector Y) {
    float omega=5;
    int n=Y.size();
    dvector dY(n);
    for(int i=0;i!=n-1;i=i+1){
        dY[i]=Y[i+1];
    }
    dY[n-1]=-omega*omega*Y[0];
    return dY;
}


dvector euler(dvector Y,float h) {
    int n=Y.size();
    dvector Ynext(n);
    dvector k=h*f(Y);
    Ynext=Y+k;
    return Ynext;
}

int main() {
    float h=0.01;
    dvector Y(2);
    Y[0]=1;
    Y[1]=0;
    float y0=Y[0];
    FILE *f = fopen("oscillateur.csv", "w");
    float y;
    fprintf(f, "x,y\n");
    for(float x=0;x<10;x=x+h) {
        fprintf(f,"%f, %f\n",x,y);
        Y=euler(Y,h);
        y=Y[0];
    } 
}