#include <stdio.h>
#include <cstring>

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
    bool stealth;
    int magbouns;
    int spellSave;
    int mp;
    int counter;
    int profBouns;
    int percep;
} Player;

void initPlayer(Player* player, double health, int ac, int str, int dex, int con,
                int intel, int wis, int cha, bool stealth, int magbouns,
                int spellSave, int mp, int counter, int profBouns, int percep) {
    strcpy(player->name, "Nathan");
    player->health = health;
    player->ac = ac;
    player->str = str;
    player->dex = dex;
    player->con = con;
    player->intel = intel;
    player->wis = wis;
    player->cha = cha;
    player->stealth = stealth;
    player->magbouns = magbouns;
    player->spellSave = spellSave;
    player->mp = mp;
    player->counter = counter;
    player->profBouns = profBouns;
    player->percep = percep;
}

int main() {
    Player Nathan;
    initPlayer(&Nathan, 104, 16, 2, 5, 3, 0, 2, 4, false, 0,
                0, 0, 0, 3, 0);

    printf("Player Stats for Nathan:\n"); 
    printf("  Name: %s\n", Nathan.name);
    printf("  Health: %.2lf\n", Nathan.health); 
    printf("  AC: %d\n", Nathan.ac);
    printf("  Strength: %d\n", Nathan.str);
    printf("  Dexterity: %d\n", Nathan.dex);
    printf("  Constitution: %d\n", Nathan.con);
    printf("  Intelligence: %d\n", Nathan.intel);
    printf("  Wisdom: %d\n", Nathan.wis);
    printf("  Charisma: %d\n", Nathan.cha);
    printf("  Stealth: %s\n", Nathan.stealth ? "True" : "False");
    printf("  Magic Bonus: %d\n", Nathan.magbouns);
    printf("  Spell Save: %d\n", Nathan.spellSave);
    printf("  Mana Points: %d\n", Nathan.mp);
    printf("  Counter: %d\n", Nathan.counter);
    printf("  Proficiency Bonus: %d\n", Nathan.profBouns);
    printf("  Perception: %d\n", Nathan.percep);

    return 0;
}
