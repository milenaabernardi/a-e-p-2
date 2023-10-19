#include <iostream>
#include <cmath>
using namespace std;
float composto(float capital, float taxa, int anos);

int main(){
    float capital, taxa;
    int anos;
    cout << "Insira o dinheiro investido: ";
    cin >> capital;
    cout << "Insira a taxa de juros em porcentagem:  ";
    cin >> taxa;
    cout << "Insira a quantidade de anos: ";
    cin >> anos;
    cout << "O resultado do investimento foi: " << composto(capital,taxa,anos) << endl;
}

float composto(float capital, float taxa, int anos){
    float montante;
    montante = capital * pow((taxa/100+1),anos);
    return montante; 
}