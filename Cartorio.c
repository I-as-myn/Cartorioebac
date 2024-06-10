#include <stdio.h> //biblioteca de comunicação com o usuário 
#include <stdlib.h> // biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das strings

int registro() // Função responsável por cadastrar os usuários no sistema
{
	//inicio criação das variaveis/strings
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim da criação das variaveis/strings
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informação do usuário
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); // comando responsável por copiar os valores das strings
	
	FILE *file; //cria o arquivo 
	file = fopen(arquivo, "w"); //cria o arquivo // w de write novo arquivo
	fprintf(file, cpf); // salvo o valor da variavel no arquivo
	fclose(file); //fecha o arquivo
	
	file=fopen(arquivo, "a"); // a de atualização
	fprintf(file,", "); // adiciona uma virgula entre as informações
	fclose(file); // fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: ");//Coletando informação do usuário
	scanf("%s", nome); // entrada de valor a variavel
	
	file=fopen(arquivo, "a"); //comando para abrir o arquivo e atualizar as informações, a de atualização
	fprintf(file,nome); //salva o valor da variavel no arquivo
	fclose(file); //fecha o arquivo
	
	file=fopen(arquivo, "a"); // comando para abrir o arquivo e atualizar as informações, a de atualização
	fprintf(file,", "); // adiciona uma virgula entre as informações
	fclose(file);//fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: ");//Coletando informação do usuário
	scanf("%s", sobrenome);// entrada de valor a variavel
	
	file=fopen(arquivo, "a"); //comando para abrir o arquivo e atualizar as informações, a de atualização
	fprintf(file,sobrenome);//salva o valor da variavel no arquivo
	fclose(file);//fecha o arquivo
	
	file=fopen(arquivo, "a"); //comando para abrir o arquivo e atualizar as informações, a de atualização
	fprintf(file,", "); // adiciona uma virgula entre as informações
	fclose(file);//fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: ");//Coletando informação do usuário
	scanf("%s", cargo);// entrada de valor a variavel
	
	file=fopen(arquivo, "a"); // comando para abrir o arquivo e atualizar as informações,a de atualização
	fprintf(file, cargo);//salva o valor da variavel no arquivo
	fclose(file);//fecha o arquivo
	
	system ("pause"); //comando para dar uma pausa no sistema para o usuário ter tempo de ler
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //definindo linguagem
	
	// inicio da criação das variaveis/strings
	char cpf[40];
	char conteudo[200];
	// fim da criação das variaveis/strings
	
	printf("Digite o CPF do usuário a ser consultado: ");//Coletando informações do usuário
	scanf("%s", cpf);//entrada de valor a variavel
	
	FILE *file; 
	file = fopen(cpf, "r"); //r de read, no caso para ler o arquivo
	
	if(file == NULL) //condição para caso não haja o arquivo do cpf digitado
	{
		printf("Não foi possível abrir o arquivo, não localizado! \n"); //mensagem 	exibida na tela
	
	while (fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf ("\n\n");
	}
	
	system ("pause"); //comando para dar uma pausa no sistema para o usuário ter tempo de ler
}

}

int deletar()
{
	//inicio da criação das variaveis/string
	char cpf[40];
	//fim da criação das strings
	
	printf("Digite o CPF do usuário a ser deletado: "); //Coletando informações do usuário
	scanf("%s",cpf); //entrada de valor a variavel
	
	remove(cpf); // comando para remoção de arquivo
	
	FILE *file;
	file = fopen(cpf,"r"); //comando para abrir o arquivo, no caso é leitura
	
	if(file == NULL) // condição caso o usuário não seja encontrado ou não exista
	{
		printf("O usuário não se encontra no sistema \n"); //mensagem exibida na tela
		
		system ("pause");//comando para dar uma pausa no sistema para o usuário ter tempo de ler
	}
}



int main ()
{
	int opcao=0; //definindo as variáveis
	int x=1;
	
	for(x=1;x=1;)
{
		system ("cls"); //responsável por limpar a tela 
		
		setlocale(LC_ALL, "Portuguese"); //definindo linguagem
	
		printf("#### Cartório da EBAC ####\n\n"); //inicio do menu
		printf("Escolha a opção desejada do menu: \n\n");
		printf ("\t1- Registrar nomes \n");
		printf ("\t2- Consultar nomes \n");
		printf ("\t3- Deletar nomes \n\n");
		printf("Opção:   "); //fim do menu
	
		scanf("%d", &opcao); //armazenando a escolha do usuário
	
		system("cls"); //comando para limpar a tela, o sistema deleta todas as mensagens que tinham antes
	
		switch(opcao) //inicio seleção
		
		{case 1:
			registro(); //chamada de funções
		 	break;
		 	
		 case 2:
		 	consulta(); //chamada de funções
			break;
			
	   	 case 3:
		 	deletar(); //chamada de funções
			break;	
			
		 default:
			printf("Essa opção não está disponível!\n");
			system("pause"); //comando para dar uma pausa no sistema para o usuário ter tempo de ler
			break; //fim da seleção
			
		}
	
	
		
}

}




