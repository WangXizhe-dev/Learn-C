#include <stdio.h>
#include <stdlib.h>

int input(int **p) {
    int cap = 4;
    int i = 0;
    int x;
    int *a = (int *)malloc(cap * sizeof(int));
    if (a == NULL) return -1;

    printf("请输入数字，输入 -1 结束：\n");
    while (scanf("%d", &x) == 1 && x != -1) {
        if (i == cap) {
            cap *= 2;
            int *tmp = (int *)realloc(a, cap * sizeof(int));
            if (tmp == NULL) {
                free(a);
                return -1;
            }
            a = tmp;
        }
        *(a + i) = x;
        i++;
    }

    *p = a;          // 回传最终地址（关键修复）
    return i;        // 返回元素个数
}

int sum(int *p, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += *(p + i);
    return s;
}

int main(void) {
    int *arr = NULL;
    int len = input(&arr);
    if (len < 0) {
        printf("内存分配失败\n");
        return 1;
    }
    printf("%d\n", sum(arr, len));
    free(arr);       // 别忘了释放
    return 0;
}