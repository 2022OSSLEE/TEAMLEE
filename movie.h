#include <stdio.h>
#include <string.h>
#define SIZE 100

typedef struct{
        char name[SIZE];
        char gamdog[SIZE];
        char type[SIZE];
        int c;
        char intro[SIZE*10];
} Movie;

int createMovie(Movie *m); // 영화 정보 추가
void readMovie(Movie m); // 하나의 영화 정보 출력
void listMovie(Movie *m, int count); // 모든 영화 출력
int updateMovie(Movie *m); // 영화 하나 수정
int deleteMovie(Movie *m); // 영화 하나 삭제
int selectMenu() // 메뉴 선택
int selectDataNo(Movie *m, int count); // 번호 선택


