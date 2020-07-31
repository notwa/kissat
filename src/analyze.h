#ifndef _analyze_h_INCLUDED
#define _analyze_h_INCLUDED

#include "badbool.h"

struct clause;
struct kissat;

int kissat_analyze (struct kissat *, struct clause *);

#endif
