#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ALTURA 1.83 //usando uma constane fpra da main para não ter perigo de ser alterada

int main ()  {

float pesoideal = 0;

pesoideal =  72.7 * ALTURA - 58;

printf ("o peso ideal para voce e: %.2f\n",pesoideal);

return 0;


}
