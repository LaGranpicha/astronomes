#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float f(float x, float y) {
    return -y;

}

float euler(float x,float y,float h) {
    float xnext=x+h;
    float ynext;
    float k;
    k=h*f(x,y);
    ynext=y+k;
    return ynext;
}
float heun(float x,float y,float h) {
    float xnext=x+h;
    float ynext;
    float k1;
    float k2;
    k1=h*f(x,y);
    k2=h*f(x+h,y+k1);
    ynext=y+(k1+k2)/2;
    return ynext;
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
float y0=1;
float y=y0;
float x;
printf("Avec Euler, on a:\n");
for(x=0; x<=10; x=x+h){
    printf("x=%f, y=%f\n",x,y);
    y=euler(x,y,h);
}
y=y0;
printf("Avec Heun, on a:\n");
for(x=0; x<=10; x=x+h){
    printf("x=%f, y=%f\n",x,y);
    y=heun(x,y,h);
}
y=y0;
printf("Avec rk4, on a:\n");
for(x=0; x<=10; x=x+h){
    printf("x=%f, y=%.5e\n",x,y);
    y=rk4(x,y,h);
}
}