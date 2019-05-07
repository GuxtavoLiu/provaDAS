#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;

int main () // metodo main
{
  int opcao;
  int contadorPessoa = 0;
  int contadorAcervo = 0;
  int var = 0;



  do{// Se controle for igual a sim ele cadastra um novo produto se não ele lista os produtos e sai do programa
    menu();
    cin >> opcao;
    cout << "" << endl;
    if(opcao == 1){
      cadastrarPessoas();
      contadorPessoa++;
    }else if( opcao == 2){
      cadastrarAcervo();
      contadorAcervo++;
    }else if(opcao == 3){
      cout << "Digite o id do cliente: ";
      cin >> var;
      editarPessoa(var);
    }else if(opcao == 4){
      cout << "Digite o id do acervo: ";
      cin >> var;
      editarAcervo(var);
    }else if(opcao == 5){
      cout << "Digite o id do cliente: ";
      cin >> var;
      excluirPessoa(var);
    }else if(opcao == 6){
      cout << "Digite o id do acervo: ";
      cin >> var;
      excluirAcervo(var);
    }else if(opcao == 7){
      imprimirPessoa();
    }else if(opcao == 8){
      imprimirAcervo();
    }else if(opcao == 10){
      int idCliente, idAcervo;

      imprimirPessoa();
      cout << "Id do cliente que deseja locar: ";
      cin >> idCliente;

      imprimirAcervo();
      cout << "Id do acervo que deseja locar: ";
      cin >> idAcervo;
      realizarLocacao(idCliente, idAcervo);
    }else if(opcao == 11){
      imprimirLocacao();
    }
  } while (opcao != 0);
  cout << "Saindo ...." << endl;

  return 0;
}
