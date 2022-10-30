#include <iostream>
#include <locale.h>
#include <fstream>

using namespace std;

struct cadastros{
	//struct para cadastro de pessoas
	
	string nome, email, senha;
	int num;
};


void cadastropessoa(cadastros c){
	//arquivo para cadastro de pessoas
	
	ofstream arquivo;
	arquivo.open("pessoas.txt", ios::app);
	arquivo <<c.nome<<" "<<c.email<<" "<<c.senha<<" "<<c.num<<" "<<endl;
	arquivo.close();
}

int permissao(cadastros cadastro, string email1, string senha1){
     ifstream arquivo("pessoas.txt");
 	 bool logou=false;
     while(arquivo>>cadastro.nome>>cadastro.email>>cadastro.senha>>cadastro.num){
     //confirmação de email e senha válidos
            		
        if(email1==cadastro.email && senha1==cadastro.senha){
 	        logou=true;
	    	break;
    	}
   	 }
 	arquivo.close();
    if (logou==true){
		while(arquivo>>cadastro.nome>>cadastro.email>>cadastro.senha>>cadastro.num){
			//retorna se é aluno, adm ou funcionário
			
			return cadastro.num;
		}
    }
	else{
		//retorna uma mensagem de erro
		
        return 0;
	} 
}

struct livros{
	//struct para cadastro de livro
	
	string titulo, autor;
	int ano,empres;
};

void emprestimopessoa(cadastros cadastro, livros livro){
	//arquivo de emprestimo pro aluno
	
	ofstream arquivo("emprestimos.txt", ios::app);
	arquivo<<cadastro.nome<<" "<<livro.titulo<<endl;
	arquivo.close();
}

void cadastrolivro (livros livro){
	//arquivo para cadastro de livros
	
	ofstream arquivo("livros.txt", ios::app);
	arquivo<<livro.titulo<<" "<<livro.autor<<" "<<livro.ano<<" "<<livro.empres<<endl;
	arquivo.close();
}

void editausuarioemail(cadastros cadastro, string nome1, string email1){
	//editar usuario email
	
      ifstream arquivo("pessoas.txt");
      if(!arquivo.is_open()){
	     cout<<"Falha ao abrir o arquivo"<<endl;
		 return;  
	  }
	  ofstream temp("temp.txt");
	  while(arquivo>>cadastro.nome>>cadastro.email>>cadastro.senha>>cadastro.num){
	    if(cadastro.nome==nome1){
		   temp<<cadastro.nome<<" "<<email1<<" "<<cadastro.senha<<" "<<cadastro.num<<endl;	
		} 
		else{
			temp<<cadastro.nome<<" "<<cadastro.email<<" "<<cadastro.senha<<" "<<cadastro.num<<endl;
		}	
	  }
	arquivo.close();
	temp.close();
	remove("pessoas.txt");
	rename("temp.txt","pessoas.txt");
}

void editausuariosenhal(cadastros cadastro, string nome1, string senha1){
	//editar usuario senha
	
      ifstream arquivo("pessoas.txt");
      if(!arquivo.is_open()){
	     cout<<"Falha ao abrir o arquivo"<<endl;
		 return;  
	  }
	  ofstream temp("temp.txt");
	  while(arquivo>>cadastro.nome>>cadastro.email>>cadastro.senha>>cadastro.num){
	    if(cadastro.nome==nome1){
		   temp<<cadastro.nome<<" "<<cadastro.email<<" "<<senha1<<" "<<cadastro.num<<endl;	
		} 
		else{
			temp<<cadastro.nome<<" "<<cadastro.email<<" "<<cadastro.senha<<" "<<cadastro.num<<endl;
		}	
	  }
	arquivo.close();
	temp.close();
	remove("pessoas.txt");
	rename("temp.txt","pessoas.txt");
}

void editausuariosetor(cadastros cadastro, string nome1, int num1){
	//editar usuario setor
	
      ifstream arquivo("pessoas.txt");
      if(!arquivo.is_open()){
	     cout<<"Falha ao abrir o arquivo"<<endl;
		 return;  
	  }
	  ofstream temp("temp.txt");
	  while(arquivo>>cadastro.nome>>cadastro.email>>cadastro.senha>>cadastro.num){
	    if(cadastro.nome==nome1){
		   temp<<cadastro.nome<<" "<<cadastro.email<<" "<<cadastro.senha<<" "<<num1<<endl;	
		} 
		else{
			temp<<cadastro.nome<<" "<<cadastro.email<<" "<<cadastro.senha<<" "<<cadastro.num<<endl;
		}	
	  }
	arquivo.close();
	temp.close();
	remove("pessoas.txt");
	rename("temp.txt","pessoas.txt");
}

