#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM 5   //問題数

void Problem(void);
void Judge(int num, char *correct);
int GetRandom(int min, int max);
void Start();

int main(void) {
    srand((unsigned) time(NULL));

    printf("例：1価の陽イオン→　1+　　1価の陰イオン→　1-\n");
    printf("Enterでスタート");
    Start();

    int retry;
    do {
        Problem();
        printf("もう一度:1、終わり:0:");
        scanf("%d", &retry);
    } while (retry == 1);

    return 0;
}

void Problem(void) {
    int num;
    num = GetRandom(0, NUM - 1);

    switch (num) {
        case 0 :
            printf("塩化物イオン：");
            Judge(num, "1-");
            break;   
        case 1 :
            printf("ナトリウムイオン：");
            Judge(num, "1+");
            break;   
        case 2 :
            printf("銅イオン：");
            Judge(num, "2+");
            break;
        case 3 :
            printf("マグネシウムイオン：");
            Judge(num, "2+");
            break;
        case 4 :
            printf("硫酸イオン：");
            Judge(num, "2-");
            break;
    }
}

void Judge(int num, char *correct) {
    char answer[NUM];
    scanf("%s", answer);

    if (strcmp(answer, correct) == 0) {
        printf("正解\n");
    } else {
        printf("不正解\n");
    }
}

int GetRandom(int min, int max) {
    return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
}

void Start() {
    char buf[100];
    if (*fgets(buf, 100, stdin) == '\n') {
        return;
    } else {
        printf("Enterキーだけを押してください");
        Start();
    }
}
