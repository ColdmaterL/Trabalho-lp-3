#include<stdio.h>
#include<iostream>
#include "agenda.h"
using namespace std;


int agenda :: getLast(){
    return last;
}


contato *agenda :: searchContact(string name){
    contato *aux = NULL;
    int i = 0;
    while(contatos[i] != NULL && contatos[i]->getName() != name)
        i++;
    if(contatos[i] == NULL)
        return NULL;
    else if(contatos[i]->getName() == name)
        aux = contatos[i];
    return aux;
}


void agenda :: addCont(string name, string tel, string ende, string relac){
    int i = 0;
    string aux;
    if(last < 1000){
        while(i != last && name != contatos[i]->getName())  // ate achar o final ou ate achar o contato
            i++;
        if(contatos[i] == NULL){  // contato novo aloca
            contatos[i] = new contato();
            last++;
        }
        contatos[i]->setName(name);
        contatos[i]->setTel(tel);
        contatos[i]->setRelac(relac);
        contatos[i]->setEnde(ende);
    }
    else{
        printf("Agenda cheia.\n");
    }
}


void agenda :: remCont(string name){
    int i = 0;
    contato *cont;
    while(contatos[i] != NULL){
        if(name == contatos[i]->getName()){
            cont = contatos[last-1];
            contatos[last-1] = contatos[i];
            contatos[i] = cont;
            delete contatos[last-1];
            contatos[last-1] = NULL;
            last--;
            printf("Contato Removido.\n");
            return;
        }
        i++;
    }
    printf("Contato nao registrado.\n");
}


void agenda :: listCont(){
    int i = 0;
    string con;
    if(contatos[i] != NULL){
        while(contatos[i] != NULL){
            con = contatos[i]->procCont();
            cout << con << endl;
            i++;
        }
    }
}


void agenda :: freeMem(){
    int i = 0;
    for(i = 0; i < last-1; i++)
        delete contatos[i];
}
