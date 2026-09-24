#include <iostream>
#include <cmath>
#include <chrono>

using namespace std;
int main(){

    // int *p = nullptr;
    // int  n = *p;

    auto debut = chrono::steady_clock::now();

    double somme = 0.0;

    for(long long i = 1; i <= 12900000; ++i){
        somme += sin(i) * sqrt(i);
    }
    chrono::duration<double> duree = chrono::steady_clock::now() - debut;
    cout<<"Resultat: "<<somme<<endl;
    cout<<"Temps: "<<duree.count()<<endl;
    // cout<<n<<endl;
    return 0;
}