#include <iostream>
#include <stdlib.h>
using namespace std;
const int MAXTAM=2;
struct funcionario{
	string nome, email, cpf;
};
	funcionario c[MAXTAM];
void cadastroCliente() {
	cout<<"=========CADASTRO========";
	for(int i=0; i<MAXTAM; i++){
		cout<<"\nNome: ";
		cin>>c[i].nome;
		cout<<"Email: ";
		cin>>c[i].email;
		cout<<"CPF: ";
		cin>>c[i].cpf;
		cout<<"Matricula: "<< i+1;
	}
}
void consultaCliente(){	
	int codigo;
	cout<<"Informe a Matricula: ";
	cin>>codigo;
	cout<<"==CLIENTES==CADASTRADOS==";
	cout<<"\nNome: "<<c[codigo-1].nome;
	cout<<"\nSetor: "<<c[codigo-1].email;
	cout<<"\nCPF: "<<c[codigo-1].cpf;
	system("pause");
}
void atualizar(){
	int codigo;
	cout<<"Informe a Matricula: ";
	cin>>codigo;
	cout<<"\nAtual Nome: "<<c[codigo-1].nome;
	cout<<"\nNovo Nome: ";
	cin>>c[codigo-1].nome;
	cout<<"\nAtual Email: "<<c[codigo-1].email;
	cout<<"\nNovo Email: ";
	cin>>c[codigo-1].email;		
	cout<<"\nAtual CPF: "<<c[codigo-1].cpf;		
	cout<<"\nNovo CPF: ";
	cin>>c[codigo-1].cpf;
}		
void excluir(){
	int codigo;
	cout<<"Informe a Matricula: ";
	cin>>codigo;
	for(int i=0; i<MAXTAM; i++){
		c[codigo-1].nome="";
		c[codigo-1].email="";
		c[codigo-1].cpf="";
	}
}
void listar(){
	for(int i=0; i<MAXTAM; i++){
		cout<<"\n=========================";			
		cout<<"\nNome: "<<c[i].nome;
		cout<<"\nMatricula: "<< i+1;
		cout<<"\nEmail: "<<c[i].email;
		cout<<"\nCPF: "<<c[i].cpf;
	}
system("pause");	
}
void voltar(){
 	int opcao;
	cout << "===========MENU==========" << endl;
    cout << "1 - Cadastrar" << endl;
    cout << "2 - Consultar" << endl;
    cout << "3 - Atualizar Cadastro" << endl;
    cout << "4 - Excluir" << endl;
    cout << "5 - Listar" << endl;
    cout << "6 - Voltar" << endl;    
    cout << "\nIntroduza uma opcao: ";
    cin>>opcao;
}
int main(){
	int opcao;
	do {
	system("cls");
	cout << "===========MENU==========" << endl;
    cout << "1 - Cadastrar" << endl;
    cout << "2 - Consultar" << endl;
    cout << "3 - Atualizar Cadastro" << endl;
    cout << "4 - Excluir" << endl;
    cout << "5 - Listar" << endl;
    cout << "6 - Voltar" << endl;
    cout << "\nIntroduza uma opcao: ";
    cin>>opcao;

switch (opcao) {
	case 1: cadastroCliente();
		break;
	case 2: consultaCliente();
		break;
	case 3: atualizar();
		break;
	case 4: excluir();
		break;
	case 5: listar();
		break;
	case 6:	voltar();
		break;									
	default:
		cout<<"Opcao Invalida";
system("pause");
}

} while (opcao != 6);	
	system("pause > null");
	system("cls");
	
    return 0;
}
