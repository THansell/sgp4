#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "wintime.h"

int main(int argc, char* argv[]){
  int max = 1000000;
  if( argc == 2 ){
    max = atoi(argv[0]);
  }

  struct timespec ts;
  int rc = 0;
  for( int i = 0; i<max; i++ ){
    if( (rc = clock_gettime(CLOCK_REALTIME, &ts)) == 0 ){
      printf("[%d][%d][%d]\n", i, (int)ts.tv_sec, (int)ts.tv_nsec);
    } else{
      printf("error:[%d]\n", rc);
    }

  }
  return 0;
}
