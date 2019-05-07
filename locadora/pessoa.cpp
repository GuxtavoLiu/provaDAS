#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;

struct pessoa_t {
  string nome;
  int codigo;
  int idade;

};

list<pessoa_t> listaDePessoas;

void cadastrarPessoas() {
  pessoa_t pessoa;

  list<pessoa_t>::iterator p;

  p = listaDePessoas.begin();

  pessoa.codigo = (*p).codigo + 1;
  cout << "Nome do cliente: ";
  cin >> pessoa.nome;
  cout << "Idade do cliente: ";
  cin >> pessoa.idade;
  cout << " "<< endl;
  cout << "Cliente adicionado com sucesso!" << endl;
  cout << " "<< endl;

  listaDePessoas.push_back(pessoa);
}

void imprimirPessoa(){
  list<pessoa_t>::iterator p;

  p = listaDePessoas.begin();

  while(p != listaDePessoas.end()){
    cout << "|=================================================|" << endl;
    cout << "|  Lista de Clientes                              |" << endl;
    cout << "|  Codigo:                                        |" << (*p).codigo<< endl;
    cout << "|  Nome:                                          |" << (*p).nome << endl;
    cout << "|  Idade:                                         |" << (*p).idade << endl;
    cout << "|=================================================|" << endl;
    cout << " "<< endl;
    p++;
  }
}

void excluirPessoa(int var){
  list<pessoa_t>::iterator p;

  p = listaDePessoas.begin();
  while(p != listaDePessoas.end()){
     if(var == p-> codigo){
       listaDePessoas.erase(p);
       break;
       cout << "Cliente excluido com sucesso!" << endl;
       cout << " "<< endl;
     }

    p++;
  }
}
void editarPessoa(int var){
  list<pessoa_t>::iterator p;

  p = listaDePessoas.begin();
  while(p != listaDePessoas.end()){
    if((*p).codigo == var){
      cout << "Editar nome do cliente: ";
      cin >> (*p).nome;
      cout << "Editar idade do cliente: ";
      cin >> (*p).idade;
      cout << " "<< endl;
      cout << "Cliente editado com sucesso!" << endl;
      cout << " "<< endl;
    }
    p++;

  }
}
