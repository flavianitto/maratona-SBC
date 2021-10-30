#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, d, m;
    int temp, aux=0;
    cin >> t >> d >> m;
    vector<int> vet;
    vet.push_back(0);
    for(int i=0; i<m; i++) {
        cin >> temp;
        if(temp < d)
            vet.push_back(temp);
    }
    vet.push_back(d);

    for(int i=m+1; i>0; i--) {
        temp = vet[i]-vet[i-1];
        if(temp >= t) {
            aux++;
        }
    }

    if(aux!=0)
        printf("Y");
    else 
        printf("N");
    return 0;
}