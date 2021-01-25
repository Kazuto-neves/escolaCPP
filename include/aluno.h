#ifndef _CLASS_ALUNO_H_
#define _CLASS_ALUNO_H_

#include <iostream>
#include "pessoa.h"

using namespace std;

class Aluno:public Pessoa {

    private:
    const char* matricula;
    double not1,not2,media;

    public:

    Aluno(){}
    Aluno(const char* matricula,double not1,double not2,double media){
        this->setMatricula(matricula);
        this->setNot1(not1);
        this->setNot2(not2);
        this->setMedia(media);
    }

    const char* getMatricula() {return matricula;}/****/void setMatricula(const char* m) {matricula = m;}

    double getNot1() {return not1;}/****/void setNot1(double n1) {not1 = n1;}

    double getNot2() {return not2;}/****/void setNot2(double n2) {not2 = n2;}

    double getMedia() {return media;}/****/void setMedia(double m) {media = m;}

    const char* dados() override{return ("Aluno %c:",getNome());}

    void mostrarAluno() {
        cout << "Aluno: " << getNome() << endl;
        cout << "Matricula:" << matricula << endl;
        cout << "1° Nota:" << not1 << endl;
        cout << "2° Nota:" << not2 << endl;
        cout << endl;
    }

    double calcularMedia() {
        cout << "Calculo da media: ";
        media = (not1 + not2) / 2;
        return media;
    }

};

#endif // !_CLASS_ALUNO_H_