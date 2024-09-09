#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef char String[1024];

int main(void){
  // int a[5] = {1,2,3,4,5};
  // printf("配列の中身%d", a[0]);
  // printf("配列の中身%d", a[1]);
  // printf("配列の中身%d", a[2]);
  // printf("配列の中身%d", a[3]);
  // printf("配列の中身%d", a[4]);

  srand((unsigned) time(NULL));
  enum {SUNNY, CLOUDY, RAINY};

  for (int i = 0; i < 4; i++) {
    int wetherType = rand() % 3;
    switch (wetherType) {
      case SUNNY:
        printf("SUNNY");
        break;
      case CLOUDY:
        printf("CLOUDY");
        break;
      case RAINY:
        printf("RAINY");
        break;
    };
    printf(" ");
    printf("\n");
  };

   String map_a[16] = {"#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#"};
   String map_b[16] = {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"};
   String map_c[16] = {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"};
   String map_d[16] = {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"};
   String map_e[16] = {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"};
   String map_f[16] = {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"};
   String map_g[16] = {"#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "#"};
   String map_h[16] = {"#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#"};
   

   for (int i = 0; i < 16; i++) {
    printf("%s", map_a[i]);
   };
    printf("\n");
   for (int i = 0; i < 16; i++) {
    printf("%s", map_b[i]);
   };
    printf("\n");
   for (int i = 0; i < 16; i++) {
    printf("%s", map_c[i]);
   };
    printf("\n");
   for (int i = 0; i < 16; i++) {
    printf("%s", map_d[i]);
   };
    printf("\n");
   for (int i = 0; i < 16; i++) {
    printf("%s", map_e[i]);
   };
    printf("\n");
   for (int i = 0; i < 16; i++) {
    printf("%s", map_f[i]);
   };
    printf("\n");
   for (int i = 0; i < 16; i++) {
    printf("%s", map_g[i]);
   };
    printf("\n");
   for (int i = 0; i < 16; i++) {
    printf("%s", map_h[i]);
   };

   
   
}