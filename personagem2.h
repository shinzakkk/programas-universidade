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

void personagem();
void criarPersonagem(Persona *MC, FILE *mcArquivo);
void statusPersonagem(Persona *MC, FILE *mcArquivo);
void upPersonagem(Persona *MC, int pts, FILE *mcArquivo);
void deletePersonagem(Persona *MC, FILE *mcArquivo);
void comprarItem(Persona *MC);

#endif
