#include "stdio.h"
#include "stdlib.h"

main(){

	int resposta, idade, escolaridade, candidato, salario, entrevistados=0;
	int 	jovemA=0, jovemB=0, jovemC=0, 
			joadultoA=0, joadultoB=0, joadultoC=0, 
			adultoA=0, adultoB=0, adultoC=0, 
			idosoA=0, idosoB=0, idosoC=0;
	int 	grau1A=0, grau2A=0, grau3A=0,
			grau1B=0, grau2B=0, grau3B=0,
			grau1C=0, grau2C=0, grau3C=0;
	int		classeAA=0, classeAB=0, classeAC=0, classeAD=0, classeAE=0,
			classeBA=0, classeBB=0, classeBC=0, classeBD=0, classeBE=0,
			classeCA=0, classeCB=0, classeCC=0, classeCD=0, classeCE=0;
	
	resposta = 1;
	while (resposta == 1) {
		entrevistados = entrevistados + 1;
		do {
			printf ("Digite a sua idade: ");
			scanf ("%d", &idade);
		} while (idade < 16);

		do {
			printf ("Nivel de escolaridade:\n1 - Primeiro grau\n2 - Segundo grau\n3 - Curso superior\n");
			scanf ("%d", &escolaridade);
		} while (escolaridade < 1 || escolaridade > 3);
		
		do {
			printf ("Renda mensal: ");
			scanf ("%d", &salario);
		} while (salario < 0);
		
		do {
			printf ("Candidato:\nCandidato 1 - Hittler\nCandidato 2 - Stallin\nCandidato 3 - Mussolini\n");
			scanf ("%d", &candidato);			
		} while (candidato < 1 || candidato > 3);
		
		if (candidato == 1){
			if (idade < 19) jovemA = jovemA+1;
			if (idade > 18 && idade <24) joadultoA = joadultoA+1;
			if (idade > 24 && idade <61) adultoA = adultoA+1;
			if (idade > 60) idosoA = idosoA+1;
			
			if (escolaridade == 1) grau1A = grau1A + 1;
			if (escolaridade == 2) grau2A = grau2A + 1;
			if (escolaridade == 3) grau3A = grau3A + 1;
			
			if (salario >= 20*510) classeAA = classeAA + 1;
			if (salario >= 10*510 && salario < 20*510) classeAB = classeAB + 1;
			if (salario >= 5*510 && salario < 10*510) classeAC = classeAC + 1;
			if (salario >= 2*510 && salario < 5*510) classeAD = classeAD + 1;
			if (salario < 2*510) classeAE = classeAE + 1;
		}
		
		if (candidato == 2){
			if (idade < 19) jovemB = jovemB+1;
			if (idade > 18 && idade <24) joadultoB = joadultoB+1;
			if (idade > 24 && idade <61) adultoB = adultoB+1;
			if (idade > 60) idosoB = idosoB+1;
			
			if (escolaridade == 1) grau1B = grau1B + 1;
			if (escolaridade == 2) grau2B = grau2B + 1;
			if (escolaridade == 3) grau3B = grau3B + 1;
			
			if (salario >= 20*510) classeBA = classeBA + 1;
			if (salario >= 10*510 && salario < 20*510) classeBB = classeBB + 1;
			if (salario >= 5*510 && salario < 10*510) classeBC = classeBC + 1;
			if (salario >= 2*510 && salario < 5*510) classeBD = classeBD + 1;
			if (salario < 2*510) classeBE = classeBE + 1;
		}
		
		if (candidato == 3){
			if (idade < 19) jovemC = jovemC+1;
			if (idade > 18 && idade <24) joadultoC = joadultoC+1;
			if (idade > 24 && idade <61) adultoC = adultoC+1;
			if (idade > 60) idosoC = idosoC+1;
			
			if (escolaridade == 1) grau1C = grau1C + 1;
			if (escolaridade == 2) grau2C = grau2C + 1;
			if (escolaridade == 3) grau3C = grau3C + 1;
			
			if (salario >= 20*510) classeCA = classeCB + 1;
			if (salario >= 10*510 && salario < 20*510) classeCB = classeCB + 1;
			if (salario >= 5*510 && salario < 10*510) classeCC = classeCC + 1;
			if (salario >= 2*510 && salario < 5*510) classeCD = classeCD + 1;
			if (salario < 2*510) classeCE = classeCE + 1;
		}
		
		do {
			printf ("Finalizar pesquisa?\n1 - Nao\n2 - Sim\n");
			scanf ("%d", &resposta);
		} while (resposta < 1 && resposta > 2);
	}
	
	
	
	printf ("Resultados da pesquisa:\n");
	printf ("Pesquisados = %d\n\n", entrevistados);
	
	printf ("Por idade(percentual):\n\n");
	if ((jovemA+jovemB+jovemC) > 0){
		printf ("Jovens:\n\nHittler: %d\nStallin: %d\nMussolini: %d\n\n", (jovemA*100)/(jovemA+jovemB+jovemC), (jovemB*100)/(jovemA+jovemB+jovemC), (jovemC*100)/(jovemA+jovemB+jovemC));
	}
	else {
		printf ("Nenhum jovem participou da pesquisa.\n\n");	
	}
	if ((joadultoA+joadultoB+joadultoC) > 0){
		printf ("Jovens adultos:\n\nHittler: %d\nStallin: %d\nMussolini: %d\n\n", joadultoA*100/(joadultoA+joadultoB+joadultoC), joadultoB*100/(joadultoA+joadultoB+joadultoC), joadultoC*100/(joadultoA+joadultoB+joadultoC));
	}
	else {
		printf ("Nenhum jovem adulto participou da pesquisa.\n\n");	
	}
	if ((adultoA+adultoB+adultoC) > 0){
		printf ("Adultos:\n\nHittler: %d\nStallin: %d\nMussolini: %d\n\n", adultoA*100/(adultoA+adultoB+adultoC), adultoB*100/(adultoA+adultoB+adultoC), adultoC*100/(adultoA+adultoB+adultoC));
	}
	else {
		printf ("Nenhum adulto participou da pesquisa.\n\n");	
	}
	if ((idosoA+idosoB+idosoC) > 0){
		printf ("Idosos:\n\nHittler: %d\nStallin: %d\nMussolini: %d\n\n", idosoA*100/(idosoA+idosoB+idosoC), idosoB*100/(idosoA+idosoB+idosoC), idosoC*100/(idosoA+idosoB+idosoC));
	}
	else {
		printf ("Nenhum idoso participou da pesquisa.\n\n");	
	}
	
	printf ("Por escolaridade(percentual):\n\n");
	if ((grau1A+grau1B+grau1C) > 0){
		printf ("Primeiro Grau:\n\nHittler: %d\nStallin: %d\nMussolini: %d\n\n", grau1A*100/(grau1A+grau1B+grau1C), grau1B*100/(grau1A+grau1B+grau1C), grau1C*100/(grau1A+grau1B+grau1C));
	}
	else {
		printf ("Ninguem com o Primeiro Grau participou da pesquisa.\n\n");	
	}
	if ((grau2A+grau2B+grau2C) > 0){
		printf ("Segundo Grau:\n\nHittler: %d\nStallin: %d\nMussolini: %d\n\n", grau2A*100/(grau2A+grau2B+grau2C), grau2B*100/(grau2A+grau2B+grau2C), grau2C*100/(grau2A+grau2B+grau2C));
	}
	else {
		printf ("Ninguem com o Segundo Grau participou da pesquisa.\n\n");	
	}
	if ((grau3A+grau3B+grau3C) > 0){
		printf ("Terceiro Grau:\n\nHittler: %d\nStallin: %d\nMussolini: %d\n\n", grau3A*100/(grau3A+grau3B+grau3C), grau3B*100/(grau3A+grau3B+grau3C), grau3C*100/(grau3A+grau3B+grau3C));
	}
	else {
		printf ("Ninguem com o Terceiro Grau participou da pesquisa.\n\n");	
	}


	printf ("Por classe social(percentual):\n\n");
	if ((classeAA+classeBA+classeCA) > 0){
		printf ("Classe A:\nHittler: %d\nStallin: %d\nMussolini: %d\n\n", classeAA*100/(classeAA+classeBA+classeCA), classeBA*100/(classeAA+classeBA+classeCA), classeCA*100/(classeAA+classeBA+classeCA));
	}
	else {
		printf ("Ninguem da Classe A participou da pesquisa.\n\n");	
	}
	if ((classeAB+classeBB+classeCB) > 0){
		printf ("Classe B:\nHittler: %d\nStallin: %d\nMussolini: %d\n\n", classeAB*100/(classeAB+classeBB+classeCB), classeBB*100/(classeAB+classeBB+classeCB), classeCB*100/(classeAB+classeBB+classeCB));
	}
	else {
		printf ("Ninguem da Classe B participou da pesquisa.\n\n");	
	}
	if ((classeAC+classeBC+classeCC) > 0){
		printf ("Classe C:\nHittler: %d\nStallin: %d\nMussolini: %d\n\n", classeAC*100/(classeAC+classeBC+classeCC), classeBC*100/(classeAC+classeBC+classeCC), classeCC*100/(classeAC+classeBC+classeCC));
	}
	else {
		printf ("Ninguem da Classe C participou da pesquisa.\n\n");	
	}
	if ((classeAD+classeBD+classeCD) > 0){
		printf ("Classe D:\nHittler: %d\nStallin: %d\nMussolini: %d\n\n", classeAD*100/(classeAD+classeBD+classeCD), classeBD*100/(classeAD+classeBD+classeCD), classeCD*100/(classeAD+classeBD+classeCD));
	}
	else {
		printf ("Ninguem da Classe D participou da pesquisa.\n\n");	
	}
	if ((classeAE+classeBE+classeCE) > 0){
		printf ("Classe E:\nHittler: %d\nStallin: %d\nMussolini: %d\n\n", classeAE*100/(classeAE+classeBE+classeCE), classeBE*100/(classeAE+classeBE+classeCE), classeCE*100/(classeAE+classeBE+classeCE));
	}
	else {
		printf ("Ninguem da Classe E participou da pesquisa.\n\n");	
	}
	system ("pause");
}
