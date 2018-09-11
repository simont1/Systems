#include  <stdio.h>
#include  <stdbool.h>

/* question 5 */
int q5(){
  int ans = 1;
  int i;
  while(true){
    for(i = 1; i < 21; i++){
      if(ans % i != 0){
        ans += 1;
        break;
      }
      if(i == 20 && ans % i == 0){
        return ans;
      }
    }
  }
}

/*question 6 */
int q6(){
  int sum_of_squares = 0;
  int square_of_sums = 0;
  for(int i = 1; i < 101; i++){
    sum_of_squares += (i * i);
    square_of_sums += i;
  }
  square_of_sums *= square_of_sums;
  return square_of_sums - sum_of_squares;
}

/* Question 2 */
int q2(){
  int ctr1 = 0;
  int ctr2 = 1;
  int sum = 0;
  while(ctr2 < 4000000){
    if(ctr2 % 2 == 0){
      sum += ctr2;
    }
    int place = ctr2;
    ctr2 += ctr1;
    ctr1 = place;
  }
  return sum;
}

int main(){

  /* question 1 */
  int sum;
  int i;
  for(i =0; i < 1000;i++ ){
    if (i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }
  printf("Question 1: %d\n", sum);
  printf("Question 5: %d\n", q5());
  printf("Question 6: %d\n", q6());
  printf("Question 2: %d\n", q2());
}
