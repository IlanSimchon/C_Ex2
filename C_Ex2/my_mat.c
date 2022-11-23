#include <stdio.h>
#include "my_mat.h"

#define ROW 10
#define COL 10
#define NUM_OF_VER 10

int mat[ROW][COL];
int floydWarshallAlgorithm(int arr[10][10]);
int min(int a,int b);


/* A method that receives from the user the matrix values */

void init_Mat() {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            scanf("%d" ,&mat[i][j]);
        }
    }
}

/* A method that receives the two indexes of the matrix (i and j) from the user
 * and prints True if there is a path from vertex i to vertex j otherwise it prints false */

void isPath() {
    int vertex_1 ,vertex_2;
    scanf("%d %d",&vertex_1,&vertex_2);
    floydWarshallAlgorithm(mat[vertex_1][vertex_2]) ? printf("True") : printf("False");
}

/* A method that returns the minimum value between two numbers */

int min(int a,int b){
    return (a>b) ? b : a ;
}

/* Using floyd-Warshall Algorithm to find the shortest path
 * between every pair of vertices in a given Graph. */

int floydWarshallAlgorithm(int arr[10][10]){
    static int mat_copy[ROW][COL];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j <COL; j++) {
            mat_copy[i][j] = mat[i][j];
        }
    }
    for (int k = 0; k < NUM_OF_VER ; k++) {
        for (int i = 0; i < ROW; i++) {
            for (int j = 0; j < COL; j++) {
                if (min(mat_copy[i][k] + mat_copy[k][j] , mat_copy[i][j]) == mat_copy[i][k] + mat_copy[k][j])
                    mat_copy[i][j] = mat_copy[i][k] + mat_copy[k][j];
            }
        }
    }
    return mat_copy[ROW][COL];
}


/* A method that receives the two indexes of the matrix (i and j) from the user
 * and prints the shortest path from the cells in indexes i and j
 * if the path does not exist the program will print -1 */

void shortestPath() {
    int vertex_1 ,vertex_2;
    scanf("%d %d",&vertex_1,&vertex_2);
    floydWarshallAlgorithm(mat[vertex_1][vertex_2]) ? printf("%d",mat[vertex_1][vertex_2]) : printf("-1");
}

