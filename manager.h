#include <stdio.h>

int selectMenu();
void listMovie(Movie *m,int count);
int selectDataNo(Movie *m, int count);

void saveData(Movie *m[], int count);
int loadData(Movie *m);
void searchMovie(Movie *m[], int count);