void excluirusuario(cadastros cadastro, string nome1){
	//excluir usuario 
	
      ifstream arquivo("pessoas.txt");
      if(!arquivo.is_open()){
	     cout<<"Falha ao abrir o arquivo"<<endl;
		 return;  
	  }
	  ofstream temp("temp.txt");
	  while(arquivo>>cadastro.nome>>cadastro.email>>cadastro.senha>>cadastro.num){
	    if(cadastro.nome==nome1){
	
		} 
		else{
			temp<<cadastro.nome<<" "<<cadastro.email<<" "<<cadastro.senha<<" "<<cadastro.num<<endl;
		}	
	  }
	arquivo.close();
	temp.close();
	remove("pessoas.txt");
	rename("temp.txt","pessoas.txt");
}

void editaemprestimo(cadastros cadastro,livros livro ,string nome1,string titulo1){
	//editar o emprestimo
	
      ifstream arquivo("emprestimos.txt");
      if(!arquivo.is_open()){
	     cout<<"Falha ao abrir o arquivo"<<endl;
		 return;  
	  }
	  ofstream temp("temp.txt");
	  while(arquivo>>cadastro.nome>>livro.titulo){
	    if(cadastro.nome==nome1){
		   temp<<cadastro.nome<<" "<<titulo1<<endl;	
		} 
		else{
			temp<<cadastro.nome<<" "<<livro.titulo<<endl;
		}	
	  }
	arquivo.close();
	temp.close();
	remove("emprestimos.txt");
	rename("temp.txt","emprestimos.txt");
}

void excluiemprestimo(cadastros cadastro,livros livro ,string nome1,string titulo1){
	//excluir o emprestimo
	
      ifstream arquivo("emprestimos.txt");
      if(!arquivo.is_open()){
	     cout<<"Falha ao abrir o arquivo"<<endl;
		 return;  
	  }
	  ofstream temp("temp.txt");
	  while(arquivo>>cadastro.nome>>livro.titulo){
	    if(cadastro.nome==nome1){
	
		} 
		else{
			temp<<cadastro.nome<<" "<<livro.titulo<<endl;
		}	
	  }
	arquivo.close();
	temp.close();
	remove("emprestimos.txt");
	rename("temp.txt","emprestimos.txt");
}

void editalivro(livros livro, string titulo1, int ano1){
	//editar livros 
	
      ifstream arquivo("livros.txt");
      if(!arquivo.is_open()){
	     cout<<"Falha ao abrir o arquivo"<<endl;
		 return;  
	  }
	  ofstream temp("temp.txt");
	  while(arquivo>>livro.titulo>>livro.autor>>livro.ano>>livro.empres){
	    if(livro.titulo==titulo1){
		   temp<<livro.titulo<<" "<<livro.autor<<" "<<ano1<<" "<<livro.empres<<endl;	
		} 
		else{
			temp<<livro.titulo<<" "<<livro.autor<<" "<<livro.ano<<" "<<livro.empres<<endl;
		}	
	  }
	arquivo.close();
	temp.close();
	remove("livros.txt");
	rename("temp.txt","livros.txt");
}

void excluirlivro(livros livro, string titulo1){
	//editar livros 
	
      ifstream arquivo("livros.txt");
      if(!arquivo.is_open()){
	     cout<<"Falha ao abrir o arquivo"<<endl;
		 return;  
	  }
	  ofstream temp("temp.txt");
	  while(arquivo>>livro.titulo>>livro.autor>>livro.ano>>livro.empres){
	    if(livro.titulo==titulo1){
	
		} 
		else{
			temp<<livro.titulo<<" "<<livro.autor<<" "<<livro.ano<<" "<<livro.empres<<endl;
		}	
	  }
	arquivo.close();
	temp.close();
	remove("livros.txt");
	rename("temp.txt","livros.txt");
}

