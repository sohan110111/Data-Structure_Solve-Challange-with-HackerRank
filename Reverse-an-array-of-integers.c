#include <stdio.h>

int main() {
    
    int length;
    scanf("%d", &length);
    int array[length];
    for (int i = 0; i < length; i++) {
        scanf("%d", &array[i]);
    }
    
    for(int i = length - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    
    return 0;
}
