#include<bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int> v0;
    vector<int> v1;

    int n, t, d;
    int time, first, aux;
    int cont=1, cv0=0, cv1=0; //contadores
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> t >> d;
        if(i==0 && d==0)
            first=0;
        else
            first=1;
        
        if(d==0)
            v0.push_back(t);
        else
            v1.push_back(t);
    }
    if(first==0) {
        time=v0[0];
        aux=0;
    }
    if(first==1) {
        time=v1[0];
        aux=1;
    }
    while(cont!=n) {
        if(aux==0) {
            time+=10;
            cv0++;
            cont++;
            if(sizeof(v0) != cv0) {
                while(v0[cv0] < time && cont!=n) {
                    time=v0[cv0]+10;
                    cv0++;
                    cont++;
                    if(sizeof(v0)!=cv0)
                        break;
                }
            }
            aux=1;
        }
        if(aux==1) {
            time+=10;
            cv1++;
            cont++;
            if(sizeof(v0) != cv0) {
                while(v1[cv1] < time && cont!=n) {
                    time=v1[cv1]+10;
                    cv1++;
                    cont++;
                    if(sizeof(v1)!=cv1)
                        break;
                }
            }
            aux=0;             
        }
    }
    printf("%d", time);
    return 0;
}