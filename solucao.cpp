#include <bits/stdc++.h>

using namespace std;

int main() {
int q, n, temp, soma=0, andar, novosmoradores;
vector<int> andares;
vector<int> andaresIndividual;
scanf("%d %d", &n, &q);
for(int i=0; i<n; i++) {
    scanf("%d", &temp);
    soma += temp;
    andares.push_back(soma);
    andaresIndividual.push_back(temp);
}
for(int i=0; i<q; i++) {
    scanf("%d", &temp);
    if( temp == 0) {
        int diferenca;
        scanf("%d %d", &andar, &novosmoradores);
        diferenca = novosmoradores - andaresIndividual[andar-1];
        andaresIndividual[andar-1] = novosmoradores;
        for(int j=andar-1; j<n; j++)
            andares[j] += diferenca;
    }
    else {
        scanf("%d", &temp);
        printf("%d\n", andares[temp-1]);
    }
}
return 0;
}
