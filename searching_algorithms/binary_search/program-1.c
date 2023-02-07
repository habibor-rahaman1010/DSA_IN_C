//Binary search implement in c program...

#include <stdio.h>
#include <stdbool.h>

int main() {
    int ara[] = {12, 34, 44, 67, 78, 89, 93, 111, 142, 150};
    int length = sizeof(ara) / sizeof(ara[0]);
    int item = 142;
    int low, hight, mid;
    low = 0;
    hight = length - 1;
    bool flag = false;

    while(low <= hight){
        mid = low + (hight - low) / 2;
        if(ara[mid] == item){
            flag = true;
        }
        if(ara[mid] < item){
            low = mid + 1;
        }
        else{
            hight = mid - 1;
        }
    }
    if(flag == true){
        printf("Yes! item find out at index: %d\n", mid);
    }
    else{
        printf("No! item find out at index: %d\n", -1);
    }

return 0;
}
