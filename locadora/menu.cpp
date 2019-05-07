#include <iostream>
#include <list>
#include <iterator>
#include <string>


using namespace std;

void menu(){
  int opcao = 0;

  cout << "|=================================================|" << endl;
  cout << "|  Digite \"1\" para acessar o menu de Clientes;  |" << endl;
  cout << "|  Digite \"2\" para acessar o menu de Acervo;    |" << endl;
  cout << "|  Digite \"3\" para acessar o menu de Locação;   |" << endl;
  cout << "|=================================================|" << endl;
  cout << "Digite sua opção : " << endl;
  cin >> opcao;


  if(opcao == 1){
    cout << "" << endl;
    cout << "|=================================================|" << endl;
    cout << "|  Digite \"1\" para cadastrar clientes;          |" << endl;
    cout << "|  Digite \"3\" para Editar cliente;              |" << endl;
    cout << "|  Digite \"5\" para excluir cliente;             |" << endl;
    cout << "|  Digite \"7\" para imprimir clientes;           |" << endl;
    cout << "|  Digite \"0\" para sair;                        |" << endl;
    cout << "|=================================================|" << endl;
    cout << "Digite sua opção : " << endl;
  } else if(opcao == 2){
    cout << "" << endl;
    cout << "|=================================================|" << endl;
    cout << "|  Digite \"2\" para cadastrar acervo;            |" << endl;
    cout << "|  Digite \"4\" para Editar acervo;               |" << endl;
    cout << "|  Digite \"6\" para excluir acervo;              |" << endl;
    cout << "|  Digite \"8\" para imprimir acervo;             |" << endl;
    cout << "|  Digite \"0\" para sair;                        |" << endl;
    cout << "|=================================================|" << endl;
    cout << "Digite sua opção : " << endl;

  } else if (opcao == 3){
    cout << "" << endl;
    cout << "|=================================================|" << endl;
    cout << "|  Digite \"10\" para realizar locação;           |" << endl;
    cout << "|  Digite \"11\" para imprimir itens locados      |" << endl;
    cout << "|=================================================|" << endl;
    cout << "Digite uma opção: ";
  }


}
