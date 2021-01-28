#ifndef _CLASS_DICIPLINA_H_
#define _CLASS_DICIPLINA_H_

#include <iostream>

using namespace std;

class disciplina{
private:
    int id_disc;
    const char* nome;
    double peso;
public:
    disciplina(){}
    disciplina(int id_disc,const char* nome,double peso){
        this->setDisciplina(id_disc);
        this->setNomeD(nome);
        this->setPeso(peso);
    }
    int getDisciplina() {return id_disc;}/****/void setDisciplina(int d) {id_disc = d;}
    const char* getNomeD() {return nome;}/****/void setNomeD(const char* c) {nome = c;}
    double getPeso() {return peso;}/****/void setPeso(double p) {peso = p;}

    virtual const char* dados() {return ("Diciplina: %c", nome);}

    void mostrarDiciplina(){
            cout << "Codido da diciplina:" << id_disc << endl;
            cout << "Nome:" << nome << endl;
            cout << "Peso:" << peso << endl;
            cout << "----------------" << endl;
    }
};
#endif // !_CLASS_DICIPLINA_H_