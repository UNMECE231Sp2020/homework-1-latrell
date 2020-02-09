#include <stdio.h>
#include "my_complex.h"


int main() {
	Complex a = {3, 4};
	Complex b = {5, 12};

	Complex (*ArrFuncPtr[4])(Complex, Complex);

	ArrFuncPtr[0] = complex_add;
	ArrFuncPtr[1] = complex_sub;
	ArrFuncPtr[2] = complex_mult;
	ArrFuncPtr[3] = complex_div;

	double (*ArrFuncPtr2[2])(Complex);

	ArrFuncPtr2[0] = magnitude;
	ArrFuncPtr2[1] = phase;



	for (int i=0; i < 4; i++)
	{
		fnt1 (ArrFuncPtr[i], a , b);

	}
	
	for (int i=0; i < 2; i++)
	{
		fnt2 (ArrFuncPtr2[i], a);
		fnt2 (ArrFuncPtr2[i], b);
	}

	return 0;
	
}
