#include <iostream>
using namespace std;

bool bissexto(int ano){
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
        return true;
    } else {
        return false;
    }
}

int main(){
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;

    if (bissexto(ano)){
        cout << ano << " e um ano bissexto." << endl;
    } else {
        cout << ano << " nao e um ano bissexto." << endl;
    }

    return 0;
}