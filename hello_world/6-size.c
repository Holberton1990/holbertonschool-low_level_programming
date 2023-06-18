#include <stdio.h>
#include <conio.h>
int main(void)
{

	
	printf("          int is %2d bytes \n", sizeof(int));
	printf("     long int is %2d bytes \n", sizeof(long int));
	printf("   long int * is %2d bytes \n", sizeof(long long int));
	printf("        float is %2d bytes \n", sizeof(float));
	printf("       double is %2d bytes \n", sizeof(double));
	printf("         char is %2d bytes \n", sizeof(char));
	return(0);
}
