#include <stdio.h>
#include <string.h>
#include "movie.h"
#include "manager.h"

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
    printf("5. 저장\n");
    printf("6. 검색\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

void listMovie(Movie *m,int count){
    printf("\nNo. Name    director   장르   제작국가  한줄평\n");
    printf("======================================================\n");
    for(int i=0; i<count; i++){
        if( m[i].c == -1 ) continue;
        printf("%2d.", i+1);
        readMovie(m[i]);
    }
    printf("\n");
}

void saveData(Movie *m, int count) {// FILE에 제품 목록을 저장하는 함수
    FILE *fp;
    fp = fopen("movie.txt", "wt");

    for(int i=0; i<count; i++) {
        if(m[i].c == -1) continue;
        fprintf(fp, "%s %s %s %d %s\n", m[i].name, m[i].gamdog, m[i].type, m[i].c, m[i].intro);
    }

    fclose(fp);

    printf("=> 저장됨!\n");
}

int loadData(Movie *m){
	int count = 0;
	FILE *fp;
	
	fp = fopen("movie.txt", "rw");
	int i;
	for(; i<100; i++){
		fscanf(fp,"%s",m->name);
    		if(feof(fp)) break;
   		fscanf(fp,"%s",m->gamdog);
    		fscanf(fp,"%s",m->type);
		fscanf(fp,"%d",&m->c);
		fscanf(fp,"%s",m->intro);

	}
	
	fclose(fp);

	printf("=> 로딩 성공!\n");
        return count;
}

void searchMovie(Movie *m, int count) {
	int* scnt = 0;
	char search[100];

	printf("검색할 영화제목은? ");
	getchar();
	fgets(search, 100, stdin);
	search[strlen(search) - 1] = '\0';

	printf("==================================\n");
	for(int i=0; i<count; i++) {
		if(m[i].c == -1) continue;
		if(strstr(m[i].name, search)) {
			printf("%2d", i+1);
			readMovie(m[i]);
			scnt++;
		}
	}
	if(scnt == 0) printf("=> 검색된 데이터 없음!");
	printf("\n");
}
