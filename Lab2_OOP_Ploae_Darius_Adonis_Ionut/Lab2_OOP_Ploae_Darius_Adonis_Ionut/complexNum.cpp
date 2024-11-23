#include "complexNum.h"
#include <math.h>

//Only real part
float absoluteValue(float nr) {
	return sqrt(nr * nr);
}

//The whole complex number
float absoluteValue(nrComplex nr) {
	return sqrt(nr.real * nr.real + nr.imaginary * nr.imaginary);
}