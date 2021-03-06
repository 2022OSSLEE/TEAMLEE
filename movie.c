#include <stdio.h>
#include <string.h>
#include "movie.h"

int createMovie(Movie *m) {
    printf("제목: ");
    getchar();
    fgets(m->name, SIZE, stdin);
    m->name[strlen(m->name) - 1] = '\0';
    printf("감독: ");
    fgets(m->gamdog, SIZE, stdin);
    m->gamdog[strlen(m->gamdog) - 1] = '\0';
    printf("장르: ");
    fgets(m->type, SIZE, stdin);
    m->type[strlen(m->type) - 1] = '\0';
    printf("제작국가(1: 한국영화 2: 외국영화) : ");
    scanf("%d", &m->c);
    printf("한줄평: ");
    getchar();
    fgets(m->intro, 10000, stdin);
    m->intro[strlen(m->intro) - 1] ='\0';

    printf("=>추가됨!\n");

    return 1;
}

int updateMovie(Movie *m) {
    printf("제목: ");
    getchar();
    fgets(m->name, SIZE, stdin);
    m->name[strlen(m->name) - 1] = '\0';
    printf("감독: ");
    fgets(m->gamdog, SIZE, stdin);
    m->gamdog[strlen(m->gamdog) - 1] = '\0';
    printf("장르: ");
    fgets(m->type, SIZE, stdin);
    m->type[strlen(m->type) - 1] = '\0';
    printf("제작국가(1: 한국영화 2: 외국영화) : ");
    scanf("%d", &m->c);
    printf("한줄평: ");
    getchar();
    fgets(m->intro, 10000, stdin);
    m->intro[strlen(m->intro) - 1] ='\0';

    printf("=> 수정됨!\n");

    return 0;
}

void readMovie(Movie m){
    printf("%3s %7s %7s %7d %7s\n", m.name, m.gamdog, m.type, m.c, m.intro);
}

int deleteMovie(Movie *m){
    m->c=-1;
    printf("==> 삭제됨!\n");
    return 0;
}
