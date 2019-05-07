#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;

struct acervo_t { //acervo
  int codigo;
  string titulo;
  string genero;
  double valorLocacao;
  int qtde;
};

list<acervo_t> listaAcervo; //lista acervo

void cadastrarAcervo(){
  acervo_t acervo;

  list<acervo_t>::iterator p; // percorrer a lista

  p = listaAcervo.begin();

  acervo.codigo = (*p).codigo + 1;

  cout << "Nome do item: ";
  cin >> acervo.titulo;
  cout << "Genero: ";
  cin >> acervo.genero;
  cout << "Preço: ";
  cin >> acervo.valorLocacao;
  cout << "Quantidade: ";
  cin >> acervo.qtde;
  cout << " "<< endl;
  cout << "Item cadastrado com sucesso!"<< endl;
  cout << " "<< endl;

  listaAcervo.push_back(acervo); // salvar itens
}


void imprimirAcervo(){

  list<acervo_t>::iterator p; // define qual sera o index do vetor

  p = listaAcervo.begin();

  while(p != listaAcervo.end()){
    cout << "|=================================================|" << endl;
    cout << "|  Lista Acervo                                   |" << endl;
    cout << "|  Código:                                        |" << (*p).codigo << endl;
    cout << "|  Nome:                                          |" << (*p).titulo << endl;
    cout << "|  Genero:                                        |" << (*p).genero << endl;
    cout << "|  Preço:                                         |" << (*p).valorLocacao << endl;
    cout << "|  Quantidade:                                    |" << (*p).qtde << endl;
    cout << "|  Valor em estoque: R$ " << ((*p).valorLocacao * (*p).qtde) << endl;
    cout << "|=================================================|" << endl;
    p++;
  }

}
void excluirAcervo(int var){
  list<acervo_t>::iterator p;

  p = listaAcervo.begin();
  while(p != listaAcervo.end()){
    if(var == p-> codigo){
      listaAcervo.erase(p);
      break;
      cout << "Item excluido com sucesso!" << endl;
      cout << " "<< endl;
    }

    p++;
  }
}
void editarAcervo(int var){
  list<acervo_t>::iterator p;

  p = listaAcervo.begin();
  while(p != listaAcervo.end()){
    if((*p).codigo == var){
      cout << "Editar titulo: ";
      cin >> (*p).titulo;
      cout << "Editar genero: ";
      cin >> (*p).genero;
      cout << "Editar valor de locação: ";
      cin >> (*p).valorLocacao;
      cout << "Editar quantidade em estoque: ";
      cin >> (*p).qtde;
      cout << " "<< endl;
      cout << "Acervo editado com sucesso!"<<endl;
      cout << " "<< endl;

    }
    p++;

  }
}
