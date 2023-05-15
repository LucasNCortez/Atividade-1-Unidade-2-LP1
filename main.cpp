#include <iostream>
#include <vector>

using namespace std;

class Aluno{
    string nomeCompleto;
    string cpf;
    string idade;
    long int matricula;
    string serie;

  public:
    string getNomeCompleto(){
      return this->nomeCompleto;
    }
    void setNomeCompleto(string newNomeCompleto){
      this->nomeCompleto = newNomeCompleto;
    }

    string getCpf(){
      return this->cpf;
    }
    void setCpf(string newCpf){
      this->cpf = newCpf;
    }

    string getIdade(){
      return this->idade;
    }
    void setIdade(string newIdade){
      this->idade = newIdade;
    }

    long int getMatricula(){
      return this->matricula;
    }
    void setMatricula(long int newMatricula){
      this->matricula = newMatricula;
    }

    string getSerie(){
      return this->serie;
    }
    void setSerie(string newSerie){
      this->serie = newSerie;
    }
    Aluno(){
      nomeCompleto = "";
      cpf = "";
      idade = "";
      matricula = 0;
      serie = "";
    }
    Aluno(string newNome, string newCpf, string newIdade, long int newMatricula, string newSerie){
      nomeCompleto = newNome;
      cpf = newCpf;
      idade = newIdade;
      matricula = newMatricula;
      serie = newSerie;
    }
};

class Funcionario{
    string nomeCompleto;
    string cpf;
    string idade;
    long int matricula;
    string cargo;
    float salario;
  public:
    string getNomeCompleto(){
      return this->nomeCompleto;
    }
    void setNomeCompleto(string newNomeCompleto){
      this->nomeCompleto = newNomeCompleto;
    }

    string getCpf(){
      return this->cpf;
    }
    void setCpf(string newCpf){
      this->cpf = newCpf;
    }

    string getIdade(){
      return this->idade;
    }
    void setIdade(string newIdade){
      this->idade = newIdade;
    }

    long int getMatricula(){
      return this->matricula;
    }
    void setMatricula(long int newMatricula){
      this->matricula = newMatricula;
    }

    string getCargo(){
      return this->cargo;
    }
    void setCargo(string newCargo){
      this->cargo = newCargo;
    }

    float getSalario(){
      return this->salario;
    }
    void setSalario(float newSalario){
      this->salario = newSalario;
    }

    Funcionario(){
      nomeCompleto = "";
      cpf = "";
      idade = "";
      matricula = 0;
      cargo = "";
      salario = 0;
    }
    Funcionario(string newNome, string newCpf, string newIdade, long int newMatricula, string newCargo, float newSalario){
      nomeCompleto = newNome;
      cpf = newCpf;
      idade = newIdade;
      matricula = newMatricula;
      cargo = newCargo;
      salario = newSalario;
    }
};

class Escola{
    string nomeEscola;
    string cnpj;
    Funcionario *funcionarios = new Funcionario[5];
    Aluno *alunos = new Aluno[10];
    int countFunc = 0, countAlun = 0;
  public:
    string getNomeEscola(){
      return this->nomeEscola;
    }
    void setNomeEscola(string newNomeEscola){
      this->nomeEscola = newNomeEscola;
    }

    string getCnpj(){
      return this->cnpj;
    }
    void setCnpj(string newCnpj){
      this->cnpj = newCnpj;
    }

    void listFuncionarios(){
      for (int i = 0; i < countFunc; i++){
        cout << funcionarios[i].getNomeCompleto() << endl;
        cout << funcionarios[i].getCpf() << endl;
        cout << funcionarios[i].getIdade() << endl;
        cout << funcionarios[i].getMatricula() << endl;
        cout << funcionarios[i].getCargo() << endl;
        cout << funcionarios[i].getSalario() << endl << endl;
      }
    }

    void listAlunos(){
      for (int i = 0; i < countAlun; i++){
        cout << alunos[i].getNomeCompleto() << endl;
        cout << alunos[i].getCpf() << endl;
        cout << alunos[i].getIdade() << endl;
        cout << alunos[i].getMatricula() << endl;
        cout << alunos[i].getSerie() << endl << endl;
      }
    }

    void addFuncionario(string newNome, string newCpf, string newIdade, long int newMatricula, string newCargo, float newSalario){
      if (countFunc < 5){
        funcionarios[countFunc].setNomeCompleto(newNome);
        funcionarios[countFunc].setCpf(newCpf);
        funcionarios[countFunc].setIdade(newIdade);
        funcionarios[countFunc].setMatricula(newMatricula);
        funcionarios[countFunc].setCargo(newCargo);
        funcionarios[countFunc].setSalario(newSalario);
        countFunc++;
      }else{
        cout << "Limite de funcionários alcançado" << endl;
      }
    }
    void addAluno(string newNome, string newCpf, string newIdade, long int newMatricula, string newSerie){
      if (countFunc < 5){
        alunos[countAlun].setNomeCompleto(newNome);
        alunos[countAlun].setCpf(newCpf);
        alunos[countAlun].setIdade(newIdade);
        alunos[countAlun].setMatricula(newMatricula);
        alunos[countAlun].setSerie(newSerie);
        countAlun++;
      }else{
        cout << "Limite de alunos alcançado" << endl;
      }
    }

    void salariosSomados(){
      float sum = 0;
      for (int i = 0; i < countFunc; i++){
        sum += funcionarios[i].getSalario();
      }
      cout << "A empresa está gastando R$" << sum << " em salários no total" << endl;
    }
};

int main(){
  Escola Escolinha;
  Escolinha.setNomeEscola("Escolinha");
  Escolinha.setCnpj("123123123");
  Escolinha.addAluno("Guilherme", "12345678", "13", 321321321, "oitava serie");
  Escolinha.addFuncionario("Joao Pedro", "87654321", "33", 900000000, "diretor", 15000);

  cout << Escolinha.getNomeEscola() << Escolinha.getCnpj() << endl; 
  Escolinha.listAlunos();
  Escolinha.listFuncionarios();
}