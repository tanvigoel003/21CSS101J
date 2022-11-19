#include <stdio.h>
float radius;          /* radius of the sphere */
float volume;          /* volume of the sphere (to be computed) */
char line_text[50];      

/* the value of pi to 50 places */
const float PI = 3.14159265358979323846264338327950288419716939937510;
int main()
{
printf("registration number : RA2211042010033\n");
printf("Input the radius of the sphere : ");
fgets(line_text, sizeof(line_text), stdin);
sscanf(line_text, "%f", &radius);
volume = (4.0 / 3.0) * PI * (radius * radius * radius);  /* volumn=(4/3) * pi * r^3*/
printf("The volume of sphere is %f.\n", volume);
return(0);
}
