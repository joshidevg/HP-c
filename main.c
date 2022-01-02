#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

char s[9] = {'A', 'W', 'H', 'T', 'S', 'R', 'O', 'G', 'dvasjdhj'};/*This is used in function pot_room() for the jumble game. Also, we have used 'dvasjdhj' garbage value to swap characters in pot_room()*/
char ans[8] = {'H', 'O', 'G', 'W', 'A', 'R', 'T', 'S'};/*This is the answer to be compare*/
int harry_HP = 100;/*Globally defined variable because we need to change health in various levels*/
int Opp_HP = 100;
int *p = 100, *q = 100;/*pointers used for redefining the health*/
int choc, turn=0, i;
void forest()
{
    system("cls");/*This will clear the output screen up-to this point*/
    system ("color A0");
    printf("              * *                         * *                             * *\n");
    printf("            *    *  *                   *    *  *                       *    *  *\n");
    printf("       *  *    *     *  *           *  *    *     *  *              *  *    *     *  *\n");
    printf("      *     *    *  *    *         *     *    *  *    *            *     *    *  *    *\n");
    printf("  * *   *    *    *    *   *     * *   *    *    *    *   *      * *   *    *    *    *   *\n");
    printf("  *     *  *    * * .#  *   *    *     *  *    * * .#  *   *     *     *  *    * * .#  *   *\n");
    printf("  *   *     * #.  .# *   *        *   *     * #.  .# *   *        *   *     * #.  .# *   *\n");
    printf("   *     '#.  #: #' * *    *       *     '#.  #: #' * *    *        *     '#.  #: #' * *    *\n");
    printf("  *   * * '#. ##'       *         *   * * '#. ##'      *           *   * * '#. ##'       *\n");
    printf("    *       '###                    *       '###                     *       '###\n");
    printf("              '##                             '##                              '##\n");
    printf("               ##.                             ##.                              ##.\n");
    printf("               .##:                            .##:                             .##:\n");
    printf("               :###                            :###                             :###\n");
    printf("               ;###                            ;###                             ;###\n");
    printf("             ,####.                          ,####.                           ,####.\n");
    printf(" ^^^^^^^^^^.######.^^^^^^^^^^^^^^^^^^^^^^^^.######.^^^^^^^^^^^^^^^^^^^^^^^^^^.######.^^^^^^^^^\n");
    printf("You meet Hagrid. Your trusted friendly giant. You follow him into the jungle.\n");
    printf("Out of nowhere, a tree catches fire and in no time, there is a whole forest fire.\n");
    printf("\n");
    printf("Press 1 to use Incendio, the Fire Spell.\n");
    printf("Press 2 to use Ventus Jinx, the Wind Spell.\n");
    printf("Press 3 to use Aguamenti, the Water Spell.\n");
    printf("\n\nWhat do you do? ");
    scanf("%d", &choc);/*Here, the variable choc is reused(from choice() function) to save space*/
    printf("\n");
    if(choc == 1)
    {
        printf("You chose to fight fire with fire.\n");
        printf("This strategy did work, but it costed you 10 health points(HP).\n");
        harry_HP -= 10;
        printf("\n");
        printf("Your current health is %d", harry_HP);
    }
    else if(choc == 2)
    {
        printf("You chose to fight fire with wind.\n");
        printf("This strategy did work, but it costed you 5 health points(HP).\n");
        harry_HP -= 5;
        printf("\n");
        printf("Your current health is %d", harry_HP);

    }
    else if(choc == 3)
    {
        printf("You chose to fight fire with water.\n");
        printf("This strategy worked perfectly!\n");
        printf("\n");
        printf("Your current health is %d", harry_HP);
    }
    else
    {
        printf("You froze in fear and couldn't choose anything,\n");
        printf("Hagrid chose water spell and put out the fire\n");
        printf("You lose health 10 points(HP).");
        harry_HP -= 10;
        printf("\n");
        printf("Your current health is %d", harry_HP);
    }
    printf("\nYou spot a letter 'T' made out of fire\n");
    p = &harry_HP;/*This line saved the change of health globally by saving harry_HP in p*/
    printf("\n");
    printf("A centaur named Firenze who saved you in year one, thanked you for saving his house from burning!\n");
    if(turn%2 == 1)
    {
        printf("He told you that he saw Draco going towards the store room.\n");
        printf("\n");
        printf("Please enter any key to continue: ");
        getch();
        store();
    }
    else if(turn%2 == 0)
    {
        printf("He told you that he saw Draco running towards the Lake.\n");
        printf("\n");
        printf("Please enter any key to continue: ");
        getch();
        lake();
    }
}
void sdr()
{
    p = &harry_HP;
    q = &Opp_HP;
    int temp = 0;
    system("cls");
    system("color 2F");
    printf("You enter the Slytherin Dorm Room to search for Draco.\n");
    while(temp == 0)
    {
        printf("The door is locked.\n");
        printf("\n");
        printf("Press 1 to use Alohomora!\n");
        printf("Press 2 to use Tergeo!\n");
        printf("Press 3 to use Evanesco!\n");
        printf("Which of these three spells do you use?\n");
        scanf("%d", &i);
        printf("\n");
        switch(i)
        {
            case 1:
            {
                printf("You chose the correct spell. The door opens up!\n");
                printf("\n");
                temp = 1;
                break;
            }
            case 2:
            {
                printf("You chose the incorrect spell. The dust on the lock gets cleaned!\n");
                printf("\n");
                break;
            }
            case 3:
            {
                printf("You chose the incorrect spell. The lock disappears!\n");
                printf("The lock appears again after a few minutes.\n");
                printf("\n");
                break;
            }
            default:
            {
                printf("Please enter a valid option.\n");
                printf("\n");
            }
       }
    }
    printf("You run into Crabbe and Goyle.\n");
    printf("'What do you want Potter?', said Goyle.\n");
    printf("\n");
    printf("You take out the chocofrog from you pocket and show it to them. 'I wanted to give this to you'\n");
    printf("The card inside the Choco-frog box was just the letter 'O' and not a person\n");
    printf("'Not so fast. I know this is a trickery. what do you want in return?', asked Goyle\n");
    printf("You replied:'I just want to know where Draco is. Thats all'\n");
    printf("\n");

    if(turn%2 == 1)
    {
        printf("'Oh, he is in the Store Room', said Goyle\n");
        printf("\n");
        printf("Please enter any key to continue: ");
        getch();
        store();
    }
    else if(turn%2 == 0)
    {
        printf("'Oh, he is in the Lake', said Goyle\n");
        printf("\n");
        printf("Please enter any key to continue: \n");
        getch();
        lake();
    }
}
void store()
{
    system("cls");
    system("color F0");
    printf("You enter the store room and see Draco searching for something.\n'What are you doing here?', you ask. 'Waiting for you', answered Draco.\nYou angrily attack him!\n");
    printf("\n");
    printf("Press any key to continue\n");
    getch();
    system("cls");
    duel(harry_HP, Opp_HP, 60);
    harry_HP = *p;/*This will recall the saved value*/
    p = &harry_HP;
    Opp_HP = *q;
    q = &Opp_HP;
    if(Opp_HP>harry_HP)
    {
        printf("You were hit with a critical hit and it stunned you. Seeing this opportunity, Draco ran away.\n");
        printf("\n");
    }
    else
    {
        printf("Since Draco's health was low, Deatheaters, soldiers of Voldemort's evil army, came to rescue Draco and they got away.\n");
        printf("\n");
    }

    printf("Press any key to continue:\n");
    getch();

    if(turn == 1)
    {
        turn += 1;

        if(turn%2 == 0)
        {
            sdr();
        }
        else
        {
            forest();
        }
    }
    else
    {
        turn -= 1;

        if(turn%2 == 1)
        {
            sdr();
        }
        else
        {
            forest();
        }
    }
}
void lake()
{
    int win = 0, i;
    system("cls");
    system("color 9F");
    int c[10] = {'bvchscbhscbsc',2,7,'x','y',5,1,4,'z',8};/**/
    printf("Buckbeak, a Hippogriff, was saved by you from execution in year 3.\nYou ask him if he saw Malfoy.\nHe gave you a puzzle to solve.\nHe promised you that if you would solve it, only then he would help you find Malfoy.\n");
    printf("Buckbeak: See this is a Magic Square. There is a pattern here. If you are the real Harry Potter, you should be able to solve this pretty easily.\n");
    printf("\n");
    while(win != 3)
    {
        printf("Press any key to continue\n");
        getch();
        system("cls");
        printf("     %d | %d | %c \n", c[1], c[2], c[3]);
        printf("    ---|---|---\n");
        printf("     %c | %d | %d \n", c[4], c[5], c[6]);
        printf("    ---|---|---\n");
        printf("     %d | %c | %d \n", c[7], c[8], c[9]);
        while(win == 0)
        {
            printf("\n");
            printf("Buckbeak: So, what comes at the place of x?\nYou:");
            scanf("%d", &i);
            if (i == 6)
            {
                printf("Thats correct!!\n");
                printf("\n");
                win++;
                c[3] = 6;
            }
            else
            {
                printf("Thats incorrect. Please try again!\n");
                printf("\n");
            }
        }
        printf("Press any key to continue\n");
        getch();
        system("cls");
        printf("     %d | %d | %d \n", c[1], c[2], c[3]);
        printf("    ---|---|---\n");
        printf("     %c | %d | %d \n", c[4], c[5], c[6]);
        printf("    ---|---|---\n");
        printf("     %d | %c | %d \n", c[7], c[8], c[9]);
        while(win == 1)
        {
            printf("\n");
            printf("Buckbeak: So, what comes at the place of y?\nYou: ");
            scanf("%d", &i);
            if (i == 9)
            {
                printf("Thats correct!!\n");
                printf("\n");
                win++;
                c[4] = 9;
            }
            else
            {
                printf("Thats incorrect. Please try again!\n");
                printf("\n");
            }
        }
        printf("Press any key to continue\n");
        getch();
        system("cls");
        printf("     %d | %d | %d \n", c[1], c[2], c[3]);
        printf("    ---|---|---\n");
        printf("     %d | %d | %d \n", c[4], c[5], c[6]);
        printf("    ---|---|---\n");
        printf("     %d | %c | %d \n", c[7], c[8], c[9]);
        while(win == 2)
        {
            printf("\n");
            printf("Buckbeak: So, what comes at the place of z?\nYou: ");
            scanf("%d", &i);
            if (i == 3)
            {
                printf("Thats correct!!\n");
                printf("\n");
                win++;
                c[8] = 3;
            }
            else
            {
                printf("Thats incorrect. Please try again!\n");
                printf("\n");
            }
        }
        printf("     %d | %d | %d \n", c[1], c[2], c[3]);
        printf("    ---|---|---\n");
        printf("     %d | %d | %d \n", c[4], c[5], c[6]);
        printf("    ---|---|---\n");
        printf("     %d | %d | %d \n", c[7], c[8], c[9]);
        printf("\n");
        printf("Buckbeak: You are indeed the real Harry Potter! I saw Draco flying near the Quidditch ground. Come, I will take you!\n");
        printf("You ride Buckbeak and chase Malfoy\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
    }
    aerial();
}
void aerial()
{
    system("cls");
    system("color B0");
    printf(";;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
    printf(";;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
    printf(";;;;;;;;;;;;;;;;-' ___      '-;;;;;;;;;;;;;;;;\n");
    printf(";;;;;;;;;;;;-'    `'-.`'-.      '-;;;;;;;;;;;;\n");
    printf(";;;;;;;;;;'           )   `\\       ';;;;;;;;;;\n");
    printf(";;;;;;;;'            /      \\        ';;;;;;;;\n");
    printf(";;;;;;;           __/________\\__       ;;;;;;;\n");
    printf(";;;;;;           '~~/}}}}}}'}}~~'       ;;;;;;\n");
    printf(";;;;;              {{{{{{ o o\\__         ;;;;;\n");
    printf(";;;;;              }}}}} ,___ __}        ';;;;\n");
    printf(";;;;;             {{{{{\\  \\_//            ;;;;\n");
    printf(";;;;;              }}}}/'--u              ;;;;\n");
    printf(";;;;;        _     .--'`U\\                ;;;;\n");
    printf(";;;;;   ::::| \\   (   _,\\\\               ,;;;;\n");
    printf(";;;;;;  ::::|  |===\  \\\=\\))=======@      ;;;;;;\n");
    printf(";;;;;;; ::::|_/     `> \\\               ;;;;;;;\n");
    printf(";;;;;;;;.           /__//            .;;;;;;;;\n");
    printf(";;;;;;;;;;.         Y\\_\\\_         .;;;;;;;;;;;\n");
    printf(";;;;;;;;;;;;-._                _.-;;;;;;;;;;;;\n");
    printf(";;;;;;;;;;;;;;;;-.          .-;;;;;;;;;;;;;;;;\n");
    printf(";;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
    printf(";;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;\n");
    Opp_HP = *q;
    harry_HP = *p;
    int d[5] = {1,2,3,4,0}, o = 0;
    time_t t;
    printf("You catch up to Draco and an aerial battle starts.\n");
    printf("\n");
    while(harry_HP >0 && o!=1)
    {
        printf("Press any key to hit Draco\n");
        getch();
        srand((unsigned)time(&t));
        int com = d[rand()%5];
        if (com == 3)
        {
            o++;
            printf("You hit Draco and he fell down. Draco lost 10 HP\n");
            Opp_HP -= 10;
            printf("\n");
            printf("You spot 'M' in the clouds.\n");
            printf("\n");
        }
        else
        {
            printf("You missed. Try harder\n");
            printf("Draco hit you and you lost 2 HP\n");
            printf("\n");
            harry_HP -= 2;
        }
    }
    if(harry_HP<=0)
    {
        printf("You lost all your HP\n\nPress any key to end the game\n");
        getch();
        skull();
    }
    else
    {

        printf("-----------------------------------------------------------------------------------------\n");
        printf("|Draco started to run away.                                                             |\n");
        printf("|You were going to run after him, but Buckbeak stopped you and gave you a health potion.|\n");
        printf("|Buckbeak: Here, take this. This will increase your HP by 20.                           |\n");
        printf("|You started to run towards Draco after drinking the potion.                            |\n");
        printf("-----------------------------------------------------------------------------------------\n");
        harry_HP += 20;
        printf("\n");
        printf("Final healths are\n");
        printf("Player: %d\n", harry_HP);
        printf("Opponent: %d\n", Opp_HP);
        printf("\n");
        p = &harry_HP;
        q = &Opp_HP;
        ror();
    }

}
void ror()
{
    int c;
    printf("Press any key to continue:\n");
    getch();
    system("color 30");
    Opp_HP = *q;
    harry_HP = *p;
    system("cls");
    printf("You enter the seventh floor in the left corridor of the Hogwarts castle. You follow Draco inside the Room of Requirements.\n");
    printf("Draco takes out a heath potion from the cabinet and drinks it. His health is increased by 20 HP.\n");
    Opp_HP += 20;
    printf("\n");
    printf("Draco: This is the power of the Dark Lord. In his reign, the powerful pure bloods can have whatever they want and the weak muggles will perish. Join us Harry and we can rule together.\n");
    printf("You: Never!\n");
    printf("\n");
    printf("Draco attacks you and a duel starts!\n");
    printf("\n");
    duel(harry_HP, Opp_HP, 10);
    harry_HP = *p;
    p = &harry_HP;
    Opp_HP = *q;
    q = &Opp_HP;
    if(Opp_HP>harry_HP)
    {
        printf("You were hit with a critical hit and it killed you. You Died.\n");
        printf("\n");
        printf("Press any key to end the game\n");
        getch();
        skull();
    }
    else
    {
        printf("Press any key to continue: ");
        getch();
        system("cls");
        printf("\n");
        printf("Since Draco's health is low, Deatheaters, soldiers of Voldemort's evil army, came to rescue Draco and they got away.\n");
        printf("\n");
        printf("Enter 1 to go after Draco\n");
        printf("Enter 2 to go look for Luna to increase your health\n");
        while(c != 1 && c != 2)
        {
            printf("What will you do?\nYou:");
            scanf("%d", &c);
            printf("\n");
            if(c == 1)
            {
                printf("You chose to run after Draco. Soon, you were ambushed by Deatheaters and killed.\n");
                printf("Please enter any key to end the game.\n");
                getch();
                skull();
            }
            else if(c == 2)
            {
                printf("You decided to look for Luna and go towards the potions room.\n");
                printf("\n");
                pot_room();
            }
            else
            {
                printf("Please enter a valid option.\n");
                printf("\n");
            }
        }


    }



}
void swap(int a, int b)
{
    int i;
    s[8] = s[a];
    s[a] = s[a+b];
    s[a+b] = s[8];
    s[8] = 'dvasjdhj';/*Garbage value re-initialized*/
    for(i = 0; i<8; i++)
    {
        printf("%c ", s[i]);
    }
    printf("\n");
    printf("1 2 3 4 5 6 7 8");
    printf("\n");
}
void pot_room()
{
    printf("Press any key to continue\n");
    getch();
    system("cls");
    system("color 5F");
    printf(" (       '     ) \n");
    printf("  ( _  *  \n");
    printf("     * (     /      \\    ___\n");
    printf("        '     '        _/ /\n");
    printf("       (   *  )    ___/   | \n");
    printf("         )   '     _ o)'-./__ \n");
    printf("        *  _ )    (_, . $$$ \n");
    printf("        (  )   __    7_ $$$$ \n");
    printf("         ( :  { _)   |'---  $ \n");
    printf("    ______'___/__ \\  \\____, \\ \n");
    printf("     )           ( \\_/ _____ \\_ \n");
    printf("   .'             \\   \\------''.\\ \n");
    printf("   |='           '=|  |         ) \n");
    printf("   |               |  |  .    _/\n");
    printf("   \\    (. ) ,   /  /__I_____\\ \n");
    printf("     '._/_)_(\\__.'   (__,(__,_] \n");
    printf("    @---()_.'---@ \n");
    harry_HP = *p;
    printf("Tired and low on HP, you entered the potions room.\n");
    printf("\n");
    printf("Luna: Oh My God! What happened? What are all these wounds?\n");
    printf("You: Long story. Do you have any health potions?\n");
    printf("\n");
    printf("Luna handed you a blue bottle, which looked different from the one Buckbeak gave you.\n");
    printf("Luna: This will heal all your wounds and increase your Hp by 40!\n");
    printf("\n");
    harry_HP += 40;
    p = &harry_HP;
    printf("You: I need to go now and find Draco. But i have no idea where to start\n");
    printf("Luna: There is a Marauder's Map in the chest but it is locked by a Password. I dont know the password, but you can try to unlock it.\n");
    printf("\n");
    printf("You look at the chest and there is a jumble word 'RIDDLE' set as the password.\n");
    printf("You see the letters 'A', 'W', 'H', 'T', 'S', 'R', 'O', 'G'.\n\n");
    char temp;
    int i, x, j, z = 0, move, count, coun =1;
    while(coun == 1)
    {
        for(i = 0; i<8; i++)
        {
            printf("%c ", s[i]);
        }
        printf("\n");
        printf("1 2 3 4 5 6 7 8");
        printf("\n");
        printf("\n\nEnter the number below the letter which you want to move: ");
        scanf("%d", &x);
        i = x-1;
        count = 1;
        printf("\n");
        printf("Press 1 to move it left by 1 unit\n");
        printf("Press 2 to move it right by 1 unit\n");
        printf("Press 0 to fix the position\n");
        while(count == 1)
        {
            printf("\n");
            printf("Your choice: ");
            scanf("%d", &move);
            switch (move)
            {
                case 1:
                    if (i-1 < 0)
                    {
                        printf("Please enter a valid move\n");
                        break;
                    }
                    else
                    {
                        swap(i, -1);
                        i += -1;
                        break;
                    }
                case 2:
                    if (i+1 > 7)
                    {
                        printf("Please enter a valid move\n");
                        break;
                    }
                    else
                    {
                        swap(i, 1);
                        i += 1;
                        break;
                    }
                case 0:
                    count = 0;
                    printf("Point fixed successfully.\n");
                    printf("Enter any key to continue: ");
                    getch();
                    system("cls");
                    break;
                default:
                    printf("Please enter a valid move\n");
                    break;
            }
        }
        for(j = 0; j<8; j++)
        {
            if(s[j] == ans[j])
            {
                z += 1;
            }
        }
        if(z==8)
        {
            coun = 0;
            printf("\n\nPassword is correct!\n");
            printf("You found the Marauder's Map inside it.\n");
        }
        z = 0;
    }
    printf("You spot Draco running towards the girl's washroom on the third floor.\n");
    printf("'He is definitely going in the chamber of secrets!', you say to yourself.\n");
    printf("You thank Luna again and run towards the Chamber of Secrets.\n");
    printf("\n");
    cos_door();

}
void cos_door()
{
    int pw;
    printf("Press any key to continue\n");
    getch();
    system("cls");
    system("color E0");
    printf("You reach the door and find that it is locked and you need a password.\n");
    printf("You remember seeing various letters during your journey. You thought they were your imagination, but now you are sure that those letters are related to the password.\n");
    printf("\n");
    printf("The door reads: ___ MARVELO ______ IS WHO?\n");
    printf("Press 1 to choose 'Tom Riddle'\n");
    printf("Press 2 to choose 'Salazar Slytherin'\n");
    printf("Press 3 to choose 'Lord VOLDEMORT'\n");
    printf("You: ");
    scanf("%d", &pw);
    printf("\n");
    if(pw == 3)
    {
        printf("The door creaks open. You chose the correct answer.\n");
        printf("\n");
        cos_fight();
    }
    else
    {
        printf("You entered the wrong password and were killed by Deatheaters\n");
        printf("\n");
        printf("Press any key to end the game\n");
        getch();
        skull();
    }
}
void cos_fight()
{
    printf("Press any key to continue\n");
    getch();
    system("cls");
    system("color 8F");
    printf("You enter the Chamber of Secrets and see Draco standing alongside Lord Voldemort.\n");
    printf("Voldemort: Well done Draco! You did your job well. You can leave now.\n");
    printf("You: And what exactly did he do?\n");
    printf("Voldemort: He brought you to me. You see Harry, you are becoming a big thorn in my quest. I must kill you!\n");
    harry_HP = *p;
    Opp_HP = 80;
    int play, con = 0;
    int Opponent[3] =  {1, 2, 3};
    int dark_pois[10] = {1,2,3,4,5,6,7,8,9,0};/*This is similar to health boost, but it will decrease ehealth*/
    int f = 0;
    int boost[5] = {1, 2, 3, 4, 5};
    while(harry_HP>con && Opp_HP>con)
    {
        printf("Your HP is %d\n", harry_HP);
        printf("Opponent's HP is %d\n", Opp_HP);
        printf("\n");
        time_t t;
        srand((unsigned)time(&t));
        int com = Opponent[rand()%3];
        if(f != 1)
        {
            time_t t1;
            srand((unsigned)time(&t1));
            int dp = dark_pois[rand()%10];
            if(dp == 5)
            {
                printf("Voldemort cursed you with dark poison.\n");
                f = 1;
            }
            else
            {
                f = 0;
            }
        }

        printf("Press 1 to Attack to do damage the opponent\n");
        printf("Press 2 to Defend to block the attack and get a 20%% chance to increase the health by 5HP\n");
        printf("Press 3 to use Expelliarmus to disarm the defense of the opponent\n");
        printf("\n");
        printf("\nYour choice:");
        scanf("%d", &play);
        if(f == 1)
        {
            printf("Voldemort's Dark Poison, hurt you and you lost 7 HP\n");
            printf("\n");
            harry_HP -= 7;
        }
        if(play == 1)
        {

            Opp_HP -= 10;
            printf("\nYou chose to Attack!\n");
            if(com == 1)
            {
                printf("Opponent chose to Attack!\n");
                harry_HP -= 10;
            }
            else if(com == 2)
            {
                Opp_HP += 10;
                printf("Opponent chose to Defend!\n");
                time_t t1;
                srand((unsigned)time(&t1));
                int chance = boost[rand()%5];
                if(chance == 3)
                {
                    Opp_HP += 5;
                    printf("Opponent increased their health by 5 HP!\n");
                }

            }
            else
            {
                printf("Opponent chose Expelliarmus! and missed.\n");
                printf("Your attack was successful.\nYou did 10 damage to Opponent.\n");
                printf("\n");

            }
        }
        else if(play == 2)
        {
            time_t t1;
            srand((unsigned)time(&t1));
            int chance = boost[rand()%5];
            printf("\nYou chose to Defend!\n");
            if(chance == 3)
            {
                harry_HP += 5;
                printf("Your health increased by 5 HP!\n");
            }
            if(com == 1)
            {
                printf("Opponent chose to Attack!\n");
                printf("You successfully defended the attack.\n");
            }
            else if(com == 2)
            {
                printf("Opponent chose to Defend!\n");
                time_t t2;
                srand((unsigned)time(&t2));
                int chance = boost[rand()%5];
                if(chance == 3)
                {
                    Opp_HP += 5;
                    printf("Opponent's health increased by 5 HP!\n");
                }

            }
            else
            {
                printf("Opponent chose Expelliarmus!\n");
                printf("Your defense was disarmed. You took 10 damage.\n");
                harry_HP -= 10;
            }
        }
        else if(play == 3)
        {
            printf("\nYou chose Expelliarmus!\n");
            if(com == 1)
            {
                printf("Opponent chose to Attack!\n");
                printf("Your spell missed. You took 10 damage!\n");
                harry_HP -= 10;
            }
            else if(com == 2)
            {
                printf("Opponent chose to Defend!\n");
                time_t t1;
                srand((unsigned)time(&t1));
                int chance = boost[rand()%5];
                if(chance == 3)
                {
                    Opp_HP += 5;
                    printf("Opponent increased their health by 5 HP!\n");
                }
                printf("Your spell disarmed their defense and did 10 damage!\n");
                Opp_HP -= 10;
            }
            else
            {
                printf("Opponent chose Expelliarmus!\n");
                printf("Your attacks are nullified and you both take 5 damage!\n");
                harry_HP -= 5;
                Opp_HP -= 5;
            }
        }
        else
        {
        printf("\nPlease choose a correct option\n");
        }

    }

    if(harry_HP>=Opp_HP)
    {
        printf("\n");
        printf("You killed Voldemort\n");
        printf("\n");
        printf("Press any key to continue\n");
        getch();
        system("cls");
        victory();
    }
    else
    {
        printf("\n");
        printf("Voldemort killed you\n");
        printf("\n");
        printf("Press any key to end the game\n");
        getch();
        system("cls");
        skull();
    }
}
void skull()
{
    system("cls");
    system("color 4F");
    printf("                         YOU LOST\n");
    printf("                   'xxxxxxxxxxxxxxxxxxx                    \n");
    printf("                 xxxxxx             xxxxxxx                \n");
    printf("              xxxx                       xxxx              \n");
    printf("             xxx                             xx            \n");
    printf("            xx                                xx           \n");
    printf("           xx                                 xx           \n");
    printf("          xx                                   xx          \n");
    printf("          xx xx                             xx xx          \n");
    printf("          xx xx                             xx  x          \n");
    printf("          xx xx                             xx  x          \n");
    printf("          xx  xx                            xx xx          \n");
    printf("          xx  xx                           xx  xx          \n");
    printf("           xx xx  xxxxxxxx'     'xxxxxxxx   xx xx           \n");
    printf("            xxxx xxxxxxxxxx     xxxxxxxxxx xxxxx           \n");
    printf("             xxx xxxxxxxxxx     xxxxxxxxxx xxx             \n");
    printf("    xxx       xx  xxxxxxxx       xxxxxxxxx  xx      xxxx   \n");
    printf("   xxxxx     xx   xxxxxxx   xxx   xxxxxxx   xx     xxxxxx  \n");
    printf("  xx   xx    xx     xxx    xxxxx    xxx     xx    xx   xx  \n");
    printf(" xxx    xxxx  xx          xxxxxxx          xx  xxxx    xxx \n");
    printf("xx         xxxxxxxx       xxxxxxx       xxxxxxxxx        xx\n");
    printf("xxxxxxxxx     xxxxxxxx    xxxxxxx    xxxxxxxx      xxxxxxxx\n");
    printf("  xxxx xxxxx      xxxxx              xxx xx     xxxxxx xxx \n");
    printf("          xxxxxx  xxx  xx           xx  xxx  xxxxxx        \n");
    printf("              xxxxxx xxxxxxxxxxxxxxxxx xxxxxx              \n");
    printf("                  xx xxx            xxx xx                 \n");
    printf("                xxxx  xx            xx  xxxxx              \n");
    printf("            xxxxx xx   xxxxxxxxxxxxx   xx xxxxx            \n");
    printf("    xxxxxxxxxx     xx                 xx      xxxxxxxxx    \n");
    printf("   xx           xxxxxxx             xxxxxxxx          xx   \n");
    printf("    xxx     xxxxx     xxxxxxxxxxxxxxx     xxxxx     xxx    \n");
    printf("      xx   xxx           xxxxxxxxx           xxx   xx      \n");
    printf("      xx  xx                                   xx  xx      \n");
    printf("       xxxx                                     xxxx       \n");

}
int duel(int harry_HP, int Opp_HP, int con)
{
    q = &Opp_HP;
    harry_HP = *p;
    Opp_HP = *q;
    system("color E0");

    int play;
    int boost[5] = {1, 2, 3, 4, 5};/*Used to decide if defense increases HP*/
    printf("Your HP is %d\n", harry_HP);
    printf("Opponent's HP is %d\n", Opp_HP);
    printf("\n\n");
    printf("Press 1 to Attack to do damage the opponent\n");
    printf("Press 2 to Defend to block the attack and get a 20%% chance to increase the health by 5HP\n");
    printf("Press 3 to use Expelliarmus to disarm the defense of the opponent\n");
    printf("\n");
    while(harry_HP>con && Opp_HP>con)
    {
        time_t t;
        srand((unsigned)time(&t));
        int com = (rand()%3)+1;/*Here, rand() along with time.h library will randomize the opponent's(Computer's) move*/
        printf("\n");
        printf("Your choice:");
        scanf("%d", &play);
        if(play == 1)
        {
            Opp_HP -= 10;
            printf("You chose to Attack!\n");
            if(com == 1)
            {
                printf("Opponent chose to Attack!\n");
                harry_HP -= 10;
            }
            else if(com == 2)
            {
                Opp_HP += 10;
                printf("Opponent chose to Defend!\n");
                time_t t1;
                srand((unsigned)time(&t1));
                int chance = boost[rand()%5];
                if(chance == 3)
                {
                    Opp_HP += 5;
                    printf("Opponent increased their health by 5 HP!\n");
                }

            }
            else
            {
                printf("Opponent chose Expelliarmus! and missed.\n");
                printf("Your attack was successful.\nYou did 10 damage to Opponent.\n");

            }
        }
        else if(play == 2)
        {
            time_t t1;
            srand((unsigned)time(&t1));
            int chance = boost[rand()%5];/*To randomise the chance for getting HP boost*/
            printf("You chose to Defend!\n");
            if(chance == 3)
            {
                harry_HP += 5;
                printf("Your health increased by 5 HP!\n");
            }
            if(com == 1)
            {
                printf("Opponent chose to Attack!\n");
                printf("You successfully defended the attack.\n");
            }
            else if(com == 2)
            {
                printf("Opponent chose to Defend!\n");
                time_t t2;
                srand((unsigned)time(&t2));
                int chance = boost[rand()%5];
                if(chance == 3)
                {
                    Opp_HP += 5;
                    printf("Opponent's health increased by 5 HP!\n");
                }

            }
            else
            {
                printf("Opponent chose Expelliarmus!\n");
                printf("Your defense was disarmed. You took 10 damage.\n");
                harry_HP -= 10;
            }
        }
        else if(play == 3)
        {
            printf("You chose Expelliarmus!\n");
            if(com == 1)
            {
                printf("Opponent chose to Attack!\n");
                printf("Your spell missed. You took 10 damage!\n");
                harry_HP -= 10;
            }
            else if(com == 2)
            {
                printf("Opponent chose to Defend!\n");
                time_t t1;
                srand((unsigned)time(&t1));
                int chance = boost[rand()%5];
                if(chance == 3)
                {
                    Opp_HP += 5;
                    printf("Opponent increased their health by 5 HP!\n");
                }
                printf("Your spell disarmed their defense and did 10 damage!\n");
                Opp_HP -= 10;
            }
            else
            {
                printf("Opponent chose Expelliarmus!\n");
                printf("Your attacks are nullified and you both take 5 damage!\n");
                harry_HP -= 5;
                Opp_HP -= 5;
            }
        }
        else
        {
        printf("\nPlease choose a correct option\n");
        }
        printf("Your HP is %d\n", harry_HP);
        printf("Opponent's HP is %d\n", Opp_HP);
    }
    printf("\n\n");
    p = &harry_HP;
    q = &Opp_HP;


    return *p, *q;
}
void castle()
{

    printf("\t\t\t                     #\n");
    printf("\t\t\t                    # # \n");
    printf("\t\t\t                   #  ##\n");
    printf("\t\t\t                   #  ##\n");
    printf("\t\t\t                  #    ## \n");
    printf("\t\t\t                 #     ### \n");
    printf("\t\t\t               #############\n");
    printf("\t\t\t                #         #\n");
    printf("\t\t\t     #           ######### \n");
    printf("\t\t\t     #            #     #\n");
    printf("\t\t\t    # #      #    #     #\n");
    printf("\t\t\t   #  ##    # #   #     #\n");
    printf("\t\t\t   #  ##   #  ##  #     #        #\n");
    printf("\t\t\t  #    ## #    ## #     #        #\n");
    printf("\t\t\t  #    ## ####### #     #       # #\n");
    printf("\t\t\t #     #####   #  #     #       # #\n");
    printf("\t\t\t #     ##### # #  #     #      #  ##\n");
    printf("\t\t\t############ # # #########     #  ##\n");
    printf("\t\t\t #       # # # ##         #   #    ##\n");
    printf("\t\t\t  #######  #   ##         # ###########\n");
    printf("\t\t\t   #   #   #####           # #       #\n");
    printf("\t\t\t   #   #   #   #            # ########\n");
    printf("\t\t\t   # # #  ###################  #   #  #\n");
    printf("\t\t\t   # # # #                   # # # # # #\n");
    printf("\t\t\t   # # # #                   # #   # ###\n");
    printf("\t\t\t   # # # ##################### # # # # #\n");
    printf("\t\t\t   #   #   #     #  # #  # #   # # # # #\n");
    printf("\t\t\t   #   #   #    #    #    #    #   # # #\n");
    printf("\t\t\t   #   #    #   #    #   #  ############\n");
    printf("\t\t\t##############  #    #   ##########  #\n");
    printf("\t\t\t#            #  #    #   #       #   #\n");
    printf("\t\t\t##############  #    #   ########    #\n");
    printf("\t\t\t #          ##  #    #   #     # # # #\n");
    printf("\t\t\t  ############################ # # # #\n");
    printf("\t\t\t  #        #                 # #     #\n");
    printf("\t\t\t ### ### ### ###         ### ### ### ###\n");
    printf("\t\t\t # ### ### ### ########### ### ### ### #\n");
    printf("\t\t\t #             #         #             #\n");
    printf("\t\t\t ###############         ###############\n");
    printf("\t\t\t  #                                   #\n");
    printf("\t\t\t   ###########     ###     ###########\n");
    printf("\t\t\t   #         #    #####    #         #\n");
    printf("\t\t\t   #         #   ### ###   #         #\n");
    printf("\t\t\t   #    #    #   ##   ##   #    #    #\n");
    printf("\t\t\t   #   ###   #  ##     ##  #   ###   #\n");
    printf("\t\t\t   #   ###   #  ##     ##  #   ###   #\n");
    printf("\t\t\t   #   ###   #  ##     ##  #   ###   #\n");
    printf("\t\t\t#######################################\n");
}
void choice()
{
    printf("\n\n");
    printf("Your choice: ");
    scanf("%d", &choc);

    if(choc == 1)
    {
        turn = 1;/*Here, 'turn' variable will help the computer decide where to send the player. Eg: if the player chooses to go to forest first, he will go to Slytherin Dorm room next and vice versa*/
        forest();
    }
    else if(choc == 2)
    {
        turn = 3;
        sdr();
    }
    else
    {
        printf("Please enter a valid choice\n");
        choice();
    }
}
void victory()
{
    system("color 4F");
    printf("                                   YOU WIN\n\n");
    printf("               ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,, \n");
    printf("               ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n");
    printf("                 ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,,\n");
    printf("                  ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,,\n");
    printf("       ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,,,,,,,,,,,,,\n");
    printf("       ,,*         ,,,,,,,,,,,,,,,,,,,,,,,,,,,,    ,,,,,,         ,,,\n");
    printf("     ,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,           ,,,\n");
    printf("   ,,,,            ,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,            ,,,,\n");
    printf(" ,,,,,              ,,,,,,,,,,,,,,,,,,,,,,,,,,.   ,,,,,               ,,,,,\n");
    printf(" ,,,,,               ,,,,,,,,,,,,,,,,,,,,,,,,,    ,,,,,               ,,,,,\n");
    printf("  *,,,,              ,,,,,,,,,,,,,,,,,,,,,,,,,    ,,,,,              ,,,,. \n");
    printf("    ,,,,             ,,,,,,,,,,,,,,,,,,,,,,,,,    ,,,,,             ,,,,\n");
    printf("      ,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,    ,,,,,          ,,,,,\n");
    printf("         ,,,,,      ,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,      ,,,,,\n");
    printf("             ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,,,,,,,,, \n");
    printf("                    *,,,,,,,,,,,,,,,,,,,,,,,,,   .,,,,,*\n");
    printf("                      ,,,,,,,,,,,,,,,,,,,,,,,,   ,,,,,\n");
    printf("                       ,,,,,,,,,,,,,,,,,,,,,,   ,,,,,\n");
    printf("                         .,,,,,,,,,,,,,,,,,   ,,,,\n");
    printf("                                ,,,,,,,,,,,,\n");
    printf("                                ,,,,,,,,,,,,\n");
    printf("                                 ,,,,,,,,,,\n");
    printf("                                 ,,,,,,,,,,\n");
    printf("                                 ,,,,,,,,,,\n");
    printf("                                 ,,,,,,,,,,\n");
    printf("                                ,,,,,,,,,,,,\n");
    printf("                              ,,,,,,,,,,,,,,,,\n");
    printf("                          ,,,,,,,,,,,,,,,,,,,,,,,,\n");
    printf("                          ,,,,,,,,,,,,,,,,,,,,,,,,\n");
    printf("                        ############################ \n");
    printf("                        ############################ \n");
    printf("                        ############################ \n");
    printf("                        ############################ \n");
    printf("                        ############################ \n");
    printf("                        ############################ \n");
    printf("                       ||||||||||||||||||||||||||||||\n");

}
int main()
{
    printf("-------------------------------------------------------------------------------------------------------\n");
    printf("|\t          ___                             | '  \\                                              |\n");
    printf("|\t     ___  \\ /  ___         ,'\\_           | .-. \\        /|                                   |\n");
    printf("|\t     \\ /  | |,'__ \\  ,'\\_  |   \\          | | | |      ,' |_   /|                             |\n");
    printf("|\t   _ | |  | |\\/  \\ \\ |   \\ | |\\_|    _    | |_| |   _ '-. .-',' |_   _                        |\n");
    printf("|\t  // | |  | |____| | | |\\_|| |__    //    |     | ,'_`. | | '-. .-',' `. ,'\\_                 |\n");
    printf("|\t  \\\\_| |_,' .-, _  | | |   | |\\ \\  //    .| |\\_/ | / \\ || |   | | / |\\  \\|   \\                |\n");
    printf("|\t   `-. .-'| |/ / | | | |   | | \\ \\//     |  |    | | | || |   | | | |_\\ || |\\_|               |\n");
    printf("|\t     | |  | || \\_| | | |   /_\\  \\ /      | |`    | | | || |   | | | .---'| |                  |\n");
    printf("|\t     | |  | |\\___,_\\ /_\\ _      //       | |     | \\_/ || |   | | | |  /\\| |                  |\n");
    printf("|\t     /_\\  | |           //_____//       .||`      `._,' | |   | | \\ `-' /| |                  |\n");
    printf("|\t          /_\\           `------'        \\ |              `.\\  | |  `._,' /_\\                  |\n");
    printf("|\t                                         \\|                    `.\\                            |\n");
    printf("-------------------------------------------------------------------------------------------------------\n");
    /*Here, two backslashes(\\) are used instead of one(\) to print one backslash(\)*/

    castle();

    printf("\n\n\n");

    printf("Please enter any key to continue: ");
    getch();
    system("cls");

    system("color 1F");/*Here this function is used to change the background and the text color. Here, the first character defines the background and the second defines text*/

    printf("You are Harry Potter. Years ago, when you were an infant, an evil magician named VOLDEMORT killed your parents.\n");
    printf("Your mother died protecting you. Her love saved you and you came to be known as 'The Boy Who Lived'!\n");
    printf("\n");
    printf("When you were 11 years old, you got accepted to the the best school in the world of Witchcraft and Wizardry, The HOGWARTS.\n");
    printf("6 years later you find out that a classmate of yours, Draco Malfoy, is aiding the murderer of your parents.\n");
    printf("\n");
    printf("Dumbledore, the headmaster of the school, asks you to stop them and hence the adventure begins!\n");
    printf("He asks you to go to either the Forest or the Slytherin Dorm Room.\n");
    printf("\n");

    printf("Enter 1 to go to the forest.\n");
    printf("Enter 2 to go to the Slytherin Dorm Room.\n");

    choice();



    printf("\n\nGame Created by: Devarshi Joshi(202003007)\n\n");
    return 0;
}
