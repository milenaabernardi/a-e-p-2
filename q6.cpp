#include <iostream>
#include <vector>
using namespace std;

void ordena(vector<int> &vetor, int tamanho);
void trocar(int &a, int &b);

int main(){
    int tamanho;
    cout << "Insira o tamanho do vetor: ";
    cin >> tamanho;
    vector<int> vetor(tamanho);
    for(int i = 0; i < tamanho; i++){
        cout << "Insira o " << i + 1 << " termo: ";
        cin >> vetor[i];
    }
    ordena(vetor, tamanho);
}
void ordena(vector<int> &vetor, int tamanho){
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                trocar(vetor[j], vetor[j + 1]);
            }
        }
    }
    cout << "Vetor ordenado: ";
    for(int i = 0; i < tamanho; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;
}
void trocar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}