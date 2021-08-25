#include <stdio.h>

int main(){
    int n[2] = {};
    scanf("%d %d",&n[0],&n[1]);
    printf("A + B = %d\n",n[0]+n[1]);
    printf("A - B = %d\n",n[0]-n[1]);
    printf("A x B = %d\n",n[0]*n[1]);
    printf("A / B = %d\n",n[0]/n[1]);
}
