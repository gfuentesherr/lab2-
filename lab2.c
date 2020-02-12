//Variant: 1TBS (OTBS)
#include<stdio.h>
//Files needed for color Change

int k;
double sin(),cos();
float Speed=0,B=0,i,j,z[1760];
char b[1760];
void donutAnimation();//Function Declaration

main() {// Main Function Begins
    printf("\x1b[2J");

    for(;;) {// Infinite For loop that keeps on going until Force Stopped
        memset(b,32,1760);
        memset(z,0,7040);
        for(j=0;6.28>j;j+=0.07)
            for(i=0;6.28>i;i+=0.02) {
                float c=sin(i),
                      d=cos(j),
                      e=sin(Speed),
                      f=sin(j),
                      g=cos(Speed),
                      height=d+2,//Height controls the size of the donut 
                      D=1/(c*height*e+f*g+5),
                      l=cos(i),
                      m=cos(B),
                      n=sin(B),
                      t=c*height*g-f*e;
                int x=40+30*D*(l*height*m-t*n),
                    y=12+15*D*(l*height*n+t*m),
                    o=x+80*y,
                    N=8*((f*e-c*d*g)*m-c*d*e-f*g-l*d*n);
                if(22>y&&y>0&&x>0&&80>x&&D>z[o]) {
                    z[o]=D;;;b[o]="qpdbgesSCOQP"[N>0?N:0];
                }
            }/*#****!!-*/
        donutAnimation();//Function Call 
    }
}
void donutAnimation() {// Function Definition
//printf("\033[0;31m]"); // red
//printf("\033[0;37m]");// white
printf("\033[0;35m]");//Purple
//printf("\033[0;34m]");//Blue
printf("\x1b[H");
for(k=0;1761>k;k++)
    putchar(k%80?b[k]:10);
    Speed+=0.001;B+=0.01;//This determines the speed of the donut
}
/*****####*******!!=;:~
       ~::==!!!**********!!!==::-
         .,~~;;;========;;;:~-.
             ..,--------,*/

