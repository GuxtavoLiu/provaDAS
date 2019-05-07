#include <iostream>
#include <list>
#include <iterator>
#include <string>


using namespace std;

struct locacao_t{
  int idLocacao;
  int idAcervo;
  int idCliente;
  string nomeCliente;
  string nomeAcervo;

};

list<locacao_t> #include <iostream>
#include <list>
#include <iterator>
#include <string>


using namespace std;

struct locacao_t{
  int idLocacao;
  int idAcervo;
  int idCliente;
  string nomeCliente;
  string nomeAcervo;

};

list<locacao_t> listaLocacao;

void realizarLocacao(int idCliente, int idAcervo){
  locacao_t locacao;
  list<locacao_t>:: iterator l;
  l = listaLocacao.begin();

  locacao.idLocacao = (*l).idLocacao +1;

  list<pessoa_t>:: iterator p;
  list<acervo_t>:: iterator a;

  p = listaDePessoas.begin();
  a = listaAcervo.begin();

  while(p != listaDePessoas.end()){
    if((*p).codigo == idCliente){
      locacao.nomeCliente = (*p).nome;
    }
    p++;
  }
  while(a != listaAcervo.end()){
    if((*a).codigo == idAcervo){
      locacao.nomeAcervo = (*a).titulo;
      (*a).qtde = (*a).qtde - 1;
    }
    a++;
  }




  listaLocacao.push_back(locacao);
}
void imprimirLocacao(){
  list<locacao_t>::iterator p;

  p = listaLocacao.begin();

  while(p != listaLocacao.end()){
    cout << "Lista de Locação"<< endl;
    cout << "Codigo de Locação: " << (*p).idLocacao<< endl;
    cout << "Nome cliente: " << (*p).nomeCliente << endl;
    cout << "Nome Acervo: " << (*p).nomeAcervo << endl;
    cout << "------------" << endl;
    cout << " "<< endl;
    p++;
  }
}
listaLocacao;

void realizarLocacao(int idCliente, int idAcervo){
  locacao_t locacao;
  list<locacao_t>:: iterator l;
  l = listaLocacao.begin();

  locacao.idLocacao = (*l).idLocacao +1;

  list<pessoa_t>:: iterator p;
  list<acervo_t>:: iterator a;

  p = listaDePessoas.begin();
  a = listaAcervo.begin();

  while(p != listaDePessoas.end()){
    if((*p).codigo == idCliente){
      locacao.nomeCliente = (*p).nome;
    }
    p++;
  }
  while(a != listaAcervo.end()){
    if((*a).codigo == idAcervo){
      locacao.nomeAcervo = (*a).titulo;
      (*a).qtde = (*a).qtde - 1;
    }
    a++;
  }




  listaLocacao.push_back(locacao);
}
void imprimirLocacao(){
  list<locacao_t>::iterator p;

  p = listaLocacao.begin();

  while(p != listaLocacao.end()){
    cout << "Lista de Locação"<< endl;
    cout << "Codigo de Locação: " << (*p).idLocacao<< endl;
    cout << "Nome cliente: " << (*p).nomeCliente << endl;
    cout << "Nome Acervo: " << (*p).nomeAcervo << endl;
    cout << "------------" << endl;
    cout << " "<< endl;
    p++;
  }
}
