#include <iostream>

using namespace std;

#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);cin.tie(NULL);
    int ar[10] = {0,1,2,6,24,120,720,5040,40320,362880};
    int n,c=0,i,n1 = 0,l1;
    cin >> n;
    l1 = n;
    while(l1!=0){
        for(i = 1;  ; i++) if(ar[i] >= l1 or i > 8) break;
         (ar[i] <= l1)? l1-=ar[i] : l1-=ar[i-1];
          c++;
    }
    cout << c << endl;
    return 0;
}
