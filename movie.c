#include <stdio.h>
#include <string.h>
#include "movie.h"

int createMovie(Movie *m) {
    printf("제목: ");
    scanf("%s", m->name);
    printf("감독: ");
    scanf("%s", m->gamdog);
    printf("장르: ");
    scanf("%s", m->type);
    printf("제작국가: ");
    scanf("%d", &m->c);
    printf("한줄평: ");
    printf("%s", m->intro);  

    printf("=>추가됨!\n");

    return 1;
}

int updateMovie(Movie *m) {
    printf("제목: ");
    scanf("%s", m->name);
    printf("감독: ");
    scanf("%s", m->gamdog);
    printf("장르: ");
    scanf("%s", m->type);
    printf("제작국가: ");
    scanf("%d", &m->c);
    printf("한줄평: ");
    printf("%s", m->intro);

    printf("=> 수정됨!\n");

    return 0;
}

int selectDataNo(Movie *m, int count) {
    int no;
    listMovie(m, count);
    printf("번호는 (취소 :0)? ");
    scanf("%d", &no);
    return no;
}

int selectMenu(){
    int menu;
    printf("\n*** 나만의 영화첩 ***\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("0. 종료\n\n");첩
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

int listMoive(Movie *m[], int count) {
    printf("no %-10s %-5s %-5s %-5s %-5s\n","영화제목", "", "제품설명", "가격", "배송방법(1-새벽/2-택배)");
    printf("--------------------------------------------------------\n");
    for(int i=0;i<count;i++)
    {
        if(p[i]->price==-1) continue;
        printf("%2d ",i+1);
        readProduct(*p[i]);
    }
    return 0;
}
