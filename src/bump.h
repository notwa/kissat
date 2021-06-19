#ifndef _bump_h_INCLUDED
#define _bump_h_INCLUDED

#include "badbool.h"

struct kissat;

void kissat_bump (struct kissat *);

#define MAX_SCORE 1e150

#endif
