#include <stdio.h>
#include <locale.h>
#include <string.h>
	int main(){
		char loginCadrastado[200]= "Ian";
		char senhaCadrastada[200]= "12345";
		char login [200];
		char senha[200];
		
		do{
			printf("\n===SENAI===\n");
			printf("Digite seu login: ");
			scanf("%s",login);
			
			printf("Digite sua senha: ");
			scanf("%s",senha);
		}while(!strcmp(loginCadrastado,login)!= 0 && strcmp(senhaCadrastada,senha)!=0);
		
		printf("Acessando o sistema...");
		
		return 0;
	}
	
