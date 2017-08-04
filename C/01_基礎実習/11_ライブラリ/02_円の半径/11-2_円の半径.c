/*
yƒvƒƒOƒ‰ƒ€ŠT—vz
‰~‚Ì–ÊÏ‚æ‚è”¼Œa‚ğ‹‚ß‚éB
*/

/*yƒvƒƒOƒ‰ƒ€z*/
#include <stdio.h>
#include <math.h> /* ”ŠwŠÖ” */

#define M_PI 3.14159265358979 /* ‰~ü—¦ */

int main(void)
{
	double circle_area; /* ‰~‚Ì–ÊÏ */
	double radius; /* ”¼Œa */

	printf("‰~‚Ì–ÊÏ ==> ");
	scanf("%lf", &circle_area); /* “ü—Í */

	radius = sqrt(circle_area / M_PI); /* ”¼Œa‚ğ‹‚ß‚éŒvZ */

	printf("”¼Œa = %.2f\n", radius); /* o—Í */

	return 0;
}

/*
yÀsŒ‹‰Ê1z
‰~‚Ì–ÊÏ ==> 78.5
”¼Œa = 5.00

yÀsŒ‹‰Ê2z
‰~‚Ì–ÊÏ ==> 200
”¼Œa = 7.98
*/

/*
yl@z
sqrtŠÖ”‚ÍA
ˆø”‚Ì•½•ûª‚ğŒvZ‚µA
Œ‹‰Ê‚ğdoubleŒ^‚Å•Ô‚·B
*/