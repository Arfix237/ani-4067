# MESURER EN DEBUG ET EN RELEASE
## Ecrire une boucle qui fait un calcul lourd et le chronomètre. Contruire en Debug puis en Release

`code inline`

```cpp

#include <iostream>
#include <cmath>
#include <chrono>

using namespace std;
int main(){

    auto debut = chrono::steady_clock::now();

    double somme = 0.0;

    for(long long i = 1; i <= 500'000'000; ++i){
        somme += sin(i) * sqrt(i);
    }
    chrono::duration<double> duree = chrono::steady_clock::now() - debut;
    cout<<"Résultat: "<<somme<<endl;
    cout<<"Temps: "<<duree.count()<<endl;

    return 0;
}

```
## COMPILATION
# En Debug

```bash
jenga build --config Debug
jenga run --config Debug

```
## Résultat

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  ▶  EXECUTION  —  chapitre-2.exe
     C:\Users\GSII\Desktop\VR\chapitre-02\chapitre-2\Build\Bin\Debug-Windows\chapitre-2\chapitre-2.exe
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Resultat: 16436
Temps: 37.3874

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  ◀  FIN D'EXECUTION  —  termine normalement  (37.40s)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━


## COMPILATION
# En Release

```bash
jenga build --config Release
jenga run --config Release

```
# Resultat

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  ▶  EXECUTION  —  chapitre-2.exe
     C:\Users\GSII\Desktop\VR\chapitre-02\chapitre-2\Build\Bin\Release-Windows\chapitre-2\chapitre-2.exe
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Resultat: 16436
Temps: 43.7192

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
  ◀  FIN D'EXECUTION  —  termine normalement  (43.88s)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

- Ce serait la mesure en Release qui nous ferait prendre une mauvaise décision.