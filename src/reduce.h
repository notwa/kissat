#ifndef _reduce_h_INCLUDED
#define _reduce_h_INCLUDED

#include "badbool.h"

struct kissat;

bool kissat_reducing (struct kissat *);
int kissat_reduce (struct kissat *);

#endif
