#include<stdio.h>

int main(){

    int R;
    float peri,area;

    printf("Para saber os quanto mede a borda e a area do seu redondo, coloque o valor do raio");
    scanf("%d",&R);

        peri = 2 * 3.14 * R;
        area = 3.14 * R * R;

    printf("A borda do seu redondo e %f e a area dele e de % f",peri,area);

    return 0;
}