#include <stdio.h>
#define N 5
int q[N], f=0, r=-1; n=0;
void ins(int x) {
    if(n==N) {
        printf("Queue is full\n");
        return;}
    r=(r+1)%N;
    q[r]=x;
    n++;
}
void del() {
    if(n==0) {
        printf("Queue is empty\n");
        return;}
    f=(f+1)%N;
    n--;
}
int main(){
    ins(10);
    ins(20);
    ins(30);
    ins(40);
    del();
    del();
    ins(50);
    ins(60);
    for(int i=0;i<n;i++) printf("%d ",q[(f+i)%N]);
}