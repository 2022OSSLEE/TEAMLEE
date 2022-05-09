#include <stdio.h>
#include <string.h>
#include "movie.h"
#include "manager.h"

int main(void){ 
    Movie mlist[100];
    int curcount=0;
    int count = 0, menu; 

    while(1) {
        menu = selectMenu();
        if(menu == 0) break;
	else if(menu == 1) listMovie(mlist,curcount); 
        else if (menu == 2) count+=createMovie(&mlist[curcount++]); 
        else if (menu == 3) {
            int no = selectDataNo(mlist, curcount);
            if(no == 0){
                printf("=>취소됨!");
                continue;
            }
            updateMovie(&mlist[no-1]);
        }
        else if (menu == 4) {
            int no = selectDataNo(mlist, curcount);
            if(no == 0){
                printf("=>취소됨!");
                continue;
            }
            int deleteok;
            printf("정말로 삭제하시겠습니까?(삭제:1)");
            scanf("%d", &deleteok);
            if(deleteok == 1) {
                if(deleteMovie(&mlist[no-1])) count --;       
            } 
	}

	printf("\n종료됨!\n");
   	return 0;
    }
}
