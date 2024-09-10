#include <stdio.h>

typedef char String[1024];

int main(void){

  String subject = "I";
  String verb = "am";
  String article = "an";
  String adjective = "super";
  String name = "Ethan";

  // 色付きで表示
  printf("\033[31m%s \033[0m", subject);
  printf("\033[32m%s \033[0m", verb);
  printf("\033[33m%s \033[0m", article);
  printf("\033[34m%s \033[0m", adjective);
  printf("\033[35m%s \033[0m", name);
  printf("\n");

  return 0;
}