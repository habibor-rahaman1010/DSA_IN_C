//linear search algorithm implement in c program...

#include <stdio.h>

int main() {
    int item = 55;
    int ara[] = {12, 23, 45, 67, 87, 43, 55, 62, 49, 100};
    int length = sizeof(ara) / sizeof(ara[0]);

    bool flag = false;
    int index = 0;
    for(int i = 0; i < length; i++){
        if(item == ara[i]){
            flag = true;
            index = i;
            break;
        }
        else{
            index = -1;
        }
    }
    if(flag == true){
        printf("Yes! item find out at index: %d\n", index);
    }
    else{
        printf("No! item find out at index: %d\n", index);
    }

return 0;
}
