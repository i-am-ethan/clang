#include <stdio.h>

typedef char String[1024];

int main(void) {
  String name = "ethan";
  printf("私の名前は%sです\n", name);

  // 0を入れてみる
  String name_null = "eth\0an";
  printf("私の名前は%sです\n", name_null);
  // 私の名前はethですと表示される。
  // c言語の文字列は0までと判断するから

}