#include <stdio.h>

// 関数の引数や戻り値として、文字列や配列を使ってはならない。

// 型宣言
typedef char String[1024];

// プロトタイプ宣言
void hello(void);
void afterNoon(void);
void evening(void);
int multiplyDrinkPrice(int, int);

int main(void) {

  // ご挨拶関数
  hello();
  afterNoon();
  evening();

  // 計算関数
  int totalPrice = multiplyDrinkPrice(100, 4);
  printf("合計金額は:%d円です。", totalPrice);

  return 0;
}

void hello(void){
  printf("hello");
  printf("\n");
}
void afterNoon(void){
  printf("afterNoon");
  printf("\n");
}
void evening(void){
  printf("evening");
  printf("\n");
}

int multiplyDrinkPrice(int price, int num) {
  int totalPrice = price * num;
  return totalPrice;
}