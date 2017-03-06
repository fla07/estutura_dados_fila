#ifndef FILA_LIG_H_INCLUDED
#define FILA_LIG_H_INCLUDED

using namespace std;

struct Node
{
    int info;
    Node *prox;
};

struct Fila
{
    Node *inicio;
    Node *fim;

    Fila()
    {
        inicio = NULL;
        fim = NULL;
    }

    bool filaVazia()
    {
        return inicio==NULL;
    }

    bool insere (int x)
    {
        bool t = false;
        Node *aux = new Node;
        if(aux!=NULL)
        {
            aux->info=x;
            aux->prox=NULL;
            t=true;
            if (inicio==NULL)
            {
                inicio = aux;
            }
            else
            {
                fim->prox = aux;
            }
            fim = aux;
        }
        return t;
    }
    int primeiro(){
    return inicio->info;
    }
    int remove(){
    int t=inicio->info;
       Node*aux =inicio;
       inicio= inicio->prox;
    if(inicio == NULL)
      fim =NULL;
      delete aux;
      return t;
    }
    void mostra(){
    Node *aux =inicio;
      while (aux){
        cout<< aux->info << endl;
        aux=aux->prox;
       }
    }

};

#endif // FILA_LIG_H_INCLUDED
