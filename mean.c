#include "mean.h"

float mean(int a, int b) {
	return (a + b) / 2;
}

complex_float_t complex_mean(complex_int_t a, complex_int_t b) {
	complex_float_t res;

	res.re = mean(a.re, b.re);
	res.im = mean(a.im, b.im);

	return res;
}
