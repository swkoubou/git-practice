#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (size_t i = 1; i <= 100; i++) {
    if(i%15==0){
      printf("%dban - fizzbuzz\n",i);
    }else if(i%3==0){
      printf("%dban - fizz\n",i);
    }else if(i%5==0){
      printf("%dban - buzz\n",i);
    }
  }
  return 0;
}
