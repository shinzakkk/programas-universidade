#include <stdio.h>
#include <stdlib.h>
#include "personagem.h"
#define N 50


void inventario(){
	/*Criarei alguns itens de teste que vao curar vida ou mana e alguns para melhorar atributos temporariamente*/
	Consumiveis itens = {0, 0, 0, 0, 0};
	FILE *itensARQ;
    int opt;
    do{
    	printf("O que deseja fazer com o inventario?\n");
    	printf("1. Comprar itens.\n");
    	printf("2. Visualizar.\n");
    	printf("3. Descartar itens.\n");
    	printf("4. Sair.\n");
    	printf("Opcao: ");
    	scanf("%d", &opt);
    	getchar();
    	switch(opt){
    		case 1:
    			comprarItem(&itens);
    			break;
    		case 2:
    			viewInventario(&itens);
    			break;
    		case 3:
    			descartarItem(&itens);
    			break;
    		case 4:
    			printf("Saindo. . .\n");
    			break;
    		default:
    			printf("Opcao invalida!\n");
		}
	}while(opt != 4);
    
}

void comprarItem(Consumiveis *itens){
	/*uma funçao para comprar itens*/
	int shopping;
	do{
		printf("Qual item voce deseja comprar?");
		printf("1. HP Potion - 20o.\nDescricao: Cura 20 pontos do HP total.");
		printf("2. MP Potion - 15o.\nDescricao: Recupera 15 pontos do MP total.");
		printf("3. ATK Booster - 30o.\nDescricao: Melhora o ataque em 1.25x por um turno");
		printf("4. DEF Booster - 30o.\nDescricao: Melhora a defesa em 1.25x por um turno");
		printf("5. AGI Booster - 30o.\nDescricao: Melhora a agilidade em 1.25x por turno");
		printf("6. Sair.\n");
		printf("Escolha: ");
		scanf("%d", &shopping);
		switch(shopping){
			case 1:
				printf("1x HP Potion comprada!");
				hpPotion++;
				MC.ouro -= 20;
				break;
			case 2:
				printf("1x MP Potion comprada!");
				mpPotion++;
				MC.ouro -= 15;
				break;
			case 3:
				printf("1x ATK Booster comprado!");
				atkBooster++;
				MC.ouro -= 30;
				break;
			case 4:
				printf("1x DEF Booster comprado!");
				defBooster++;
				MC.ouro -= 30;
				break;
			case 5:
				printf("1x AGI Booster comprado!");
				agiBooster++;
				MC.ouro -= 30;
				break;
			case 6:
				printf("Saindo. . .\n");
				break;
			default:
				printf("Item invalido!\n");
				break;			
		}	
	}while(shopping != 6);
	
	FILE *itensARQ = fopen("inventario.txt", "w");
	if(itensARQ == NULL){
	    printf("Erro ao abrir o arquivo.");
		} else {
		    fprintf(itensARQ, "HP Potion: %d x\n", itens->hpPotion);
		    fprintf(itensARQ, "MP Potion: %d x\n", itens->mpPotion);
		    fprintf(itensARQ, "ATK Booster: %d x\n", itens->atkBooster);
		    fprintf(itensARQ, "DEF Booster: %d x\n", itens->defBooster);
		    fprintf(itensARQ, "AGI Booster: %d x\n", itens->agiBooster);
		    fclose(itensARQ);
		}

}

void viewInventario(Consumiveis *itens){
	//correspondente ao Read do CRUD
	FILE *itensARQ = fopen("inventario.txt", "r");
    if(itensARQ == NULL){
        printf("Erro ao abrir o arquivo.");
    } else {
        fscanf(itensARQ, "HP Potion: %d x\n", &itens->hpPotion);
        fscanf(itensARQ, "MP Potion: %d x\n", &itens->mpPotion);
        fscanf(itensARQ, "ATK Booster: %d x\n", &itens->atkBooster);
        fscanf(itensARQ, "DEF Booster: %d x\n", &itens->defBooster);
        fscanf(itensARQ, "AGI Booster: %d x\n", &itens->agiBooster);
        
        printf("Inventario:\n");
        
        printf("HP Potion: %d x\n", itens->hpPotion);
        printf("MP Potion: %d x\n", itens->mpPotion);
        printf("ATK Booster: %d x\n", itens->atkBooster);
        printf("DEF Booster: %d x\n", itens->defBooster);
        printf("AGI Booster: %d x\n", itens->agiBooster);
        
        fclose(itensARQ);
    }
}

void descartarItem(Consumiveis *itens){
	int descarte;
	do{
		printf("Qual item voce deseja descartar?");
		printf("1. HP Potion - 20o.\nDescricao: Cura 20 pontos do HP total.");
		printf("2. MP Potion - 15o.\nDescricao: Recupera 15 pontos do MP total.");
		printf("3. ATK Booster - 30o.\nDescricao: Melhora o ataque em 1.25x por um turno");
		printf("4. DEF Booster - 30o.\nDescricao: Melhora a defesa em 1.25x por um turno");
		printf("5. AGI Booster - 30o.\nDescricao: Melhora a agilidade em 1.25x por turno");
		printf("6. Sair.\n");
		printf("Escolha: ");
		scanf("%d", &descarte);
		switch(descarte){
			case 1:
				if(hpPotion <= 0){
					printf("Voce nao possui esse item para dascartar!");
				}else{
					printf("1x HP Potion descartado!");
					hpPotion--;
				}
				break;
			case 2:
				if(mpPotion <= 0){
					printf("Voce nao possui esse item para dascartar!");
				}else{
					printf("1x MP Potion descartado!");
					mpPotion--;
				}
				break;
			case 3:
				if(atkBooster <= 0){
					printf("Voce nao possui esse item para dascartar!");
				}else{
					printf("1x ATK Booster descartada!");
					atkBooster--;
				}
				break;
			case 4:
				if(defBooster <= 0){
					printf("Voce nao possui esse item para dascartar!");
				}else{
					printf("1x DEF Booster descartada!");
					defBooster--;
				}
				break;
			case 5:
				if(agiBooster <= 0){
					printf("Voce nao possui esse item para dascartar!");
				}else{
					printf("1x AGI Booster descartada!");
					agiBooster--;
				}
				break;
			case 6:
				printf("Saindo. . .\n");
				break;
			default:
				printf("Item invalido!\n");
				break;			
		}	
	}while(descarte != 6);
	
	FILE* itensARQ = fopen("inventario.txt", "w");
	if(itensARQ == NULL){
	    printf("Erro ao abrir o arquivo.");
		} else {
		    fprintf(itensARQ, "HP Potion: %d x\n", itens->hpPotion);
		    fprintf(itensARQ, "MP Potion: %d x\n", itens->mpPotion);
		    fprintf(itensARQ, "ATK Booster: %d x\n", itens->atkBooster);
		    fprintf(itensARQ, "DEF Booster: %d x\n", itens->defBooster);
		    fprintf(itensARQ, "AGI Booster: %d x\n", itens->agiBooster);
		    fclose(itensARQ);
		}
}
