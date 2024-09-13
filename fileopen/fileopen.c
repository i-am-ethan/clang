#include <stdio.h>
#include <stdlib.h>

int main(void){
  FILE* fp;
  fp = fopen("hello.txt", "r");
  if (fp == NULL) {
    printf("fileを読み取れませんでした。\n");
    exit(1);
  } else {
    printf("ファイルが開けました。");
  }
  fclose(fp);
  printf("ファイルを閉じました");

  return 0;
}