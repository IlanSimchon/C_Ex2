#include <stdio.h>
#include "my_mat.h"
#define ROW 10
#define COL 10

int main() {
    char choice;
    do {
        scanf("%c" ,&choice);
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
                shortestPath();
                break;
            }
        }
    }
    while (choice != 'D');
}
