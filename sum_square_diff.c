#include <stdio.h>

long sum_then_square(upto){
  long i, i_sum = 0, result = 0;

  for (i = 1; i <= upto; i++){
    i_sum += i;
  }
  result = i_sum * i_sum;
  return result;
}

long square_then_sum(upto){
  long j, each_square, result = 0;

  for (j = 1; j <= upto; j++){
    each_square = j * j;
    result += each_square;
  }
  return result;
}

main(){
  long result = sum_then_square(100) - square_then_sum(100);
  printf("%lu\n", result);
}
