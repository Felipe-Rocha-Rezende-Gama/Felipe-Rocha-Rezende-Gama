#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <locale>
#include <cctype>

using namespace std;

queue<char> guardar_equacao(string eq);
void analise_equacao(queue<char> fila);

int main(){
  string equacao;

  cout << "Digite a equação: ";
  getline(cin >> ws, equacao);
  
  return 0;
}

queue<char> guardar_equacao(string eq){
  queue<char> fila_equacao1;
  int eq_tamanho = eq.length();
  for(int i = 0; i < eq_tamanho; i++){
    fila_equacao1.push(eq[i]);
  }

  return fila_equacao1;
}


void analise_equacao(queue<char> fila){
  stack<char> pilha_signals, pilha_x, pilha_especialsFunctions;
  while(!fila.empty()){
    
    if(isalpha(fila.front())){
      if(fila.front() == 'x'){
        pilha_x.push(fila.front())
      }

      else if(fila.front() == 'c' or fila.front() == 's' or fila.front() == 't' or fila.front() == 'a' or fila.front() == 'l' or fila.front() == 'e'){
        pilha_especialsFunctions.push(fila.front());
      }

      else if(fila.front() == 'o' or fila.front() == 'i' or fila.front() == 'g' or or fila.front() == 'r')
    }

    else if(isdigit(fila.front())){
    
    }

    else if(isalnum(!fila.front())){
      if(fila.front() == '+' or fila.front() = '-' or fila.front() = '*' or fila.front() = '/' or fila.front() = '//' or fila.front() = '%'){
        pilha_signals.push(fila.front());
      }

      else{

      }
    }

    fila.pop();
  }
}
