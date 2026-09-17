# LES TROIS CADENCES
## Calculer la durée d'une image à 72, 90 et 120 hertz, au dixième de milliseconde.

- La fréquence notée f est l'inverse de la période notée t.
    On aura donc:
        f = 1/t => t = 1/f
- Pour convertir en milliseconde on multiplie la periode par 1000.
- Et ensuite on arrondi au dixième c'est à dire deux chiffres après la virgule.
- Puis on soustrait les 8 secondes que prennent les capteurs, la transmission, la composition, et l'affichage, et on renvoie le reste.

`code inline`

```cpp
//bloc de code

#include <iostream>
#include <cmath>

float periodMs(float frequence){

        float period = 1/frequence;

        period = period * 1000;
        period = period - 8;

    return std::round(period * 100.0) / 100.0;

    }

int main (void){
    float f1 = 72, f2 = 90, f3 = 120;

    std::cout<<"Pour 72 hertz on a: " <<periodMs(f1)<<std::endl;
    std::cout<<"Pour 90 hertz on a: " <<periodMs(f2)<<std::endl;
    std::cout<<"Pour 120 hertz on a: " <<periodMs(f3)<<std::endl;
    return 0;
}

```
## Compilation

```bash
g++ -o premier.cpp
.\premier
```
## Sortie attendue

- Pour 72 hertz: 5,89 ms
- Pour 90 hertz: 3,11 ms
- Pour 120 hertz: 0,33 ms

