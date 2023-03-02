#include <stdlib.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int carry = 0;
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int len = len1 > len2 ? len1 : len2;

    if (len + 1 > size_r) {
        return 0;
    }

    r[len+1] = '\0';
    for (int i = len, j = len1 - 1, k = len2 - 1; i >= 0; i--, j--, k--) {
        int sum = carry;
        if (j >= 0) {
            sum += n1[j] - '0';
        }
        if (k >= 0) {
            sum += n2[k] - '0';
        }
        carry = sum / 10;
        r[i] = '0' + sum % 10;
    }

    if (carry > 0) {
        r[0] = '0' + carry;
        return r;
    } else {
        return r + 1;
    }
}
