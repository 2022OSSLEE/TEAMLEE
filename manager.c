#include. "manager.h"

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

void listMovie(Movie *m,int count){

    printf("\nNo. Name          director        장르     제작국가        한줄평\n");
    printf("================================\n");
    for(int i=0; i<count; i++){
        if( m[i].c == -1 ) continue;
        printf("%2d.", i+1);
        readMovie(&m[i]);
    }
    printf("\n");
}#include. "manager.h"

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

void listMovie(Movie *m,int count){

    printf("\nNo. Name          director        장르     제작국가        한줄평\n");
    printf("================================\n");
    for(int i=0; i<count; i++){
        if( m[i].c == -1 ) continue;
        printf("%2d.", i+1);
        readMovie(&m[i]);
    }
    printf("\n");
}#include. "manager.h"

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

void listMovie(Movie *m,int count){

    printf("\nNo. Name          director        장르     제작국가        한줄평\n");
    printf("================================\n");
    for(int i=0; i<count; i++){
        if( m[i].c == -1 ) continue;
        printf("%2d.", i+1);
        readMovie(&m[i]);
    }
    printf("\n");
}
