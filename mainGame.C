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
    Player Litrix;
    Player Albrich;
    Player Etranth;
    initPlayer(&Nathan, 104, 16, 2, 5, 3, 0, 2, 4, false, 0,
                0, 0, 0, 3, 0);
    initPlayer(&Litrix, 115, 18, 1, 4, 4, 1, 1, 0, false, 0, 
                0, 0, 0, 3, 0);

    initPlayer(&Albrich, 98, 15, -1, 2, 4, 0, 0, 5, false, 6,
                15, 30, 0, 3, 0);

    initPlayer(&Etranth, 300, 10, 5, 0, 4, 2, 1, 4, false, 0,
                0, 0, 0, 0, 13);

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

    printf("\nPlayer Stats for Litrix:\n"); 
    printf("  Name: %s\n", Litrix.name);
    printf("  Health: %.2lf\n", Litrix.health); 
    printf("  AC: %d\n", Litrix.ac);
    printf("  Strength: %d\n", Litrix.str);
    printf("  Dexterity: %d\n", Litrix.dex);
    printf("  Constitution: %d\n", Litrix.con);
    printf("  Intelligence: %d\n", Litrix.intel);
    printf("  Wisdom: %d\n", Litrix.wis);
    printf("  Charisma: %d\n", Litrix.cha);
    printf("  Stealth: %s\n", Litrix.stealth ? "True" : "False");
    printf("  Magic Bonus: %d\n", Litrix.magbouns);
    printf("  Spell Save: %d\n", Litrix.spellSave);
    printf("  Mana Points: %d\n", Litrix.mp);
    printf("  Counter: %d\n", Litrix.counter);
    printf("  Proficiency Bonus: %d\n", Litrix.profBouns);
    printf("  Perception: %d\n", Litrix.percep);

    printf("\nPlayer Stats for Albrich:\n"); 
    printf("  Name: %s\n", Albrich.name);
    printf("  Health: %.2lf\n", Albrich.health); 
    printf("  AC: %d\n", Albrich.ac);
    printf("  Strength: %d\n", Albrich.str);
    printf("  Dexterity: %d\n", Albrich.dex);
    printf("  Constitution: %d\n", Albrich.con);
    printf("  Intelligence: %d\n", Albrich.intel);
    printf("  Wisdom: %d\n", Albrich.wis);
    printf("  Charisma: %d\n", Albrich.cha);
    printf("  Stealth: %s\n", Albrich.stealth ? "True" : "False");
    printf("  Magic Bonus: %d\n", Albrich.magbouns);
    printf("  Spell Save: %d\n", Albrich.spellSave);
    printf("  Mana Points: %d\n", Albrich.mp);
    printf("  Counter: %d\n", Albrich.counter);
    printf("  Proficiency Bonus: %d\n", Albrich.profBouns);
    printf("  Perception: %d\n", Albrich.percep);

    printf("\nPlayer Stats for Etranth:\n"); 
    printf("  Name: %s\n", Etranth.name);
    printf("  Health: %.2lf\n", Etranth.health); 
    printf("  AC: %d\n", Etranth.ac);
    printf("  Strength: %d\n", Etranth.str);
    printf("  Dexterity: %d\n", Etranth.dex);
    printf("  Constitution: %d\n", Etranth.con);
    printf("  Intelligence: %d\n", Etranth.intel);
    printf("  Wisdom: %d\n", Etranth.wis);
    printf("  Charisma: %d\n", Etranth.cha);
    printf("  Stealth: %s\n", Etranth.stealth ? "True" : "False");
    printf("  Magic Bonus: %d\n", Etranth.magbouns);
    printf("  Spell Save: %d\n", Etranth.spellSave);
    printf("  Mana Points: %d\n", Etranth.mp);
    printf("  Counter: %d\n", Etranth.counter);
    printf("  Proficiency Bonus: %d\n", Etranth.profBouns);
    printf("  Perception: %d\n", Etranth.percep);

    return 0;
}
