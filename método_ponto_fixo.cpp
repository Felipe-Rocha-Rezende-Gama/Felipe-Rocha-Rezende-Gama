#include <iostream>
#include <locale>
#include <vector>
#include <deque>
#include <cmath>
#include <cctype>

using namespace std;

/*Funções diversas:*/
// 1 - Função que lê a equação e guarda em um vetor
vector<string> leitura_equacao(string eq);
// 2 - transforma um caracter para um inteiro
int ctoi(char a){
  int inteiro_a = a - '0';
}

int main(){
  setlocale(LC_ALL, "portuguese");

  string equacao;
  vector<string> vector_equacao;
  cout << "Digite a expressão: ";
  getline(cin >> ws, equacao);

  vector_equacao = leitura_equacao();
}
