// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int sum(int n){
if (n==1){
    return 1;
}
    else{
        return n + sum(n-1);
    }
}


int main() {
 int n=3;
    printf("Output:%d",sum(n));
    return 0;
}
