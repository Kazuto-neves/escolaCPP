#ifndef _CLASS_PROFESSOR_H_
#define _CLASS_PROFESSOR_H_

#include <iostream>
#include "pessoa.h"

using namespace std;
class Professor:public Pessoa{
    private:
    const char* disciplina;
    int numdeaulas;
    double salarioporaula;

    public:
        Professor(){};
        Professor(const char* disciplina,int numdeaulas,double salarioporaula){
            this->setDisciplina(disciplina);
            this->setNumdeaulas(numdeaulas);
            this->setSalarioporaula(salarioporaula);
        }
    const char* getDisciplina() {return disciplina;}/****/void setDisciplina(const char* d) {disciplina = d;}

    int getNumdeaulas() {return numdeaulas;}/****/void setNumdeaulas(int nda) {numdeaulas = nda;}

    double getSalarioporaula() {return salarioporaula;}/****/void setSalarioporaula(double spa) {salarioporaula = spa;}
    
    const char* dados() override {return ("Professor: %c",getNome());}

    void mostrarProfessor() {
        cout << "Professor(a):" << getNome() << endl;
        cout << "Disciplina:" << disciplina << endl;
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