void editaempres(livros livro, string titulo1, int empres1){
	//editar emprestimo 
	
      ifstream arquivo("livros.txt");
      if(!arquivo.is_open()){
	     cout<<"Falha ao abrir o arquivo"<<endl;
		 return;  
	  }
	  ofstream temp("temp.txt");
	  while(arquivo>>livro.titulo>>livro.autor>>livro.ano>>livro.empres){
	    if(livro.titulo==titulo1){
		   temp<<livro.titulo<<" "<<livro.autor<<" "<<livro.ano<<" "<<empres1<<endl;	
		} 
		else{
			temp<<livro.titulo<<" "<<livro.autor<<" "<<livro.ano<<" "<<livro.empres<<endl;
		}	
	  }
	arquivo.close();
	temp.close();
	remove("livros.txt");
	rename("temp.txt","livros.txt");
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"portuguese");
	cadastros cadastro;
	livros livro;
	int op, contp=0,med, opadm,opfun,opalu, contl=0,ano1, opedl, opedu, num1, contlempres=0,empres1;
	string email1, senha1,titulo1, nome1;
	do{
		cout<<"Bem vindo ao sistema da biblioteca"<<endl;
		cout<<"Escolha uma opção:"<<endl;
		cout<<"1- Fazer o cadastro"<<endl;
		cout<<"2- Fazer o login"<<endl;
		cout<<"0- Sair"<<endl;
		cin>>op;
		if (op==1){
			//cadastro
			
			cout<<endl;
			cout<<"Vamos começar o cadastro"<<endl;
			cout<<"Digite seu primeiro nome: ";
			cin>>cadastro.nome;
			cout<<"Digite seu email: ";
			cin>>cadastro.email;
			cout<<"Digite sua senha: ";
			cin>>cadastro.senha;
			cout<<"Digite seu setor 1- Administrador 2- Funcionario 3- Aluno: ";
			cin>>cadastro.num;
			cadastropessoa(cadastro);
			cout<<"Cadastro realizado com sucesso!"<<endl<<endl;
        }
    	ifstream arquivo("pessoas.txt");
    	//contador de pessoas no arquivo
    	
			while(arquivo>>cadastro.nome>>cadastro.email>>cadastro.senha>>cadastro.num){
        contp++;
      }
      arquivo.close();
		if(op==2){
			if(contp>0){
				cout<<endl;
				//login 
				
				cout<<"Digite seu email: ";
				cin>>email1;
				cout<<"digite sua senha: ";
				cin>>senha1;
			    med=permissao(cadastro, email1, senha1);
				if(med==1){
					//menu adm 
					
					cout<<endl;
					do{
					 cout<<"Página do adiministrador"<<endl;
					 cout<<"Escolha a opção:"<<endl;
					 cout<<"1- Listar todos os usuários"<<endl;
					 cout<<"2- Inserir usuários"<<endl;
					 cout<<"3- Editar usuários"<<endl;
					 cout<<"4- Excluir usuários"<<endl;
					 cout<<"0- Sair"<<endl;
					 cin>>opadm;
					 if(opadm==1){
					 	//Lista de todos os usuários
					 	
						cout<<endl;
						cout<<"Vamos listar todos os usuários:"<<endl;
						ifstream arquivo("pessoas.txt");
						  while(arquivo>>cadastro.nome>>cadastro.email>>cadastro.senha>>cadastro.num){
							cout<<"Nome: "<<cadastro.nome<<endl;
							cout<<"Email: "<<cadastro.email<<endl;
							cout<<"Senha: "<<cadastro.senha<<endl;
							cout<<"Função: "<<cadastro.num<<endl<<endl;
						}
                        arquivo.close();
					 }
					 if(opadm==2){
					    //inserir usuários
						
						cout<<endl;
						cout<<"Vamos inserir usuários:" <<endl;
						cout<<"Digite o primeiro nome: ";
						cin>>cadastro.nome;
		            	cout<<"Digite o email: ";
			            cin>>cadastro.email;
		   	            cout<<"Digite a senha: ";
			            cin>>cadastro.senha;
			            cout<<"Digite o setor 1- Administrador 2- Funcionario 3- Aluno: ";
			            cin>>cadastro.num;
                        cadastropessoa(cadastro);
			            cout<<"Inserido com sucesso!"<<endl<<endl;	
					 }
					 if(opadm==3){
						//editar usuário
						do{
					      cout<<endl;
						  cout<<"Editar o usuário"<<endl;
						  cout<<"Escolha a opção:"<<endl;
						  cout<<"1- Editar o email"<<endl;
						  cout<<"2- Editar a senha"<<endl;
						  cout<<"3- Editar o setor"<<endl;
						  cout<<"0- Sair"<<endl;
						  cin>>opedu;
						  if(opedu==1){
						  	//editar o email
						  	 cout<<endl;
							  cout<<"Editar o email"<<endl;
							  cout<<"Digite o nome do usuário: ";
							  cin>>nome1;
							  cout<<"Digite o novo email: ";
							  cin>>email1;
							  editausuarioemail(cadastro, nome1, email1);
							  cout<<"Edição efetuada com sucesso"<<endl<<endl;
						  }
						  if(opedu==2){
						  	//editar o senha
						  	
						  	 cout<<endl;
							  cout<<"Editar a senha"<<endl;
							  cout<<"Digite o nome do usuário: ";
							  cin>>nome1;
							  cout<<"Digite a nova senha: ";
							  cin>>senha1;
							  editausuariosenhal(cadastro, nome1, senha1);
							  cout<<"Edição efetuada com sucesso"<<endl<<endl;							  
						  }
						  if(opedu==3){
						  	//editar o setor
						  	
						  	 cout<<endl;
							  cout<<"Editar o setor"<<endl;
							  cout<<"Digite o nome do usuário: ";
							  cin>>nome1;
							  cout<<"Digite o novo setor: ";
							  cin>>num1;
							  editausuariosetor(cadastro, nome1, num1);
							  cout<<"Edição efetuada com sucesso"<<endl<<endl;							  
						  }
						  if(opedu!=0 && opedu!=1 && opedu!=2 && opedu!=3){
						  	//mensagem de erro
						  	
							  cout<<endl;
							  cout<<"Opção inválida, tente novamente."<<endl<<endl;
						  }
						}while(opedu!=0);
					 }
					 if(opadm==4){
					 	//excluir usuario
						 
						 cout<<endl;
						 cout<<"Excluir usuário"<<endl;
						 cout<<"Digite o nome do usuário: ";
						 cin>>nome1;
						 excluirusuario(cadastro, nome1);
						 cout<<"Excluido com sucesso!"<<endl<<endl;					
						 
					 }
					 if(opadm!=1 && opadm!=2 && opadm!=3 && opadm!=4 && opadm!=0 ){
					 	//mensagem de erro
					 	
						cout<<endl;
						cout<<"Opção inválida, tente novamente."<<endl;
					}
					
					}while(opadm!=0);
				}
				if(med==2){
					//menu funcionário
					
					cout<<endl;
					do{
					 cout<<"Página do funcionário"<<endl;
					 cout<<"Escolha a opção:"<<endl;
					 cout<<"1- Listar todos os livros cadastrados"<<endl;
					 cout<<"2- Pesquisar um livro"<<endl;
					 cout<<"3- Inserir, alterar e excluir um livro"<<endl;
					 cout<<"4- Ver todos os emprestimos"<<endl;
					 cout<<"5- Fazer emprestimos de livros"<<endl;
					 cout<<"0- Sair"<<endl;
					 cin>>opfun;
					 if(opfun==1){
						 ifstream arquivo("livros.txt");
						 //contador de livros no arquivo 
						 
						 while(arquivo>>livro.titulo>>livro.autor>>livro.ano>>livro.empres){
							 contl++;
						 }
						 arquivo.close();
						 if(contl>0){
						 	//listagem dos livros
						 	
							cout<<endl;
						    cout<<"Vamos listar todos os livros:"<<endl;
						    ifstream arquivo("livros.txt");
						    while(arquivo>>livro.titulo>>livro.autor>>livro.ano>>livro.empres){
							    cout<<"Título: "<<livro.titulo<<endl;
						    	cout<<"Autor: "<<livro.autor<<endl;
						    	cout<<"Ano: "<<livro.ano<<endl;
						    	if(livro.empres==0){
								   cout<<"Emprestrado"<<endl<<endl;	
								}
								else{
									cout<<"Não emprestado"<<endl<<endl;
								}
						   }
						    arquivo.close();
						}
						 else{
						 	//mensagem de erro
						 	
							 cout<<endl;
							 cout<<"Nenhum livro cadastrado"<<endl<<endl;
						 }
					 }
					 if(opfun==2){
					 	//buscar um livro
					 	
						 cout<<endl;
						 cout<<"Pesquisa de um livro"<<endl;
						 cin>>titulo1;
                         ifstream arquivo("livros.txt");
                         while(arquivo>>livro.titulo>>livro.autor>>livro.ano>>livro.empres){
							 if(titulo1==livro.titulo){
								 cout<<"Título: "<<livro.titulo<<endl;
								 cout<<"Autor: "<<livro.autor<<endl;
								 cout<<"Ano: "<<livro.ano<<endl;
						    	if(livro.empres==0){
								   cout<<"Emprestrado"<<endl<<endl;	
								}
								else{
									cout<<"Não emprestado"<<endl<<endl;
								}								 
							 }
						 }
					 }
					 if(opfun==3){
						 //inserir/ alterar e excluir livro
						 do{
						  cout<<endl;
						  cout<<"Edição de livros"<<endl;
						  cout<<"Escolha uma opção"<<endl;
						  cout<<"1- Inserir livros"<<endl;
						  cout<<"2- Alterar livros"<<endl;
						  cout<<"3- Excluir livros"<<endl;
						  cout<<"0- Sair"<<endl;
						  cin>>opedl;
						  if(opedl==1){
							  //inserir livros
							  
							  cout<<"Insira o livro"<<endl;
							  cout<<"Digite o título: ";
							  cin>>livro.titulo;
							  cout<<"Digite o autor: ";
							  cin>>livro.autor;
							  cout<<"Digite o ano: ";
							  cin>>livro.ano;
							  cout<<"Se o livro está emprestado digite 0, caso não esteja 1: ";
							  cin>>livro.empres;
							  cadastrolivro(livro);
							  cout<<"Livro inserido com sucesso!"<<endl<<endl;
						  }
						  if(opedl==2){
							  //alterar livro
							  
				                cout<<"Alterar o livro"<<endl;
								cout<<"Alterar o ano do livro"<<endl;
								cout<<"Digite o título do livro: ";
								cin>>titulo1;
								cout<<"Digite o novo ano do livro: ";
								cin>>ano1;
								editalivro(livro, titulo1, ano1);
								cout<<"Alterado com sucesso!"<<endl<<endl;
						  }
						  if(opedl==3){
						  	//excluir livros
						  	
						  	cout<<"Excluir o livro"<<endl;
						  	cout<<"Digite o título do livro: ";
						  	cin>>titulo1;
						  	excluirlivro(livro, titulo1);
						  	cout<<"Excluido com sucesso!"<<endl<<endl;
							  
						  }
						  if(opedl!=0 && opedl!=1 && opedl!=2 && opedl!=3){
						  	//mensagem de erro
						  	
							  cout<<endl;
							  cout<<"Opção inválida, tente novamente"<<endl<<endl;
						  }
						 }while(opedl!=0);
					 }
					 if(opfun==4){
					 	//lista de livros emprestados
					 	
						 cout<<endl;
						 cout<<"Listar todos os emprestimos"<<endl;
						 ifstream arquivo("livros.txt");
						 while(arquivo>>livro.titulo>>livro.autor>>livro.ano>>livro.empres){
							 if(livro.empres==0){
								 cout<<"Título: "<<livro.titulo<<endl;
								 cout<<"Autor: "<<livro.autor<<endl;
								 cout<<"Ano: "<<livro.ano<<endl;
						    	if(livro.empres==0){
								   cout<<"Emprestrado"<<endl<<endl;	
								}
								contlempres++;								 
							 }
						 }
						 if(contlempres==0){
						 	//mensagem de erro
							 
							 cout<<endl;
						    cout<<"Nenhum livro emprestado"<<endl;
						 }
					 }
					 if(opfun==5){
					 	//fazer emprestimo de livro
						 
						 cout<<endl;
						 cout<<"Edição de emprestimo"<<endl;
						 cout<<"Digite o título do livro que será editado: ";
						 cin>>titulo1;
						 cout<<"0- Emprestado / 1- Não emprestado: ";
						 cin>>empres1;
						 editaempres(livro,titulo1, empres1);
						 if(empres1==0){
						 	//quem pegou o livr
						 	
							cout<<"Digite o nome do aluno que pegou o livro: ";
							cin>>nome1;
				            editaemprestimo(cadastro, livro, nome1, titulo1);
						 }
						 else{
						 	//quem entrgou o livro
						 	
							 cout<<"Digite o nome do aluno que entregou o livro: ";
							 cin>>nome1;
							 excluiemprestimo(cadastro, livro, nome1, titulo1);
						 }
						 cout<<"Editado com sucesso!"<<endl<<endl;
					 }
					 if(opfun!= 0 && opfun!=1 && opfun!=2 && opfun!=3 && opfun!=4 && opfun!=5){
						 //mensagem de erro
						 
						 cout<<endl;
						 cout<<"Opção inválida, tente novamente."<<endl<<endl;
					 }
					}while(opfun!=0);
				}
				if(med==3){
					//menu aluno
					
					cout<<endl;
					do{
					  cout<<"Página do aluno"<<endl;
					  cout<<"Escolha sua opção"<<endl;
					  cout<<"1- Listar todos os livros cadastrados"<<endl;
					  cout<<"2- Buscar um livro"<<endl;
					  cout<<"3- Ver seus emprestimos"<<endl;
					  cout<<"0- Sair"<<endl;
					  cin>>opalu;
					  if(opalu==1){
						//listar os livros  
						
						ifstream arquivo("livros.txt");
						 //contador de livros no arquivo 
						 
						 while(arquivo>>livro.titulo>>livro.autor>>livro.ano>>livro.empres){
							 contl++;
						 }
						 arquivo.close();
						 if(contl>0){
						 	//listagem dos livros
						 	
							cout<<endl;
						    cout<<"Vamos listar todos os livros:"<<endl;
						    ifstream arquivo("livros.txt");
						    while(arquivo>>livro.titulo>>livro.autor>>livro.ano>>livro.empres){
							    cout<<"Título: "<<livro.titulo<<endl;
						    	cout<<"Autor: "<<livro.autor<<endl;
						    	cout<<"Ano: "<<livro.ano<<endl;
						    	if(livro.empres==0){
								   cout<<"Emprestrado"<<endl<<endl;	
								}
								else{
									cout<<"Não emprestado"<<endl<<endl;
								}
                            
						   }
						 }
			             arquivo.close();							
					  }
					  if(opalu==2){
						  //buscar um livro
						  
						 cout<<endl;
						 cout<<"Pesquisa de um livro"<<endl;
						 cin>>titulo1;
                         ifstream arquivo("livros.txt");
                         while(arquivo>>livro.titulo>>livro.autor>>livro.ano>>livro.empres){
							 if(titulo1==livro.titulo){
								 cout<<"Título: "<<livro.titulo<<endl;
								 cout<<"Autor: "<<livro.autor<<endl;
								 cout<<"Ano: "<<livro.ano<<endl;
						    	if(livro.empres==0){
								   cout<<"Emprestrado"<<endl<<endl;	
								}
								else{
									cout<<"Não emprestado"<<endl<<endl;
								}								 
							 }
						 }						  
					  }
					  if(opalu==3){
						  //emprestimos
						  
						  cout<<endl;
						  cout<<"Livros emprestados para você"<<endl;
						  cout<<"Digite seu nome: ";
						  cin>>nome1;
						  ifstream arquivo("emprestimos.txt");
						  while(arquivo>>cadastro.nome>>livro.titulo){
							  if(nome1==cadastro.nome){
								  cout<<endl;
								  cout<<"Livro emprestado para você"<<endl;
								  cout<<livro.titulo;
								  cout<<endl<<endl;
								  contlempres++;
							  }
						  }
						  if(contlempres==0){
						  	//mensagem de erro
						  	
							  cout<<endl;
							  cout<<"Nenhum livro emprestado para você"<<endl<<endl;
						  }
						  arquivo.close();						  
					  }
					  if(opalu!=0 && opalu!=1 && opalu!=2 &&opalu!=3){
					  	//mensagem de erro
					  	
						  cout<<endl;
						  cout<<"Opção invalida, tenta novamente"<<endl;
					  }
					}while(opalu!=0);
				}
				if(med==0){
					//mensagem de erro 
					
    	          cout<<endl;
		            cout<<"Usuário ou senha inválidos, tente novamente"<<endl<<endl;
				}
			}
      else{
				//mensagem de erro

        cout<<endl;
				cout<<"Nenhum usuário cadastrado"<<endl<<endl;
			} 
		}
		if(op!=1 && op!=2 && op!=0){
			//mensagem de erro
			
			cout<<endl;
			cout<<"Opção inválida tente novamente"<<endl<<endl;
		}
	}while(op!=0);
	return 0;
}