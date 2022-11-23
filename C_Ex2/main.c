#include <stdio.h>
#include "my_mat.h"
#define ROW 10
#define COL 10

int main() {
    char choice;
    int mat[ROW][COL];
    scanf("%d" ,&choice);
    do {
        int v1,v2 ;
        switch (choice) {
            case 'A': {
                init_Mat();
                break;
            }
            case 'B': {
                isPath();
                break;
            }
            case 'C': {
                scanf("%d %d",&v1,&v2);
                shortestPath(mat,v1,v2);
                break;
            }
            default:
                scanf("%d" ,&choice);
        }
    }
    while (choice != 'D');
}
