#ifndef _definition_h_INCLUDED
#define _definition_h_INCLUDED

#include "badbool.h"

struct kissat;

bool kissat_find_definition (struct kissat *, unsigned lit);

#endif
