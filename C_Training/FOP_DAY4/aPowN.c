/*When the inventor of the game showed the game to the emperor of India, the emperor was so impressed by the new game, that he said to the man "Name your reward!" The man responded, "Oh emperor, my wishes are simple. I only wish for this. Give me one grain of rice for the first square of the chessboard, 2^2 for the next square, 3^3 for the next, 4^4 for the next, and so on for all 64 squares". The emperor agreed, amazed that the man had asked for such a small reward. After a week, his treasurer came back and informed him that the reward would add up to an astronomical sum, far greater than all the rice that could conceivably be produced in many many centuries. The Emperor wanted to check it for himself. Can you help the Emperor to write a program to compute a^n (a power n) using recursion?



Input Format

The input consists of two integers a and n.



Output Format

Refer to sample output.



Sample Input 1

2

8*/
#include <stdio.h>

long long power(int a, int n) {
    if (n == 0)
        return 1;
    else
        return a * power(a, n - 1);
}

int main() {
    int a, n;
    scanf("%d", &a);
    scanf("%d", &n);

    printf("The value of %d power %d is %lld", a, n, power(a, n));

    return 0;
}
