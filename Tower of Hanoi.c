
#include <stdio.h>
void TOH(int n,char A,char B,char C){
    if(n==1){ printf("Move %c -> %c\n",A,C); return;}
    TOH(n-1,A,C,B); printf("Move %c -> %c\n",A,C); TOH(n-1,B,A,C);
}
int main(){ TOH(3,'A','B','C'); }
