#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define NUM 5

void hantei(char* kaitou, int a){
    
    char* seikai[NUM];
    seikai[1] = "1-";
    seikai[2] = "1+";
    seikai[3] = seikai[4] = "2+";
        
    if(strcmp(kaitou, seikai[a]) == 0){
        printf("正解\n");
    }
    else{
        printf("不正解\n");
    }
}

int GetRandom(int min, int max){
    return min + (int)(rand()*(max - min + 1.0) / (1.0 + RAND_MAX));
}

void mondai(void){
    int a;
    char kaitou[NUM];
    a = GetRandom(1, 4);
    
    switch(a){
        case 1 :
            printf("塩化物イオン：");
            scanf("%s", kaitou);
            hantei(kaitou, a);
            break;   
        case 2 :
            printf("ナトリウムイオン：");
            scanf("%s", kaitou);
            hantei(kaitou, a);
            break;   
        case 3 :
            printf("銅イオン：");
            scanf("%s", kaitou);
            hantei(kaitou, a);
            break;
        case 4 :
            printf("マグネシウムイオン：");
            scanf("%s", kaitou);
            hantei(kaitou, a);
            break;
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
