#include <stdio.h>


int main(void){
  printf("ファイル名:%s\n",__FILE__);
  printf("このコードの行数:%d\n",__LINE__);
  printf("日付:%s\n",__DATE__);
  printf("時間:%s\n",__TIME__);
  printf("関数名:%s\n",__func__);
  return 0;
}