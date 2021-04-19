#ifndef CONTATO_H_INCLUDED
#define CONTATO_H_INCLUDED
#include <string>
using namespace std;

class contato{
    private:
        string name, tel, ende, relac;
    public:
        void setName(string name);
        void setTel(string tel);
        void setEnde(string ende);
        void setRelac(string relac);
        string getName();
        string getTel();
        string getEnde();
        string getRelac();
        string procCont();
};


#endif // CONTATO_H_INCLUDED
