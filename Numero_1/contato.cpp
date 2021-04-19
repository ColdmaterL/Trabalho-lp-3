#include<iostream>
#include "contato.h"
using namespace std;


void contato :: setName(string name){
    this->name = name;
}


void contato :: setTel(string tel){
    this->tel = tel;
}


void contato :: setEnde(string ende){
    this->ende = ende;
}


void contato :: setRelac(string relac){
    this->relac = relac;
}


string contato :: procCont(){
    string regis;
    regis = "Nome:" + name + " Telefone:" + tel + " Endereco:" + ende + " Relacao:" + relac;
    return regis;
}


string contato :: getName(){
    return name;
}


string contato :: getTel(){
    return tel;
}


string contato :: getEnde(){
    return ende;
}


string contato :: getRelac(){
    return relac;
}
