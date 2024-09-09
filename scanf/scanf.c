#include <stdio.h>

// 実務上はあまり使用しない

int main(void){
  char name[100];
  printf("あなたの名前を入力してください:");
  scanf("%99s", name); // 99文字まで受け付ける
  printf("こんにちは%sさん。\n", name);
  return 0;
}