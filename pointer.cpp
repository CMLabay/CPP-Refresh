#include <stdio.h>

// You have to complete the function void update(int *a,int *b), which reads two integers as argument, 
// and sets  with the sum of them, and  with the absolute difference of them.

void update(int *a,int *b) {
    int sum = *a + *b; 
    int dif = (*a - *b) > 0 ? (*a - *b) : -(*a - *b);
    *a = sum;
    *b = dif;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
