#include <iostream>
#include "Fila.h"
using namespace std;
int main(){


       Fila f;

       int opc, valor;
       do {
          cout<<"1-INSERE"<< endl;
          cout<<"2-REMOVE"<< endl;
          cout<<"3-PRIMEIRO"<< endl;
          cout<<"4-MOSTRA A FILA"<< endl;
          cout<<"5-FIM"<< endl;
          cout<<"SELECIONE: ";
          cin>>opc;
      switch (opc){
           case 1:
             cout<< "Valor: ";
             cin>>valor;
             if(!f.insere(valor))
                cout<< "fila vazia...";
            break;

          case 2:
            if(f.filaVazia())
               cout<< "fila vazia...";
            else
              cout<< "removido" << f.remove();
            break;
         case 3:
           if(f.filaVazia())
             cout<< "fila vazia..."<<endl;
          else
             cout<< "primeiro" <<f.primeiro();
          break;
       case 4:
         cout<< "Elementos da fila"<<endl;
         if(f.filaVazia())
            cout<< "fila vazia"<<endl;
         else f.mostra();
         break;
      }
    }while (opc!=5);
return 0;
}



