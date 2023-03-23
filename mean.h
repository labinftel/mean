#ifndef _MEANH_
#define _MEANH_

typedef struct complex_int {
	int re;
	int im;
} complex_int_t;

typedef struct complex_float {
	float re;
	float im;
} complex_float_t;

float mean(int a, int b);

complex_float_t complex_mean(complex_int_t a, complex_int_t b);


#endif
