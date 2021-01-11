#ifndef _CLASS_PESSOA_H_
#define _CLASS_PESSOA_H_

#include <iostream>
#include <locale>

using namespace std;

class Pessoa {
    private:
        const char* cpf;
        const char* nome;
        int codigo;
    public:
        const char* getCpf() {return cpf;}
        void setCpf(const char* c) {cpf=c;}
        const char* getNome() {return nome;}void setNome(const char* n) {nome=n;}
        int getCodigo() {return codigo;}void setCodigo(int id) {codigo =id;}

        virtual const char* dados() {return ("Pessoa: %c", nome);}

        void mostrarPessoa(){
            cout << "Codigo da Pessoa:" << codigo << endl;
            cout << "Nome:" << nome << endl;
            cout << "CPF:" << cpf << endl;
            cout << "----------------" << endl;
    }

};

#endif // !_CLASS_PESSOA_H_
