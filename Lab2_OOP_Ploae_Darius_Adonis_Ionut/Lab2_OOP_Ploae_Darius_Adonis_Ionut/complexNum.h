#pragma once

typedef struct nrComplex {
	float real;
	float imaginary;
} nrComplex;

float absoluteValue(float nr);
float absoluteValue(nrComplex nr);