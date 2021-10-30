#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, menor=-1, a, b;
    scanf("%d %d", &n, &m);
    char palavra[n+1];
    char S[m+1][10001];
    scanf("%s", palavra);
    for(int i=0; i<m; i++){
        scanf("%s", S[i]);
    }
    for(int k=0; k<m; k++){
        for(int j=0; j<n; j++){
            b=0;
            a=j;
            while(S[k][b] != '\0' && S[k][b] == palavra[a]){
                a++;
                b++;
                if(a==n) a=0;
            }
            if(S[k][b] == '\0'){
                if ((menor ==-1 ||menor>b)&&b<n) menor = b;
                break;
            }
        }
    }
    if(menor == -1) printf("0\n");
    else printf("%d\n", menor);

    return 0;
}