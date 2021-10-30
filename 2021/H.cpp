#include <bits/stdc++.h>
using namespace std;

struct bloco{
    int num;
    int cor;
};

bool comparar(bloco a, bloco b){
    return a.num < b.num;
}

int main(){
    int n, k, a, b;
    scanf("%d %d", &n, &k);
    vector<bloco> vet;
    vector<bloco> copia;
    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        bloco *nv = new bloco();
        nv->num = a;
        nv->cor = b;
        vet.push_back(*nv);
    }
    copia = vet;
    sort(copia.begin(), copia.end(),comparar);
    int meio = vet.size() / 2, inicio, fim;
    /*
    for(int p=0; p<vet.size(); p++) printf("%d\n", vet[p].num);
    printf("\n////////////////\n");
    for(int p=0; p<vet.size(); p++) printf("%d\n", copia[p].num);
    printf("\n////////////////\n");
    */
    for(int k=0; k<vet.size(); k++){
        inicio=0;
        fim=vet.size()-1;
        meio = (inicio+fim)/2;

        while(fim>inicio){
            
            if(copia[meio].num==vet[k].num) break;
            if(copia[meio].num < vet[k].num){
                inicio = meio+1;
            }
            else{
                fim = meio - 1;
            }
            meio = (inicio+fim)/2;
        }
        
        if(vet[k].cor != vet[meio].cor){
            printf("N\n");
            return 0;
        }

    }
    printf("Y\n");
    return 0;
}