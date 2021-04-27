///Nome completo: Jos� Batista Neto Matr�cula: UC21105755 Curso: Engenharia de Software

#include<stdio.h>//cabe�alho padr�o de entrada/sa�da
#include<locale.h>//fun��o para fazer a adapta��o do programa ao idioma desejado.
#include<string.h>//para manipula��o de cadeias de caracteres e regi�es de mem�ria.
#include<ctype.h>//biblioteca p/ as fun��es isalpha isdigit toupper tolower
#include<stdlib.h>//possui fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras. 

//Uso do clean code
//capitulo 2: Nomes significativos
//capitulo 5: Formatacao - Espacamento vertical entre conceitos

int main(){//Inicio do c�digo
	setlocale(LC_ALL, "Portuguese");//Defifindo linguagem
	
	int sessoes, pessoasAssistiram, idade;//Valores inteiros
	char nomeDoFilme[50], sexo;//valores de caracteres
	
	//Receber o numero de sessoes que ira ocorrer, com o maximo de 2 sessoes
	
	printf("--------------------------------\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Bem vindo ao cinema de Bras�lia!\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("--------------------------------\n");//Intera��o com o usu�rio, mostrando mensagem na tela

	do{//in�cio do la�o
		printf("Por favor, informe o n�mero de sess�es(2): ");//Intera��o com o usu�rio, mostrando mensagem na tela
			scanf("%d", &sessoes);//Recebe valor a vari�vel
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		if(sessoes!=2)//se a condi��o for falsa, o print abaixo � executado
			printf("N�mero de sess�es inv�lido! Digite novamente.\n");//Intera��o com o usu�rio, mostrando mensagem na tela, resultado do if
	}while(sessoes != 2);//fim do la�o
	
	
	
	//Receber o nome do filme
	
	do{//in�cio do la�o
		printf("Informe o nome do filme: ");//Intera��o com o usu�rio, mostrando mensagem na tela
			fgets(nomeDoFilme, 50, stdin);//receber valor a vari�vel
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		if(strlen(nomeDoFilme) <=1)//Verificar se a string n�o est� vazia
			printf("Filme n�o encontrado! Tente novamente.\n");//Intera��o com o usu�rio, mostrando mensagem na tela
		else{//condi��o contr�ria do if
			printf("-----------------------------\n");//Intera��o com o usu�rio, mostrando mensagem na tela
			printf("Filme encontrado com sucesso.\n");//Intera��o com o usu�rio, mostrando mensagem na tela
			printf("-----------------------------\n");//Intera��o com o usu�rio, mostrando mensagem na tela
		}
	}while(strlen(nomeDoFilme) <=1);//fim do la�o
	

	
	
	//Solicitar a quantidade de pessoas que irao assistir ao filme
	
	do{//in�cio
		printf("Informe quantas pessoas assistiram o filme(M�nimo de 10):\n ");//Intera��o com o usu�rio, mostrando mensagem na tela
			scanf("%d", &pessoasAssistiram);//receber valor a vari�vel
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		if(pessoasAssistiram <10)// condi��o se
			printf("Valor de pessoas inv�lido, tente novamente com o m�nimo de 10 pessoas.\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	}while(pessoasAssistiram <10);//fim do la�o
	
	
	
	//Nova funcionalidade
	int generoFilme, generoAcao=0, generoAventura=0, generoDrama=0,generoComedia=0,generoRomance=0,generoFiccao=0,generoTerror=0;//declarando vari�veis inteiras

	
	for(int i=0; i<pessoasAssistiram; i++){//in�cio da estrutura de repeti��o
	do{//in�cio do la�o
		printf("Escreva o g�nero de filme preferido de cada pessoa: \n");//Intera��o com o usu�rio, mostrando mensagem na tela
		printf("1 - A��o\n");//Intera��o com o usu�rio, mostrando mensagem na tela
        printf("2 - Aventura\n");//Intera��o com o usu�rio, mostrando mensagem na tela
        printf("3 - Drama\n");//Intera��o com o usu�rio, mostrando mensagem na tela
        printf("4 - Com�dia\n");//Intera��o com o usu�rio, mostrando mensagem na tela
        printf("5 - Romance\n");//Intera��o com o usu�rio, mostrando mensagem na tela
        printf("6 - Fic��o\n");//Intera��o com o usu�rio, mostrando mensagem na tela
        printf("7 - Terror\n");//Intera��o com o usu�rio, mostrando mensagem na tela
        printf("Pessoa n�mero %d: ", i + 1);
        	scanf("%d", &generoFilme);//receber valor a vari�vel
        fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
        
    	
        
        if(generoFilme <1 && generoFilme>7)//condi��o se
        	printf("Numero inv�lido, digite novamente\n");//Intera��o com o usu�rio, mostrando mensagem na tela
        
	}while(generoFilme <1 && generoFilme>7);//fim do la�o
	
	if(generoFilme == 1)//se generoFilme = 1
		generoAcao++;//generoAcao = generoAcao + 1
	if(generoFilme >1 && generoFilme <3)
		generoAventura++;
	if(generoFilme >2 && generoFilme <4)
		generoDrama++;
	if(generoFilme >3 && generoFilme <5)
		generoComedia++;
	if(generoFilme >4 && generoFilme <6)
		generoRomance++;
	if(generoFilme >5 && generoFilme <7)
		generoFiccao++;
	if(generoFilme >6 && generoFilme <8)
		generoTerror++;
	
	
}

		
	
	
	//Solicitar sexo e idade das pessoas
	
	int contador, crianca =0, adolescente=0, adulto=0, idoso=0, sexoMasculino=0, sexoFeminino=0, F, M, masculinoMaiorIdade=0, femininoMaiorIdade=0;

	//Solicitando idade
	
	for(contador=0; contador<pessoasAssistiram;contador++){//in�cio da estrutura de repeti��o
	do{//in�cio do la�o
		printf("Informe a idade de cada pessoa que assistiu:\n ");//Intera��o com o usu�rio, mostrando mensagem na tela
			scanf("%d", &idade);//receber valor a vari�vel
		if (isalpha(idade));//Verificar se o caracter � uma letra do alfabeto
		fflush(stdin);//receber valor a vari�vel
		if(idade <3 || idade >100)//condi��o se
			printf("Idade inv�lida, digite novamente\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	}while(idade<3 || idade >100);//fim do la�o
		
	//Solicitando sexo
	do{//in�cio do la�o
		printf("Informe o sexo de cada pessoa que assistiu(F para feminino e M para masculino):\n ");//Intera��o com o usu�rio, mostrando mensagem na tela
			scanf("%c", &sexo);//recever valor a vari�vel
		sexo = toupper(sexo);//Converte caracter min�sculo em mai�sculo.
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		if(sexo != 'F' && sexo != 'M')//condi��o se
			printf("Sexo inv�lido, digite novamente.\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	}while(sexo != 'F' && sexo != 'M');//fim do la�o
	
	if(idade >=3 && idade < 14)//se idade for maior igual a 3 e menor que 14
		crianca++;//crianca = crianca + 1
	if(idade >13 && idade < 18)
		adolescente++;
	if(idade >17 && idade < 65)
		adulto++;
	if(idade >64 && idade <101)
		idoso++;
	if(sexo == 'M')
		sexoMasculino++;
	if(sexo == 'F')
		sexoFeminino++;
	if(sexo == 'M' && idade >=18)
		masculinoMaiorIdade++;
	if(sexo == 'F' && idade >=18)
		femininoMaiorIdade++;
}
		
	

system("cls");//limpa a tela completamente
		
	printf("Filme: %s", nomeDoFilme);////Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Pessoas do sexo feminino que assistiram ao filme: %d\n", sexoFeminino);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Pessoas do sexo masculino que assistiram ao filme: %d\n", sexoMasculino);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("---------------------------------------------------------------\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Pessoas que assistiram o filme, de acordo com sua faixa et�ria\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("---------------------------------------------------------------\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Crian�as: %d\n", crianca);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Adolescentes: %d\n", adolescente);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Adultos: %d\n", adulto);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Idosos: %d\n", idoso);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Pessoas do sexo feminino maiores de idade: %d\n", femininoMaiorIdade);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Pessoas do sexo masculino maiores de idade: %d\n", masculinoMaiorIdade);//Intera��o com o usu�rio, mostrando mensagem na tela
	
	//Nova funcionalidade
	
	printf("---------------------------------------------------------------\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("                   G�neros de filme preferidos:\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("---------------------------------------------------------------\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("A��o: %d\n", generoAcao);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Aventura: %d\n", generoAventura);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Drama: %d\n", generoDrama);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Com�dia: %d\n", generoComedia);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Romance: %d\n", generoRomance);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Fic��o: %d\n", generoFiccao);//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Terror: %d\n", generoTerror);//Intera��o com o usu�rio, mostrando mensagem na tela
		
	
	return 0;
}

