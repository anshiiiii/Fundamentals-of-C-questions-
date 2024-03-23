/*Lee conducted a word game for his colleagues. The game is everyone should say a word that should not have any repeating characters in it. If a single
character is repeated then the particular person can't continue the game. Lee finds it difficult to disqualify the person from the game since he is not 
able to find the nonrepetitive character for all the words. Help him to find the winner of the game by writing a program to find the first element which 
is non -repetitive i.e that element must not be present anywhere else in the string.



Input Format

The first line of the input consists of a string.



Output Format

The output displays a character that is non-repetitive. If all the characters in an input string are repetitive, then display All characters are repetitive.



Sample Input 0

teeterson 



Sample Output 0

r

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};  //to count the characters in the string

    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

  
    int found = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(count[(int)str[i]] == 1) {
            printf("%c\n", str[i]);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("All the characters are repetitive\n");
    }

    return 0;
}
