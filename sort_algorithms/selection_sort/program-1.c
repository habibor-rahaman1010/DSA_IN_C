//selection sort implement in c program...ascending order...

#include <stdio.h>

void selection_sort(int ara[], int length){
    int min_index, temp;
    for(int i = 0; i < length - 1; i++){
        min_index = i;
        for(int j = i + 1; j < length; j++){
            if(ara[j] < ara[min_index]){
                min_index = j;
            }
        }
        if(min_index != i){
            temp = ara[i];
            ara[i] = ara[min_index];
            ara[min_index] = temp;
        }
    }
    for(int i = 0; i < length; i++){
        printf("%d ", ara[i]);
    }
}

int main() {
    int ara[] = {12, 34, 32, 1, 5, 6};
    int length = sizeof(ara) / sizeof(ara[0]);
    selection_sort(ara, length);

return 0;
}
