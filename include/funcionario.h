#ifndef _CLASS_FUNCIONARIO_H_
#define _CLASS_FUNCIONARIO_H_

#include <iostream>
#include "pessoa.h"

using namespace std;

class Funcionario:public Pessoa {

    private:
    const char* departamento;
    double salario;

    public:
    Funcionario(){}
    Funcionario(const char* departamento,double salario){
        this->setDepartamento(departamento);
        this->setSalario(salario);
    }
    const char* getDepartamento() {return departamento;}/****/void setDepartamento(const char* d) {departamento = d;}

    double getSalario() {return salario;}/****/void setSalario(double s) {salario = s;}

    const char* dados() override{return ("Funcionario: %c",getNome());}/****/void mudarDepartamento(const char* d){departamento = d;}

    void mostrarFuncionario() {
        cout << "Funcionario:" << getNome() << endl;
        cout << "Departamento:" << departamento << endl;
        cout << "Salario:" << salario << endl;
    }

};

#endif // !_CLASS_FUNCIONARIO_H_
