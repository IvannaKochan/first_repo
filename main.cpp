#include <stdio.h>
#include <math.h>

int main () {
    float a;
    float x=0.5;
    while(x<2)
    {if (x<1)
            a=cos(sqrt(pow(x,3)));

        else if (x < 1.5)
            a= atan(pow(exp(1),x));

        else if (x<2)
            a = pow(sin(log(x)), 5);

        else
            break;
        printf( "x=%f , a=%f \n",x,a );
        x+=0.2;
    }

}
