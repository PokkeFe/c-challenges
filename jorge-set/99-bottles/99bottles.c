#include <stdio.h>

void printText(int num_bottles) {
    if(num_bottles == 0){
        printf("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 99 bottles of beer on the wall...\n");
    }
    else if(num_bottles == 1){
        printf("One bottle of beer on the wall, one bottle of beer.\nTake one down, pass it around. No more bottles of beer on the wall.\n\n");
    } else {
        char* bottle_text = "bottles";
        if(num_bottles == 2) {
            bottle_text = "bottle";
        }
        printf("%d bottles of beer on the wall, %d bottles of beer.\nTake one down, pass it around, %d %s of beer on the wall.\n\n", num_bottles, num_bottles, num_bottles - 1, bottle_text);
    }

}

int main() {
    for(int i = 99; i >= 0; i--) {
        printText(i);
    }
}