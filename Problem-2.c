#include <stdio.h>
#include <math.h>

int main()
{
    double d,sin_theta2,lambda1=530.0,lambda2=700.0,theta1=65.0,theta1rad,theta2rad,theta2;
    int m1=3,m2=2;

    //Variables for green light---
    //m1=3,theta1=65,theta1rad,lamda1=530

    //variables for red light--
    //m2=2,theta2=?,theta2rad,lambda2=700


    printf("====| Diffraction Grating Problem By Group 4 |====\n\n");


    theta1rad=theta1*3.14159265/180.0; //converting angle of green light from degree to rad

    d = (m1*lambda1)/sin(theta1rad); //calculating d

    sin_theta2= (m2*lambda2)/d; //calculating sin theta of red light

  

    if(sin_theta2>1.0)
    {
        printf("The second order bright spot cannot be observed.\n");
    }
    else
    {
        theta2rad = asin(sin_theta2); //converting sin value to degree
        theta2 = theta2rad*180.0/3.14159265; //converting degree to rad

        printf("Angle for second order red light: %.2f degrees\n",theta2);
    }


    return 0;
}
