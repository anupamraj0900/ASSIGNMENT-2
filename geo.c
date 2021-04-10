#include<stdio.h>
#define PI 3.14159265358979323846
#include <math.h>
int main()
{
 int pickup;
 double s1;
 double s2;
 double s3;
 do
 {
  
  printf("\n1) Compute the area of a square\n");
  printf("\n2) Compute the volume of a sphere\n");
  printf("\n3) Compute the surface area of a cube\n");
  printf("\n4) Quit");
  printf("\n Enter an option: ");
  scanf("%d",&pickup);
  switch (pickup)
  {
    case  1: 
            printf("Enter the side length(cm): ");
            scanf("%lf",&s1);
            double res=s1*s1;
            printf("Area of the square:%.2lf(cm)",res);
            return 0;


           break;
    case  2: printf("Enter the radius (cm): ");
scanf("%lf",&s2);
double nur=(4/3.0)*PI*pow(s2,3);
printf("Volume of the sphere :%.2lf (cm)",nur);
return 0;

           break;
    case  3: printf("Enter the edge of the cube(cm): ");
scanf("%lf",&s3);
double lef= 6.0*s3*s3;
printf("Surface area of the cube:%.2lf(cm)",lef);
return 0;

            break;
 case 4:printf("Good Bye!");

           
    
           break;
  }
 } while (pickup != 4);
 return 0;
}