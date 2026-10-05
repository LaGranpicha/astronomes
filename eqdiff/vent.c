#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float f(float x, float y) {
    return 2*((1/x)-(1/(x*x)))/(y-1/y);

}

float rk4(float x,float y,float h) {
    float xnext=x+h;
    float ynext;
    float k1;
    float k2;
    float k3;
    float k4;
    k1=h*f(x,y);
    k2=h*f(x+h/2,y+k1/2);
    k3=h*f(x+h/2,y+k2/2);
    k4=h*f(x+h,y+k3);
    ynext=y+(k1+2*k2+2*k3+k4)/6;
    return ynext;
}


int main() {
float h=0.5;
//y0
float y0=3.65;
float y;
float x;

//vents supersoniques

//brises solaires
FILE *f = fopen("trajectoires.csv", "w");
fprintf(f, "x,y\n");
y=y0;
for(x=0.2; x<=21; x=x+h){
    fprintf(f,"%.4f, %.2e\n",x,y);
    y=rk4(x,y,h);
}
fclose(f);
}