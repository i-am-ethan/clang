#include <stdio.h>

typedef char String[1024];

int main(void){

  typedef struct {
    String name;
    int hp;
    int attack;
  } Monster;

  Monster seiryu = {"青龍", 80, 15};
  Monster suzaku = {"朱雀", 100, 30};
  Monster byako = {"白虎", 100, 20};
  Monster genbu = {"げんぶ", 120, 10};

  const String TEMPLATE = "%s : HP=%3d 攻撃力=%2d\n";

  printf(TEMPLATE, seiryu.name, seiryu.hp, seiryu.attack);
  printf(TEMPLATE, suzaku.name, suzaku.hp, suzaku.attack);
  printf(TEMPLATE, byako.name, byako.hp, byako.attack);
  printf(TEMPLATE, genbu.name, genbu.hp, genbu.attack);


  return 0;
}
