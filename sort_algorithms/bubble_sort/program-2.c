//implement bubble sort in c program ascending order

#include <stdio.h>

void bubble_sort(int ara[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(ara[j] < ara[j + 1]){
                temp = ara[j];
                ara[j] = ara[j + 1];
                ara[j + 1] = temp;
            }
        }
    }
    for(int k = 0; k < n; k++){
        printf("%d ", ara[k]);
    }
}

int main() {
    int ara[] = {12, 3, 1, 8, 9, 7};
    int length = sizeof(ara) / sizeof(ara[0]);
    bubble_sort(ara, length);

return 0;
}

