#include <stdio.h> //biblioteca de comunica��o com o usu�rio 
#include <stdlib.h> // biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings

int registro() // Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	//inicio cria��o das variaveis/strings
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//fim da cria��o das variaveis/strings
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informa��o do usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); // comando respons�vel por copiar os valores das strings
	
	FILE *file; //cria o arquivo 
	file = fopen(arquivo, "w"); //cria o arquivo // w de write novo arquivo
	fprintf(file, cpf); // salvo o valor da variavel no arquivo
	fclose(file); //fecha o arquivo
	
	file=fopen(arquivo, "a"); // a de atualiza��o
	fprintf(file,", "); // adiciona uma virgula entre as informa��es
	fclose(file); // fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: ");//Coletando informa��o do usu�rio
	scanf("%s", nome); // entrada de valor a variavel
	
	file=fopen(arquivo, "a"); //comando para abrir o arquivo e atualizar as informa��es, a de atualiza��o
	fprintf(file,nome); //salva o valor da variavel no arquivo
	fclose(file); //fecha o arquivo
	
	file=fopen(arquivo, "a"); // comando para abrir o arquivo e atualizar as informa��es, a de atualiza��o
	fprintf(file,", "); // adiciona uma virgula entre as informa��es
	fclose(file);//fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: ");//Coletando informa��o do usu�rio
	scanf("%s", sobrenome);// entrada de valor a variavel
	
	file=fopen(arquivo, "a"); //comando para abrir o arquivo e atualizar as informa��es, a de atualiza��o
	fprintf(file,sobrenome);//salva o valor da variavel no arquivo
	fclose(file);//fecha o arquivo
	
	file=fopen(arquivo, "a"); //comando para abrir o arquivo e atualizar as informa��es, a de atualiza��o
	fprintf(file,", "); // adiciona uma virgula entre as informa��es
	fclose(file);//fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: ");//Coletando informa��o do usu�rio
	scanf("%s", cargo);// entrada de valor a variavel
	
	file=fopen(arquivo, "a"); // comando para abrir o arquivo e atualizar as informa��es,a de atualiza��o
	fprintf(file, cargo);//salva o valor da variavel no arquivo
	fclose(file);//fecha o arquivo
	
	system ("pause"); //comando para dar uma pausa no sistema para o usu�rio ter tempo de ler
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //definindo linguagem
	
	// inicio da cria��o das variaveis/strings
	char cpf[40];
	char conteudo[200];
	// fim da cria��o das variaveis/strings
	
	printf("Digite o CPF do usu�rio a ser consultado: ");//Coletando informa��es do usu�rio
	scanf("%s", cpf);//entrada de valor a variavel
	
	FILE *file; 
	file = fopen(cpf, "r"); //r de read, no caso para ler o arquivo
	
	if(file == NULL) //condi��o para caso n�o haja o arquivo do cpf digitado
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado! \n"); //mensagem 	exibida na tela
	
	while (fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf ("\n\n");
	}
	
	system ("pause"); //comando para dar uma pausa no sistema para o usu�rio ter tempo de ler
}

}

int deletar()
{
	//inicio da cria��o das variaveis/string
	char cpf[40];
	//fim da cria��o das strings
	
	printf("Digite o CPF do usu�rio a ser deletado: "); //Coletando informa��es do usu�rio
	scanf("%s",cpf); //entrada de valor a variavel
	
	remove(cpf); // comando para remo��o de arquivo
	
	FILE *file;
	file = fopen(cpf,"r"); //comando para abrir o arquivo, no caso � leitura
	
	if(file == NULL) // condi��o caso o usu�rio n�o seja encontrado ou n�o exista
	{
		printf("O usu�rio n�o se encontra no sistema \n"); //mensagem exibida na tela
		
		system ("pause");//comando para dar uma pausa no sistema para o usu�rio ter tempo de ler
	}
}



int main ()
{
	int opcao=0; //definindo as vari�veis
	int x=1;
	
	for(x=1;x=1;)
{
		system ("cls"); //respons�vel por limpar a tela 
		
		setlocale(LC_ALL, "Portuguese"); //definindo linguagem
	
		printf("#### Cart�rio da EBAC ####\n\n"); //inicio do menu
		printf("Escolha a op��o desejada do menu: \n\n");
		printf ("\t1- Registrar nomes \n");
		printf ("\t2- Consultar nomes \n");
		printf ("\t3- Deletar nomes \n\n");
		printf("Op��o:   "); //fim do menu
	
		scanf("%d", &opcao); //armazenando a escolha do usu�rio
	
		system("cls"); //comando para limpar a tela, o sistema deleta todas as mensagens que tinham antes
	
		switch(opcao) //inicio sele��o
		
		{case 1:
			registro(); //chamada de fun��es
		 	break;
		 	
		 case 2:
		 	consulta(); //chamada de fun��es
			break;
			
	   	 case 3:
		 	deletar(); //chamada de fun��es
			break;	
			
		 default:
			printf("Essa op��o n�o est� dispon�vel!\n");
			system("pause"); //comando para dar uma pausa no sistema para o usu�rio ter tempo de ler
			break; //fim da sele��o
			
		}
	
	
		
}

}




