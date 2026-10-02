#include <stdio.h>
int q[10], f=0, r=-1;
void ins(int x) {q[++r]=x;}
void del() {f++;}
int main(){
    ins(10);
    ins(20);
    ins(30);
    del();
    del();
    ins(40);
    for(int i=f;i<=r;i++) printf("%d ",q[i]);
}