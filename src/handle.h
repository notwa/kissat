#ifndef _handle_h_INCLUDED
#define _handle_h_INCLUDED

#include <signal.h>

void kissat_init_signal_handler (void (*handler) (int));
void kissat_reset_signal_handler (void);

void kissat_init_alarm (void (*handler) (void));
void kissat_reset_alarm (void);

#ifndef _WIN32
#define SIGNALS \
SIGNAL(SIGABRT) \
SIGNAL(SIGBUS) \
SIGNAL(SIGINT) \
SIGNAL(SIGSEGV) \
SIGNAL(SIGTERM)
#else
#define SIGNALS \
SIGNAL(SIGABRT) \
SIGNAL(SIGINT) \
SIGNAL(SIGSEGV) \
SIGNAL(SIGTERM)
#endif

// *INDENT-OFF*

static inline const char *
kissat_signal_name (int sig)
{
#define SIGNAL(SIG) \
  if (sig == SIG) return #SIG;
  SIGNALS
#undef SIGNAL
#ifndef _WIN32
  if (sig == SIGALRM)
    return "SIGALRM";
#endif
  return "SIGUNKNOWN";
}

// *INDENT-ON*

#endif
