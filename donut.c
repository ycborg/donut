#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

#define arrSize 1760

void main() {
    
    float A = 0, B = 0;
    char  b[arrSize];
    float z[arrSize];

    system("cls || clear");

    for(;;) {
        memset(b, 32, arrSize);
        memset(z, 0, arrSize * 4);
        for(float j = 0; j < 6.28; j += 0.07) {
            for(float i = 0; i < 6.28; i += 0.02) {
                float A1 = 1 / (sin(i) * (cos(j) + 2) * sin(A) + sin(j) * cos(A) + 5);
                float B1 = sin(i) * (cos(j) + 2) * cos(A) - sin(j) * sin(A);
                int x = 40 + 30 * A1 * (cos(i) * (cos(j) + 2) * cos(B) - B1 * sin(B));
                int y = 12 + 15 * A1 * (cos(i) * (cos(j) + 2) * sin(B) + B1 * cos(B));
                int A2 = x + 80 * y;
                int B2 = 8 * ((sin(j) * sin(A) - sin(i) * cos(j) * cos(A)) * cos(B) - sin(i) * cos(j) * sin(A) - sin(j) * cos(A) - cos(i) * cos(j) * sin(B));
                if(y > 0 && y < 22 && x > 0 && x < 80 && A1 > z[A2]) {
                    z[A2] = A1;
                    b[A2] = ".,-~:;=!*#$@"[B2 > 0 ? B2 : 0];
                }
            }
        }
        printf("\x1b[H");
        for(int k = 0; k <= arrSize; k++) {
            putchar(k % 80 ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        sleep(0.0166);
    }
}