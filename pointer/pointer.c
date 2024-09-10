#include <stdio.h>

typedef char String[1024];
typedef struct {
    String name;
    int hp;
    int attack;
  }Monster;

void printMonsterSummary(Monster* monster);

int main(void){

  int coffeePrice = 100;
  int* coffeePricePointer = &coffeePrice;

  printf("coffeePricePointerの先頭アドレス:%p\n", coffeePricePointer);
  printf("coffeePricePointerのすべてのアドレス:%d\n", *coffeePricePointer);

  Monster dragon = {"dragon", 100, 80 };
  // dragonのポインタのサイズ：8バイト
  printf("辺数dragonのポインタのサイズは%zuバイト\n", sizeof(&dragon));
  // dragonのサイズ：1032バイト
  printf("辺数dragonのサイズは%zuバイト\n", sizeof(dragon));
  

  // 値渡し
  // printMonsterSummary(dragon);
  
  // ポインタ渡し
  printMonsterSummary(&dragon);
  

  return 0;
}

// 値渡し
// void printMonsterSummary(Monster monster){
//   printf("あなたのモンスターは%sです。", monster.name);
// }

// ポインタ渡し
void printMonsterSummary(Monster *monster){
  printf("あなたのモンスターは%sです。\n", monster->name);
  printf("あなたのモンスターのHPは%dです。\n", monster->hp);
  printf("あなたのモンスターの攻撃力は%dです。\n", monster->attack);
}