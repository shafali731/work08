#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "sieve.h"

int sieve(int targetPrime) {
  int length  = targetPrime * (int)log((double)targetPrime) * 1.5;
  char * arr =  malloc(length);

for (int current = 2; current < length; current++) {
    for (int a = current * 2; a < length; a += current){
        arr[a] = 'C';
    }
  }

  int ctr = 0;
  int curr = 2;
  int result;

  while(ctr != targetPrime){
    if (arr[curr] != 'C'){
      ctr += 1;
      result = curr;
    }
    curr++;
  }
  return result;
}

