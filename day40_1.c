#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
     int a[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    int maxLen = n < m ? n : m;
    int temp[maxLen]; 
    for (int d = 0; d < n + m - 1; d++) {
        int len = 0;

        int i = (d < n) ? d : (n - 1);
        int j = d - i;
        while (i >= 0 && j < m) {
            temp[len++] = a[i][j];
            i--;
            j++;
        }
        if (d % 2 == 1) {
            for (int k = len - 1; k >= 0; k--)
                printf("%d ", temp[k]);
        } else {
            for (int k = 0; k < len; k++)
                printf("%d ", temp[k]);
        }
    }

    return 0;
}
