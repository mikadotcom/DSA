#include <stdio.h>
int q[10], f=5, r=4;
void insf(int x) {q[--f]=x;}
void insr(int x) {q[++r]=x;}
void delf() {f++;}
void delr() {r--;}
int main(){
    insf(10);
    insf(20);
    insr(30);
    delf();
    delr();
    for(int i=f;i<=r;i++) printf("%d ",q[i]);
}