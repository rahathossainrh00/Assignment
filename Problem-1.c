#include <stdio.h>
#include <math.h>

int main()
{
    int m;
    double theta,theta_rad,d,wavelength;

    printf("======| Wavelength Calculator By Group 4 |======\n\n\n");



    printf("Enter the order of bright fringe (m):");
    scanf("%d",&m);

    printf("Enter the angle theta in degrees:");
    scanf("%lf",&theta);

    printf("Enter the slit separation (d) in micrometers:");
    scanf("%lf",&d);



    theta_rad = theta*3.14159265/180.0; //converting angle from degree to rad

    d = d*1000.0; //converting d from micrometer to nanometer

    wavelength = (d*sin(theta_rad))/m; //calculating wavelength

    printf("\n\nWavelength: %.2f nm\n",wavelength);

    printf("Color: ");



    if(wavelength>=380 && wavelength<450)
    {
        printf("Violet\n");
    }
    else if(wavelength>=450 && wavelength<485)
    {
        printf("Blue\n");
    }
    else if(wavelength>=485 && wavelength<500)
    {
        printf("Cyan\n");
    }
    else if(wavelength>=500 && wavelength<565)
    {
        printf("Green\n");
    }
    else if(wavelength>=565 && wavelength<590)
    {
        printf("Yellow\n");
    }
    else if(wavelength>=590 && wavelength<625)
    {
        printf("Orange\n");
    }
    else if(wavelength>=625&& wavelength<=750)
    {
        printf("Red\n");
    }
    else
    {
        printf("Out of visible range\n");
    }



    return 0;
}
