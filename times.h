// From http://www.linuxjournal.com/article/5574

#ifndef _TIMES_H
#define _TIMES_H

#ifdef __linux__
#include <sys/times.h>

#elif _WIN32
#include <sys/timeb.h>
#include <sys/types.h>
#include <winsock2.h>
#include <windows.h> // sleep

int gettimeofday(struct timeval* t,void* timezone);
#define sleep(sleeptime) Sleep(1000*(sleeptime)) // linux sleep sleeptime s while windows sleep sleeptime ms

// from linux's sys/times.h

//#include <features.h>

#define __need_clock_t
#include <time.h>


/* Structure describing CPU time used by a process and its children.  */
struct tms
{
    clock_t tms_utime;          /* User CPU time.  */
    clock_t tms_stime;          /* System CPU time.  */
    
    clock_t tms_cutime;         /* User CPU time of dead children.  */
    clock_t tms_cstime;         /* System CPU time of dead children.  */
};

/* Store the CPU time used by this process and all its
 dead children (and their dead children) in BUFFER.
 Return the elapsed real time, or (clock_t) -1 for errors.
 All times are in CLK_TCKths of a second.  */
clock_t times (struct tms *__buffer);

typedef long long suseconds_t ;

#endif

#endif // #ifndef _TIMES_H
