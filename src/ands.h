#ifndef _ands_h_INCLUDED
#define _ands_h_INCLUDED

#include "badbool.h"

struct kissat;

bool kissat_find_and_gate (struct kissat *, unsigned lit, unsigned negative);

#endif
