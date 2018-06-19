#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM 5

void mondai(void);
void hantei(int a);
int GetRandom(int min, int max);

int main(void){
    srand((unsigned) time(NULL));

    printf("例：1価の陽イオン→　1+　　1価の陰イオン→　1-\n");
    printf("スタート:Enter");

    int retry;
    do {
        mondai();

        printf("もう一度：1、終わり0:");
        scanf("%d", &retry);

    } while(retry == 1);

    return 0;
}

void mondai(void){
    int a;
    a = GetRandom(0, 4);

    switch (a) {
        case 0 :
            printf("塩化物イオン：");
            hantei(a);
            break;   
        case 1 :
            printf("ナトリウムイオン：");
            hantei(a);
            break;   
        case 2 :
            printf("銅イオン：");
            hantei(a);
            break;
        case 3 :
            printf("マグネシウムイオン：");
            hantei(a);
            break;
        case 4 :
            printf("硫酸イオン：");
            hantei(a);
            break;
    }
}

void hantei(int a){

    char *seikai[NUM];
    seikai[0] = "1-";
    seikai[1] = "1+";
    seikai[2] = seikai[3] = "2+";
    seikai[4] = "2-";

    char kaitou[NUM];
    scanf("%s", kaitou);

    if (strcmp(kaitou, seikai[a]) == 0) {
        printf("正解\n");
    }
    else {
        printf("不正解\n");
    }
}

int GetRandom(int min, int max){
    return min + (int)(rand()*(max - min + 1.0) / (1.0 + RAND_MAX));
}
