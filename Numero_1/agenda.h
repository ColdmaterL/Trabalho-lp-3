#ifndef AGENDA_H_INCLUDED
#define AGENDA_H_INCLUDED
#include <string>
#include "contato.h"
using namespace std;

class agenda{
    private:
        contato *contatos[1000];
        int last;
    public:
        int getLast();
        contato *searchContact(string name);
        void addCont(string name, string tel, string ende, string relac);
        void remCont(string name);
        void listCont();
        void freeMem();
};
#endif // AGENDA_H_INCLUDED
