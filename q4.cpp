#include <iostream>
using namespace std;

bool validarSenha(const string senha) {
    if (senha.length() < 8) {
        return false;     
    }
    bool temMaiuscula = false;
    bool temMinuscula = false;
    bool temNumero = false;

    for (int i = 0; i < senha.length(); i++) {
        if (senha[i] >= 'A' && senha[i] <= 'Z') {
            temMaiuscula = true;
        } else if (senha[i] >= 'a' && senha[i] <= 'z') {
            temMinuscula = true;
        } else if (senha[i] >= '0' && senha[i] <= '9') {
            temNumero = true;
        }
    }
    return temMaiuscula && temMinuscula && temNumero;
}

int main() {
    string senha;
    do{
        cout << "Digite a senha: ";
        cin >> senha;

        if (validarSenha(senha)) {
            cout << "A senha eh valida." << endl;
        } else {
            cout << "A senha nao eh valida." << endl;
        }
    }while((validarSenha(senha)==false));
    return 0;
}