#include <iostream>
#include "agenda.h"
using namespace std;

int main()
{
    agenda *agend = new agenda();
    contato *result;
    string name, tel, ende, relac, aux;
    int res, qtd;
    while(res != 5){
        printf("(1)Insere.\n");
        printf("(2)Busca.\n");
        printf("(3)Remove.\n");
        printf("(4)Lista.\n");
        printf("(5)Fim.\n");
        scanf("%d", &res);
        if(res == 1){
            printf("Digite o nome:");
            cin >> name;
            printf("Digite o telefone:");
            cin >> tel;
            printf("Digite o endereco:");
            cin.ignore();
            getline(cin, ende);
            printf("Digite o relacao:");
            cin >> relac;
            agend->addCont(name, tel, ende, relac);
        }
        else if(res == 2){
            qtd = agend->getLast();
            if(qtd > 0){
                printf("Digite nome:");
                cin >> name;
                result = agend->searchContact(name);
                if(result != NULL){
                    cout << "Nome: " << result->getName();
                    cout << "\nTelefone: " << result->getTel();
                    cout << "\nEndereco: " << result->getEnde();
                    cout << "\nRelacao: " << result->getRelac();
                    printf("\n");
                }
                else
                    printf("Contato nao existe.\n");
            }
            else
                printf("Agenda vazia.\n");
        }
        else if(res == 3){
            qtd = agend->getLast();
            if(qtd > 0){
                printf("Digite o nome:");
                cin >> name;
                agend->remCont(name);
            }
            else
                printf("Agenda vazia.\n");
        }
        else if(res == 4){
            qtd = agend->getLast();
            if(qtd > 0)
                agend->listCont();
            else
                printf("Agenda vazia.\n");
        }
    }
    agend->freeMem();
    delete agend;
    return 0;
}
