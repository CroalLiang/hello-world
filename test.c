#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("欢迎来到猜数字游戏！\n");
    printf("我已经想好了一个 1 到 100 之间的数字，你能猜出来吗？\n");

    do {
        printf("请输入你的猜测：");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("太大了！\n");
        } else if (guess < number) {
            printf("太小了！\n");
        } else {
            printf("恭喜你！你猜对了！\n");
            printf("你总共猜了 %d 次。\n", attempts);
        }
    } while (guess != number);

    return 0;
}