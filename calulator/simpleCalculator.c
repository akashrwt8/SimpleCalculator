#include <stdio.h>
#include "Util.h"

int main() {
        int choice;
        do
        {
            printf("Menu :\n");
            printf("1 Adding two numbers\n");
            printf("2 Adding two float numbers\n");
            printf("3 Adding two numbers\n");
            printf("0 Ending program\n");
            printf("Enter a choice : ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:{
                int x, y;
                printf("Enter a number : ");
                scanf("%d", &x);
                printf("Enter a number : ");
                scanf("%d", &y);
                printf("Addition of two number is %d\n", add(x, y));
                break;
            }
            default:
                if (choice != 0)
                {
                    printf("Invalid input\n");
                }
                break;
            }
        } while (choice != 0);
        
    return 0;
}