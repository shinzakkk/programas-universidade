#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#define N 50

typedef struct{
	char nome[N];
	int lvl; //nivel
	int exp; //experiencia
	int hp;//Health Points
	int agi;//Agilidade
	int def;//Dfesa
	int ata;//Ataque
	int mp;//Mana Points
	int ouro; //dinheiro
} Persona;

typedef struct{
	int hpPotion;
	int mpPotion;
	int atkBooster;
	int defBooster;
	int agiBooster;
}Consumiveis;


void personagem();
void criarPersonagem(Persona *MC, FILE *mcArquivo);
void statusPersonagem(Persona *MC, FILE *mcArquivo);
void upPersonagem(Persona *MC, int pts, FILE *mcArquivo);
void deletePersonagem(Persona *MC, FILE *mcArquivo);
void comprarItem(Persona *MC);
void inventario();
void comprarItem(Consumiveis *itens);
void viewInventario(Consumiveis *itens);
void descartarItem(Persona *MC);
#endi
