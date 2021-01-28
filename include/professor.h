#ifndef _CLASS_PROFESSOR_H_
#define _CLASS_PROFESSOR_H_

#include <iostream>
#include "pessoa.h"
#include "disciplina.h"

using namespace std;


class Professor:public Pessoa,public disciplina{
    private:
    int id_prof,numdeaulas;
    disciplina D;
    double salarioporaula;

    public:
    Professor(){}
    Professor(int id_prof,disciplina D,int numdeaulas,double salarioporaula){
        this->D;
        this->setIdProf(id_prof);
        this->setNumdeaulas(numdeaulas);
        this->setSalarioporaula(salarioporaula);
    }
    int getIdProf() {return id_prof;}/****/void setIdProf(int i) {id_prof = i;}

    int getNumdeaulas() {return numdeaulas;}/****/void setNumdeaulas(int nda) {numdeaulas = nda;}

    double getSalarioporaula() {return salarioporaula;}/****/void setSalarioporaula(double spa) {salarioporaula = spa;}

    const char* dados() override {return ("Professor: %c",getNome());}

    void mostrarProfessor() {
        cout << "matricula professor:" << id_prof << endl;
        cout << "Professor(a):" << getNome() << endl;
        //cout << "Disciplina:" <<  getNomeD() << endl;
        cout << "Numero de aulas:" << numdeaulas << endl;
        cout << "Salario por aula:" << salarioporaula << endl;
        cout << endl;
    }

    double calcularSalario() {
        cout << "Salario do professor: ";
        double salario = numdeaulas * salarioporaula;
        return salario;
    }
};

#endif // !_CLASS_PROFESSOR_H_
