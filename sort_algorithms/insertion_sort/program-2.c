//insertion sort in c program ascending order...

#include <stdio.h>

void insertion_sort(int ara[], int n){
    int i, j, item;
    for(i = 1; i < n; i++){
        item = ara[i];

        j = i - 1;
        while(j >= 0 && ara[j] > item){
            ara[j + 1] = ara[j];
            j = j - 1;
        }
        ara[j + 1] =item;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", ara[i]);
    }
}

int main(){
    int ara[] = {12, 7, 2, 3, 14, 1};
    int length = sizeof(ara) / sizeof(ara[0]);
    insertion_sort(ara, length);

return 0;
}

