#include <stdio.h>
int d[10], p[10], n=0;
void ins(int x, int pr) {
    d[n]=x;
    p[n]=pr;}
    void del() {
    if m=0;
    for (int i=1; i<n;i++)
    if (p[i]<p[m]) m=i;
    for (int i=m;i<n-1;i++) {
        d[i]=d[i+1];
        p[i]=p[i+1];}
    n--;}
int main(){
    ins(10,2);
    ins(20,1);
    ins(30,3);
    del();
    for(int i=0; i<n; i++) 
    printf("%d (priority %d)\n", d[i], p[i]);
}
