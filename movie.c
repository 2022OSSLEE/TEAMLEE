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

void readMoive(Moive m){
    printf("%3s %7s %7s %7d %7s\n", m.name, m.gamdog, m.type, m.c, m.intro);
}

int deleteMovie(Movie *m){
    m->c=-1;
    printf("==> 삭제됨!\n");
    return 0;
}
