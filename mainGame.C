#include <stdio.h>

typedef struct {
    char name[10];
    double health;
    int ac;
    int str;
    int dex;
    int con;
    int intel;
    int wis;
    int cha;
    int stealth;
    int magbouns;
    int spellSave;
    int mp;
    int counter;
    int profBouns;
    int percep;
} Player

void initPlayer(Player* name, double health, int ac, int str,
int dex, int con, int intel, int wis, int cha, int stealth
int magbouns, int, spellSave, int mp, int counter, int profBouns
int percep){
    strcpy(Player->name, name);
    Player->ac = ac;
    Player->str = str;
    Player->dex = dex;
    Player->con = con;
    Player->intel = intel;
    Player->wis = wis;
    Player->cha = cha;
    Player->stealth = stealth;
    Player->magbouns = magbouns;
    Player->spellSave = spellSave;
    Player->mp = mp;
    Player->counter = counter;
    Player->profBouns = profBouns;
    Player->percep = percep;
}

int main(){
    printf("henlo");
    return 0;
}