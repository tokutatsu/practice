#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int GetRandom(int min, int max){
    return min + (int)(rand()*(max - min + 1.0) / (1.0 + RAND_MAX));
}

void mondai(void){
    int a;
    char kaitou[3];
    a = GetRandom(1, 3);
    
    if(a == 1){
        printf("塩化物イオン：");
        scanf("%s", kaitou);
        if(strcmp(kaitou, "1-") == 0){
            printf("正解\n");
        }
        else{
            printf("不正解\n");
        }   
    }
    
    if(a == 2){
        printf("ナトリウムイオン：");
        scanf("%s", kaitou);
        if(strcmp(kaitou, "1+") == 0){
            printf("正解\n");
        }
        else{
            printf("不正解\n");
        }
    }

    if(a == 3){
        printf("銅イオン：");
        scanf("%s", kaitou);
        if(strcmp(kaitou, "2+") == 0){
            printf("正解\n");
        }
        else{
            printf("不正解\n");
        }
    }
}

int main(void){
    srand((unsigned) time(NULL));
    
    printf("例：1価の陽イオン→　1+　　1価の陰イオン→　1-\n");
    
    int retry;
    do{
        mondai();

        printf("もう一度：1、終わり0:");
        scanf("%d", &retry);

    } while(retry == 1);

    return 0;
}
