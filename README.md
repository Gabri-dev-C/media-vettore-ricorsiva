![C++](https://img.shields.io/badge/C++-Recursion-blue)
![License](https://img.shields.io/badge/License-MIT-green)
![Difficulty](https://img.shields.io/badge/Difficulty-Beginner-yellow)
![Learning](https://img.shields.io/badge/Learning-C++-orange)

# Recursive array averange

Implementazione del calcolo della media degli elementi di un vettore di interi
con ricorsione per calcolo della somma e divisione.

## Componenti della ricorsione
Somma:
1. **Condizioni di terminazione:** `if(n <= 0)`
2. **Istruzione di terminazione:** `return 0;`
3. **Passo di avvicinamento:** `n-1`
4. **Chiamata ricorsiva:** `return v[n-1] + somma_vettore(v, n-1)`

Divisione:
1. **Condizioni di terminazione:** `iif(dividendo < divisore)`
2. **Istruzione di terminazione:** `return 0;`
3. **Passo di avvicinamento:** `dividendo-divisore`
4. **Chiamata ricorsiva:** `return 1 + divisione_intera(dividendo-divisore, divisore)`

## Nota sulla Media
Questa implementazione calcola la **parte intera** della media 
usando divisione intera ricorsiva.

Esempio: [1,2,3,4,10] → somma=20, media=4 (non 4.0 o 4.5)

Per media con decimali, usare divisione floating-point.

## Utilizzo
1. Crea in Code::Blocks un nuovo progetto.
2. Copia il codice sorgente.
3. Compila ed esegui.

## Codice sorgente
```cpp
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
```

## Output
![Risultato della media](immagini/cattura_1.PNG)

## Autore
Gabriele Henriet - [GitHub](https://github.com/Gabri-dev-C)

## Licenza
MIT License
