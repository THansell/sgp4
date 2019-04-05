#ifndef _WINTIME_H_
#define _WINTIME_H_


//#ifndef _STRUCT_TIMESPEC
//#define _STRUCT_TIMESPEC
//struct timespec{
//  long tv_sec;     /* seconds */
//  long tv_nsec;    /* nanoseconds */
//};
//#endif

#define CLOCK_REALTIME      0

#define exp7           10000000i64     //1E+7     //C-file part
#define exp9         1000000000i64     //1E+9
#define w2ux 116444736000000000i64     //1.jan1601 to 1.jan1970
void unix_time(struct timespec *spec);
int clock_gettime(int, timespec *spec);

#endif
