#include <iostream>

int somma_vettore(int v[], int n);
int divisione_intera(int dividendo, int divisore);

int main(){
    int lung_vett = 20;
    int vett[lung_vett] = {33,5,15,32,12,19,4,20,13,7,11,9,24,36,22,31,29,18,25,31};

    std::cout << std::endl;
    std::cout << "\tLa media del vettore e': ";
    std::cout << divisione_intera(somma_vettore(vett, lung_vett), lung_vett);
    std::cout << std::endl;

    return 0;
}

int somma_vettore(int v[], int n){
    if(n <= 0)                                  // condizione di terminazione della ricorsione
        return 0;                               // istruzione di terminazione della ricorsione
    else
        // calcoli + chiamata ricorsiva + passo di avvicinamento
        return v[n-1] + somma_vettore(v, n-1);
}

int divisione_intera(int dividendo, int divisore){
    if(dividendo < divisore)                    // condizione di terminazione della ricorsione
        return 0;                               // istruzione di terminazione della ricorsione
    else
        // calcoli + chiamata ricorsiva + passo di avvicinamento
        return 1 + divisione_intera(dividendo-divisore, divisore);
}
