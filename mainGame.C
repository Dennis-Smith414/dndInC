#include <stdio.h>
#include <cstring>
#include <cstdlib>

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

typedef struct {
    char* item;
    int count;
} Inventory;

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
    //create players
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

    //inventory
    Inventory inventory[3];
    inventory[0].item = (char*)malloc(strlen("Potion") + 1);
    strcpy(inventory[0].item, "Potion");
    inventory[0].count = 3;

    inventory[1].item = (char*)malloc(strlen("Revive") + 1);
    strcpy(inventory[1].item, "Revive");
    inventory[1].count = 3;

    inventory[2].item = (char*)malloc(strlen("Bomb") + 1);
    strcpy(inventory[2].item, "Bomb");
    inventory[2].count = 3;

    for (int i = 0; i < 3; i++){
        printf("Item: %s, Count: %d\n", inventory[i].item, inventory[i].count);
    }

    free(inventory[0].item);
    free(inventory[1].item);
    free(inventory[2].item);

    return 0;
}
