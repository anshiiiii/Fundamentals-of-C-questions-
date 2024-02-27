/*Rohit likes to play with numbers. He started to frame a matrix called uniformity matrix where he will be using either completely odd numbers or completely even numbers but not both. Write a program to check whether he has framed the matrix in the correct order or not.



Input Format

The input consists of (n*n+1) integers.
The first integer corresponds to the number of rows/columns in the matrix.
The remaining integers correspond to the elements in the matrix.
The elements are read in row-wise order, the first row first, then the second row, and so on.


Output Format

Print Yes if it is a uniformity matrix.
Print No if it is not a uniformity matrix.


Sample Input 

2

4 5

5 4



Sample Output 

No*/
#include <stdio.h>

int main() {
    int n, i, j, odd_count = 0, even_count = 0;
 
    scanf("%d", &n);
    
    int matrix[n][n];
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
     
            if(matrix[i][j] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }
    }
    
    
    if((odd_count == 0 && even_count == n * n) || (even_count == 0 && odd_count == n * n))
        printf("Yes\n");
    else
        printf("No\n");
    
    return 0;
}
