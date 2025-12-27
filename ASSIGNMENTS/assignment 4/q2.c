#include<stdio.h>
#include<stdbool.h>
int main(){
  int n;
  bool c = 0;
  scanf("%d", &n);
  if(n > 3){
    printf("%d\n%d\n", 2, 3);
    for (int i = 5; i <= n; i += 2){
      for(int j = 2; j < i; j++){
        if(i % j == 0) {
          c = 1;
          break;  
        }
      }
      if(c == 0) printf("%d\n", i);
      c = 0;
    }
  }
  else if(n == 2) printf("%d\n", 2);
  else return 1;
  return 0;
}