#include "header.h"

struct element_token_valeur {
    int tokenCodageId;
    // la valeur est nul si c'est pas un string ou un entier ou une variable
    char * valeur;
    int line;
    int column;
    struct element_token_valeur * next;
};

struct linked_list_token_valeur {
    struct element_token_valeur * head;
};

int codage_token(ada_token_type tokenName);

//Fonction qui supprime les commentaires du fichier source en Ada 

void supprimer_commentaires(FILE* fichier_entree, FILE* fichier_sortie); 

//Fonction qui prends un mot et le compare avec les mots d'une liste et renvoie l'index du token correspondant

int comparer_mot(const char* mot, const char** liste_mots, const int* liste_indices, int taille_liste); 

//Fonction qui renvoie 1 si c’est un float et -1 sinon
int estUnFloat(char*mot);

//Fonction qui renvoie 1 si c’est un entier et -1 sinon
int estUnEntier(char*mot);


//Creer la fonction tokeniser 

void tokeniser(FILE* fichier, struct linked_list_token_valeur * list_token);

//Creer la fonction afficher liste des tokens ligne par ligne 

void afficher_liste_tokens(struct linked_list_token_valeur * list_token);
