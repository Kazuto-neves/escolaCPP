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

class Professor:public Pessoa{
    private:
    const char* disciplina;
    int numdeaulas;
    double salarioporaula;

    public:
    const char* getDisciplina() {return disciplina;}

    void setDisciplina(const char* d) {disciplina = d;}

    int getNumdeaulas() {return numdeaulas;}

    void setNumdeaulas(int nda) {numdeaulas = nda;}

    double getSalarioporaula() {return salarioporaula;}

    void setSalarioporaula(double spa) {salarioporaula = spa;}

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

class Funcionario:public Pessoa {

    private:
    const char* departamento;
    double salario;

    public:
    const char* getDepartamento() {return departamento;}

    void setDepartamento(const char* d) {departamento = d;}

    double getSalario() {return salario;}

    void setSalario(double s) {salario = s;}

    const char* dados() override{return ("Funcionario: %c",getNome());}

    void mudarDepartamento(const char* d){departamento = d;}

    void mostrarFuncionario() {
        cout << "Funcionario:" << getNome() << endl;
        cout << "Departamento:" << departamento << endl;
        cout << "Salario:" << salario << endl;
    }
};

class Aluno:public Pessoa {

    private:

    const char* matricula;
    double not1;
    double not2;
    double media;

    public:

    const char* getMatricula() {return matricula;}

    void setMatricula(const char* m) {matricula = m;}

    double getNot1() {return not1;}

    void setNot1(double n1) {not1 = n1;}

    double getNot2() {return not2;}

    void setNot2(double n2) {not2 = n2;}

    double getMedia() {return media;}

    void setMedia(double m) {media = m;}

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
    int main(){
        setlocale(LC_ALL, "Portuguese");
        Pessoa *P = new Pessoa();
        Aluno *A = new Aluno();
        Professor *Pr = new Professor();
        Funcionario *F = new Funcionario();

        P->setCodigo(40028922);
        P->setNome("Epaminondas Souza");
        P->setCpf("132.375.827-61");
        P->mostrarPessoa();

        cout << endl;

        Pr->setNome("Patricia");
        Pr->setDisciplina("Programação");
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

        cout << "***" << A->dados() << endl;
        cout << "***" << P->dados() << endl;
        cout << "***" << Pr->dados() << endl;
        cout << "***" << F->dados() << endl;
        cout << "_________________" << endl;
    }

