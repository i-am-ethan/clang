#include <stdio.h>

int main(void){
  printf("ポインタのお遊び\n");

  int coffeePrice = 30;
  printf("coffeePriceの値:%d\n", coffeePrice);
  printf("coffeePriceのアドレス:%p\n", &coffeePrice);

  int *coffeePriceP = &coffeePrice;
  printf("coffeePriceのアドレスを取得したポインタcoffeePricePのアドレス:%p\n", coffeePriceP);
  printf("ポインタcoffeePricePのアドレスの値:%d\n", *coffeePriceP);

  *coffeePriceP = 40;
  printf("ポインタcoffeePricePの値を30から40に書き換える:%d\n", *coffeePriceP);

  int milkPrice = 50;
  printf("milkPriceの値を取得:%d\n", milkPrice);
  int *milkPriceP = &milkPrice;
  printf("milkPricePのアドレスを表示:%p\n", milkPriceP);
  printf("milkPricePのアドレスの値を表示:%d\n", *milkPriceP);
  *milkPriceP = 60;
  printf("milkPricePの値を書き換える:%d\n", *milkPriceP);
  
  printf("coffeePrice:%d\n", coffeePrice);
  printf("milkPrice:%d\n", milkPrice);

  int totalPrice = coffeePrice + milkPrice;
  printf("totalPrice:%d\n", totalPrice);
  printf("totalPriceのアドレス:%p\n", &totalPrice);

  return 0;
}