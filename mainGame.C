#include <stdio.h>
#include <cstring>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>

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

typedef struct {
    int sides;
} Die;

int rollDie(Die* die) {
    srand(time(NULL));
    
    int random_num = rand() % die->sides + 1;
    return random_num;
}

int getSelect() {
    int select;
    do {
        printf("Please select a valid option: ");
        scanf("%d", &select);
    } while (select < 0 || select > 4);
    return select;
} 


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

    //dice
    Die d20;
    d20.sides = 20;
    Die d12;
    d12.sides = 12;
    Die d10;
    d10.sides = 10;
    Die d8;
    d8.sides = 8;
    Die d6;
    d6.sides = 6;
    Die d4;
    d4.sides = 4;

    //Nathan turn
    if(Nathan.health > 0){
        printf("\nNathan's turn!\n");
        printf("1: Attack 2. Inventory 3. Scan\n");
        int selection = getSelect();
        if(selection = 1) {
            printf("\nYour shadowy figure lunges toward the enemy\n");
            int roll = rollDie(&d20);
            int attackRoll = (roll + Nathan.dex + Nathan.profBouns);
            if(attackRoll > Etranth.ac){
                int damageRoll = rollDie(&d12);
                int damageRollTotal = (damageRoll + Nathan.dex + Nathan.profBouns);
                if(Nathan.stealth) {
                    damageRollTotal += 8;
                    printf("You do good rouge!\n");
                }
                if(roll == 20){
                    damageRollTotal = damageRollTotal *2;
                    printf("You crit!\n");
                }
                printf("\nYou dealt %d", damageRollTotal);
                printf(" damage!\n");
                Etranth.health = Etranth.health - damageRollTotal;
                printf("Etranth health: %.2f\n", Etranth.health);
            }
            else {
                printf("You miss");
            }

            //Stealth bouns action
            printf("Do you choose to go into stealth? 1: Yes 2: No\n");
            int baSelect = getSelect();
            //FIGURE OUT A WAY TO LIMMIT NUM OF OPTIONS BASED ON NEED
            if(baSelect == 1){
                int stealthRoll = rollDie(&d20);
                int stealthRollTotal = (stealthRoll + Nathan.dex + Nathan.profBouns);
                if(stealthRollTotal >= Etranth.percep){
                    Nathan.stealth = true;
                    printf("You are in stealth\n");
                } else {
                    Nathan.stealth = false;
                    printf("Failed to go into stealth\n");
                }
            }
            else if(baSelect == 2) {
                printf("You choose to be seen!\n");
                Nathan.stealth = false;
            }
        }

    }

    //Litrix turn
    else if(Litrix.health > 0) {
        printf("\nLitrix's turn!\n");
        printf("1: Attack 2. Inventory\n");
        int selection = getSelect();
        //Main action
        if(selection = 1) {
            printf("\nYou slash your sword at the enemy\n");
            int roll = rollDie(&d20);
            int attackRoll = (roll + Litrix.dex + Litrix.profBouns);

            if(attackRoll > Etranth.ac){
                int damageRoll = rollDie(&d12);
                int damageRollTotal = (damageRoll + Litrix.dex + Litrix.profBouns);
                if(roll == 20){
                    damageRollTotal = damageRollTotal *2;
                    printf("You crit!\n");
                }
                printf("\nYou dealt %d", damageRollTotal);
                printf(" damage!\n");
                Etranth.health = Etranth.health - damageRollTotal;
                printf("Etranth health: %.2f\n", Etranth.health);
            }
            else {
                printf("You miss");
            }
            //Bouns Action
            printf("Would you like attack again?: 1. Yes 2. No");
            int baSelect = getSelect();
            if(baSelect == 1){
                int baRoll = rollDie(&d20);
                int baRollTotal = (baRoll + Litrix.dex + Litrix.profBouns);
                if(baRollTotal >= Etranth.ac){
                    int baDamageRoll = rollDie(&d12);
                    int baDamageRollTotal = (baDamageRoll + Litrix.dex + Litrix.profBouns);
                    if(roll == 20){
                        baDamageRollTotal = baDamageRollTotal *2;
                        printf("You crit!\n");
                    }
                    printf("\nYou dealt %d", baDamageRollTotal);
                    printf(" damage!\n");
                    Etranth.health = Etranth.health - baDamageRollTotal;
                    printf("Etranth health: %.2f\n", Etranth.health);
                    printf("You did addtional damage \n");
                    } else {
                        printf("Failed to do additonal damage\n");
                    }
            }
            else if(baSelect == 2) {
                printf("You choose to hold\n");
            
            }
        }
    }
    return 0;
}
