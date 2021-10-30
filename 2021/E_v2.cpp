#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    scanf("%d", &n);
    deque<int> dir;
    deque<int> esq;
    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        if(b) dir.push_back(a);
        else esq.push_back(a);
    }
    int time, sentido, mudou=0, aux;
    if(dir.size()==0) sentido = 0;
    else if(esq.size()==0) sentido =1;
    else if(dir[0]<esq[0]) sentido = 1;
    else sentido =0;
    a=0;
    b=0;
    if(sentido) time = dir.front();
    else time = esq.front();
    while(dir.size()>0 || esq.size()>0){
        aux = sentido;
        if(sentido){
            if(time>dir.front() && mudou) time = time +10;
            else time = dir.front()+10;
            dir.pop_front();
            if(dir.size()==0) sentido = 0;
            else if(dir.front()>time){
                sentido = -1;
            } 
        }
        else{
            if(time>esq.front() && mudou) time = time + 10;
            else time = esq.front()+10;
            esq.pop_front();
            if(esq.size()==0) sentido = 1;
            else if(esq.front()>time){
                sentido = -1;
            }
        }

        if(sentido == -1){
            if(dir.size()==0) sentido = 0;
            else if(esq.size()==0) sentido = 1;
            if (dir[a]<esq[b]) sentido =1;
            else sentido = 0;
        }
        if(aux==sentido) mudou = 0;
        else mudou = 1;
    }
    cout<<time;

    return 0;
}