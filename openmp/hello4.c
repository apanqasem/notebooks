#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

int main(int argc, char* argv[]) {
  int num_threads;
  if (argc <= 1)
    num_threads = 1;
  else
    num_threads = atoi(argv[1]);

  omp_set_num_threads(num_threads);

#pragma omp parallel 
  { 
    printf("Hello World\n");
    printf("Goodbye World!\n");
  }
  return 0;
}
