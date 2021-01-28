#include <iostream>
#include <locale>
#include "pessoa.h"
#include "professor.h"
#include "funcionario.h"
#include "aluno.h"
#include "disciplina.h"

using namespace std;

    int main(){
        setlocale(LC_ALL, "Portuguese");
        Pessoa *P = new Pessoa();
        disciplina *D = new disciplina();
        Aluno *A = new Aluno();
        Professor *Pr = new Professor();
        Funcionario *F = new Funcionario();

        P->setCodigo(40028922);
        P->setNome("Epaminondas Souza");
        P->setCpf("132.375.827-61");
        P->mostrarPessoa();

        cout << endl;

        D->setDisciplina(21);
        D->setNomeD("PRC");
        D->setPeso(2.0);
        D->mostrarDiciplina();

        Pr->setIdProf(24565454);
        Pr->setNome("Patricia");
        //Pr->setDisciplina(21);
        Pr->setNumdeaulas(10);
        Pr->setSalarioporaula(100);
        Pr->mostrarProfessor();
        cout << Pr->calcularSalario() << endl;
        cout << "----------------" << endl;

        cout << endl;

        A->setNome("João de Barro");
        A->setNot1(8);
        A->setNot2(10);
        A->setMatricula("00021-2018");
        A->mostrarAluno();
        cout << A->calcularMedia() << endl;
        cout << "----------------" << endl;

        cout << endl;

        F->setNome("Christian");
        F->setDepartamento("Estoque");
        F->setSalario(1200);
        F->mostrarFuncionario();

        cout << endl;

        F->mudarDepartamento("Este agora trabalha na Portaria");
        F->setSalario(1500);
        F->mostrarFuncionario();
        cout << "----------------" << endl;

        cout << endl;

        cout << "***" << D->dados() << endl;
        cout << "***" << A->dados() << endl;
        cout << "***" << P->dados() << endl;
        cout << "***" << Pr->dados() << endl;
        cout << "***" << F->dados() << endl;
        cout << "_________________" << endl;
    }

