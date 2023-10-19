#include <iostream>
using namespace std;

int somaN(int n){
    int soma = 0;

    for (int i = 1; i <= n; i++){
        soma += i;
    }
    return soma;
}

int main(){
    int n;
    cout << "Digite um numero inteiro positivo: ";
    cin >> n;

    if (n <= 0){
        cout << "Por favor, digite um numero inteiro positivo." << endl;
    } else {
        int resultado = somaN(n);
        cout << "A soma de todos os inteiros positivos menores ou iguais a " << n << " e: " << resultado << endl;
    }
    return 0;
}