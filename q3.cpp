#include <iostream>
using namespace std;

string funcaoTres(int numero);
int main(){
    int numero;
    cout << "Insira um numero: ";
    cin >> numero;
    cout << "A representacao binaria de " << numero
         << " e " << funcaoTres(numero) << endl;
}

string funcaoTres(int numero){
    if(numero==0){
        return 0;
    }
    
    string binario =" ";

    while(numero>0){
        char bit = '0' + (numero%2);
        binario = bit + binario;
        numero/=2;
    }
    return binario;
}