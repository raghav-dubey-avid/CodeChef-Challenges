#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,x;
    printf("%d",N); 
    int l = 1;
    int r = N;
    while (l != r) {
        int y;
        scanf("%d",y);
        int mid = (l + r + 1) / 2;

        char response[3];
        scanf("%s", response);
        if (mid == x){
            printf("E\n");
            fflush(stdout);
        }

        else if(mid < x){
            printf("L\n");
            fflush(stdout);
            r = mid - 1;
        }

        else{ 
             printf("G\n");
            fflush(stdout);
            l = mid;
        }
    }

}