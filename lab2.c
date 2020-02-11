//Variant: 1TBS (OTBS)

k;
double sin(),cos();
main() {
    float Speed=0,B=0,i,j,z[1760];
    char b[1760];
    printf("\x1b[2J");
    for(;;) {
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
                    z[o]=D;;;b[o]=".,-~:;=!*#$@"[N>0?N:0];
                }
            }/*#****!!-*/
        printf("\x1b[H");
        for(k=0;1761>k;k++)
            putchar(k%80?b[k]:10);
            Speed+=0.01;B+=0.001;//This determines the speed of the donut
    }
}
/*****####*******!!=;:~
       ~::==!!!**********!!!==::-
         .,~~;;;========;;;:~-.
             ..,--------,*/

