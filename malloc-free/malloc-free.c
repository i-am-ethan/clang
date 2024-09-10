#include <stdio.h>
#include <stdlib.h>

int* readyAges(){
  int* age = (int*) malloc(16);
  return age;
}


int main(void){
  int* a = readyAges();
  if (a == NULL) {
    printf("ヒープ確保に失敗しました。\n");
  } else {
    printf("ヒープ確保に成功しました。\n");
    printf("aのポインタを見る%p\n", a);
    printf("aのポインタのサイズを見る%zu\n", sizeof(a));
    a[0] = 19;
    free(a);
  }

  return 0;
}