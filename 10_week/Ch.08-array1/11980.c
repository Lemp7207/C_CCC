#include <stdio.h>

int main() {
    float weight = 0.0f;
    float all_weight = 0.0f;
    for (int i = 0; i<6; i++) {
        scanf("%f", &weight);
        all_weight += weight;
    }
    printf("%.1f", all_weight / 6);
}