#include <stdio.h>
#include <math.h>

int main()
{
    double radius = 0.0;
    double area = 0.0;
    double pi = 3.14159;
    double surfacearea = 0.0;
    double volume =0.0;


     printf("enter the radius of the circle: ");
     scanf("%lf", &radius);
     area = pi*pow(radius,2);
     surfacearea =4*pi*pow(radius,2);
     volume= (4.0/3.0)*pi*pow(radius,3);



     printf("AREA : %.2lf\n",area);
     printf("SURFACE AREA :%lf\n",surfacearea);
     printf("VOLUME : %lf",volume);







    return 0;
}
