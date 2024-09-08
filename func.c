#include <stdio.h>

// これは間違いね。試すとmainと違うポインタが渡ってきているのがわかる。
// void calculatePrice(int coffeePrice, int milkPrice, int additionPrice, int subtractionPrice){
//   printf("called calculatePrice@@@@@@@@@@@@@@@@@@@@@,");
//   printf("coffeePrice:%d\n,", coffeePrice);
//   printf("milkPrice:%d\n,", milkPrice);
//   printf("additionPrice:%d\n,", additionPrice);
//   printf("subtractionPrice:%d\n,", subtractionPrice);


//   printf("coffeePriceのアドレス:%p\n,", &coffeePrice);
//   printf("milkPriceのアドレス:%p\n,", &milkPrice);
//   printf("additionPriceのアドレス:%p\n,", &additionPrice);
//   printf("subtractionPriceのアドレス:%p\n,", &subtractionPrice);

// }

// ポインタを渡すんだよ
void calculatePrice(int *coffeePriceP, int *milkPriceP, int *additionPriceP, int *subtractionPriceP){
  printf("called calculatePrice@@@@@@@@@@@@@@@@@@@@@\n");

  printf("coffeePrice:%d\n", *coffeePriceP);
  printf("milkPrice:%d\n", *milkPriceP);
  printf("additionPrice:%d\n", *additionPriceP);
  printf("subtractionPrice:%d\n", *subtractionPriceP);

  printf("coffeePrice:%p\n", (void*)coffeePriceP);
  printf("milkPrice:%p\n", (void*)milkPriceP);
  printf("additionPrice:%p\n", (void*)additionPriceP);
  printf("subtractionPrice:%p\n", (void*)subtractionPriceP);

  *additionPriceP = *coffeePriceP + *milkPriceP;
  *subtractionPriceP = *coffeePriceP - *milkPriceP;


}

int main(void){
  int coffeePrice = 300;
  int milkPrice = 200;
  int additionPrice = 0;
  int subtractionPrice = 0;

  printf("coffeePrice:%d\n", coffeePrice);
  printf("milkPrice:%d\n", milkPrice);
  printf("additionPrice:%d\n", additionPrice);
  printf("subtractionPrice:%d\n", subtractionPrice);

  printf("coffeePriceのアドレス:%p\n", &coffeePrice);
  printf("milkPriceのアドレス:%p\n", &milkPrice);
  printf("additionPriceのアドレス:%p\n", &additionPrice);
  printf("subtractionPriceのアドレス:%p\n", &subtractionPrice);

  int *coffeePriceP = &coffeePrice;
  int *milkPriceP = &milkPrice;
  int *additionPriceP = &additionPrice;
  int *subtractionPriceP = &subtractionPrice;

  printf("ポインタの値:%d\n", *coffeePriceP);
  printf("ポインタの値:%d\n", *milkPriceP);
  printf("ポインタの値:%d\n", *additionPriceP);
  printf("ポインタの値:%d\n", *subtractionPriceP);

  calculatePrice(&coffeePrice, &milkPrice, &additionPrice, &subtractionPrice);

  printf("ポインタの値:%d\n", *additionPriceP);
  printf("ポインタの値:%d\n", *subtractionPriceP);
  // これは間違いね
  // calculatePrice(coffeePrice, milkPrice, additionPrice, subtractionPrice);
  
}