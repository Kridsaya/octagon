#include<stdio.h>

void octagon(int octagonSize)
{
    for (int r = 0; r < octagonSize; r++)
    {
        for (int s = 0; s <= octagonSize - r; s++) {
            printf(" ");
        }

        for (int i = 0; i < octagonSize; i++) {
            if (r == 0) {
                printf("* ");
            }
            else if (r > 0 && octagonSize == 2) {
                printf("*");
                for (int s = 0; s < (octagonSize * 2 - 3) + r * 2; s++) {
                    printf(" ");
                }
            }
            else if (r > 0) {
                if (i == 0 || i == octagonSize - 1) {
                    printf("*");
                }
                else {
                    for (int s = 0; s < (octagonSize * 2 - 3) + r * 2; s++) {
                        printf(" ");
                    }
                    i = octagonSize - 2;
                }
            }
        }
        printf("\n");
    }

    for (int r = 0; r < octagonSize; r++)
    {
        for (int s = 0; s <= octagonSize * 4 - 3; s++) {
            if (s == 0 || s == octagonSize * 4 - 3) {
                printf(" *");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    for (int r = 0; r < octagonSize; r++)
    {
        for (int s = 0; s <= r + 1; s++) {
            printf(" ");
        }

        for (int i = 0; i < octagonSize; i++) {
            if (r == octagonSize - 1) {
                printf("* ");
            }
            else if (r == 0 && octagonSize == 2) {
                printf("*");
                for (int s = 0; s < (octagonSize * 4 - 5) - r * 2; s++) {
                    printf(" ");
                }
            }
            else if (r >= 0) {
                if (i == 0 || i == octagonSize - 1) {
                    printf("*");
                }
                else {
                    for (int s = 0; s < (octagonSize * 4 - 5) - r * 2; s++) {
                        printf(" ");
                    }
                    i = octagonSize - 2;
                }
            }
        }
        printf("\n");
    }
}

int main()
{
    int octagonSize;
    printf(" Enter number for Octagon size : ");
    scanf_s("%d", &octagonSize);
    octagon(octagonSize);
    return 0;
}