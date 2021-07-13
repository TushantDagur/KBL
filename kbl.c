#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>
#include <MMsystem.h>

char name[50];
void player_info();
void game_rules();
void level1(int);
void level2(int);
void level3(int);
void lifeline_1();
void lifeline_2();
void Winner();

void main()
{
    system("cls"); //clear screen
    int amount_level1 = 0;
    int amount_level2;
    int amount_level3;
    int final_amount;
    int option_level1[3];
    int option_level2[4];
    int option_level3[3];
    int correct_option_lvl1[3] = {1, 2, 4};
    int correct_option_lvl2[4] = {2, 3, 1, 3};
    int correct_option_lvl3[3] = {4, 2, 1};

    system("cls"); //clear screen
//    player_info(); //calling playerinfo f(x)

    system("cls"); //clear screen
    // Calling GAME RULES
    game_rules();
    
    getch();
    system("cls"); //clear screen
    printf("\n_____________________________________________________________________________________________________________________________\n");
    printf("\n\n\n\t\t\t\t\t KBC Welcomes you %s!", name);
    printf("\n\n\t\t\t\t\t Give your Best....All the best...");
    printf("\n\n\t\t\t\t\t AND THE GAME BEGINS... :~)\n\n");
    printf("\n_____________________________________________________________________________________________________________________________\n\n\n\n");

    // Level 1 Gameplay..............................
    system("cls"); //clear screen
    for (int i = 0; i < 3; i++)
    {
        system("cls");
        printf("\t\t\t\t\t******************______________________******************\n\n");
        printf("\t\t\t\t\tPress 0 - Quit\t\t\t\tPress 11 - Lifeline\n\n");
        printf("\t\t\t\t\t******************______________________******************\n\n");
        level1(i);
        scanf("%d", &option_level1[i]);
        if (option_level1[i] == 11)
        {
            lifeline_1();
            level1(i);
            scanf("%d", &option_level1[i]);
            if (option_level1[i] == correct_option_lvl1[i])
            {
            	PlaySound("C:\\Users\\Tushant\\Downloads\\Kbc - Right Answer Sound.wav", NULL, SND_FILENAME | SND_ASYNC);            	
                amount_level1 = pow(2, (i + 1)) * 1000;   //2^n * 1000
                printf("\n\n");
            }
            else{
            	Beep(750, 800);
                Beep(750, 800);
            	amount_level1 = 0;
                break;
			}
        }
        else
		{
        if (option_level1[i] == correct_option_lvl1[i])
        {
            PlaySound("C:\\Users\\Tushant\\Downloads\\Kbc - Right Answer Sound.wav", NULL, SND_FILENAME | SND_ASYNC);
            amount_level1 = pow(2, (i + 1)) * 1000;
            printf("\n\n");
        }
        else
        {
            Beep(750, 800);
            Beep(750, 800);
            amount_level1 = 0;
            break;
        }
        }
    }

    amount_level2 = amount_level1;

    // Level2 gameplay.......................................................
    if (amount_level2 == 8000)   
    {
        for (int i = 0; i < 4; i++)
        {
            system("cls");
            printf("\t\t\t\t\t******************______________________******************\n\n");
            printf("\t\t\t\t\tPress 0 - Quit\t\t\t\tPress 11 - Lifeline\n\n");
            printf("\t\t\t\t\t******************______________________******************\n\n");
            level2(i);
            scanf("%d", &option_level2[i]);
            if (option_level2[i] == 11)
            {
                lifeline_2();
                level2(i);
                scanf("%d", &option_level2[i]);
                if (option_level2[i] == correct_option_lvl2[i])
                {
                	PlaySound("C:\\Users\\Tushant\\Downloads\\Kbc - Right Answer Sound.wav", NULL, SND_FILENAME | SND_ASYNC);
                    amount_level2 = pow(2, (i + 4)) * 1000;
                    printf("\n\n");
                }
                else{
                	Beep(750, 800);
                    Beep(750, 800);
                    amount_level2 = 8000;
                    break;
				}
            }
            else
			{
            if (option_level2[i] == correct_option_lvl2[i])
            {
                PlaySound("C:\\Users\\Tushant\\Downloads\\Kbc - Right Answer Sound.wav", NULL, SND_FILENAME | SND_ASYNC);
                amount_level2 = pow(2, (i + 4)) * 1000;
                printf("\n\n");
            }
            else
            {
                Beep(750, 800);
                Beep(750, 800);
                amount_level2 = 8000;
                break;
            }
			}
        }
    }

    amount_level3 = amount_level2;

    // Level 3 Gameplay......................................
    if (amount_level3 == 128000)
    {
        for (int i = 0; i < 3; i++)
        {
            system("cls");
            printf("\t\t\t\t\t******************______________________******************\n\n");
            printf("\t\t\t\t\t\t\t\tPress 0 - Quit\n\n");
            printf("\t\t\t\t\t******************______________________******************\n\n");
            level3(i);
            scanf("%d", &option_level3[i]);
            if (option_level3[i] == correct_option_lvl3[i])
            {
                if (i < 2)
                {
                    PlaySound("C:\\Users\\Tushant\\Downloads\\Kbc - Right Answer Sound.wav", NULL, SND_FILENAME | SND_ASYNC);
                }
                else
                {
                    amount_level3 = pow(2, i + 8) * 1000;
                    printf("\n\n");
                }
            }
            else
            {
                Beep(750, 800);
                Beep(750, 800);
                amount_level3 = 128000;
                break;
            }
        }
    }

    system("cls");
    getchar();
    final_amount = amount_level3;
    if (final_amount == 1024000)
    {
        PlaySound("C:\\Users\\Tushant\\Downloads\\Kbc - Audience Clapping.wav", NULL, SND_FILENAME | SND_ASYNC);
        Winner();
        printf("\t\t\t\t\t\t   Amount - %d\n\n\n", final_amount);
    }
    else if (final_amount >= 128000){
        system("cls");
        printf("\n\t\t\t  ..........................Sorry......................");
        printf("\n\t\t\t.....................Better Luck Next Time :) .......................");
        printf("\n\t\t\t  ..........................%s.......................\n\n", name);

        printf("\t\t\t\t\t\t\t%s\n\n\n", name);
        printf("\t\t\t\t\t\t   Amount - %d\n\n\n", final_amount);
    }
    else if(final_amount >= 8000){
        system("cls");
        printf("\n\t\t\t  ..........................Sorry......................");
        printf("\n\t\t\t.....................Better Luck Next Time :) .......................");
        printf("\n\t\t\t  ..........................%s.......................\n\n", name);

        printf("\t\t\t\t\t\t\t%s\n\n\n", name);
        printf("\t\t\t\t\t\t   Amount - %d\n\n\n", final_amount);
    }
    else{
        system("cls");
        printf("\n\t\t\t  ..........................Sorry......................");
        printf("\n\t\t\t.....................Better Luck Next Time :) .......................");
        printf("\n\t\t\t  ..........................%s.......................\n\n", name);

        printf("\t\t\t\t\t\t\t%s\n\n\n", name);
        printf("\t\t\t\t\t\t   Amount - %d\n\n\n", final_amount);
    }
}

void player_info()
{
    char address[100], email[50], bank[50], ifsc[15], sex[8];
    int age;
    long int account_no, contact;
    printf("\n\n");
    printf("\t\t\t\t\"WELCOME TO KON BANEGA LAKHPATI\"");
    printf("\n\n\tKINDLY FILL THE FORM BEFORE STARTING THE GAME.");
    printf("\n\n Name - ");
    scanf(" %[^\n]%*c", name);
    printf(" Age - ");
    scanf("%d", &age);
    printf(" Gender - ");
    scanf("%s", sex);
    printf(" Address - ");
    scanf(" %[^\n]%*c", address);
    printf(" Email ID - ");
    scanf("%s", email);
    printf(" Bank - ");
    scanf(" %[^\n]%*c", bank);
    printf(" Bank Account No. - ");
    scanf("%ld", &account_no);
    printf(" IFSC Code - ");
    scanf("%s", ifsc);
    printf(" Phone Number - ");
    scanf("%ld", &contact);
    getch();
}

void game_rules()
{
    printf("\n\t\t\t\t\tKBL Game Rules: -");
    printf("\n\n RULE 1 -> Total Questions = 10");
    printf("\n\n RULE 2 -> The total question will be divided into 3 Levels.");
    printf("\n\t    Level 1 = Question 1 - 3");
    printf("\n\t    Level 2 = Question 4 - 7");
    printf("\n\t    Level 3 = Question 8 - 10");
    printf("\n\n RULE 3 -> You can quit the game if you don't know the answer. The money which you have won before that question will be awarded to you.");
    printf("\n\n RULE 4 -> Lifeline - 2 (50:50 and Audience Poll)\n\t\t50-50 :: can be used in only Level 1\n\t\tAudience Poll :: can be used in only level 2\n");
    printf("\n\n Rule 5 -> The amount of money you will be getting after giving correct answer of the questions are as follows: - ");
    printf("\n\t    Question 1 = INR2,000");
    printf("\n\t    Question 2 = INR4,000");
    printf("\n\t    Question 3 = INR8,000");
    printf("\n\t    Question 4 = INR16,000");
    printf("\n\t    Question 5 = INR32,000");
    printf("\n\t    Question 6 = INR64,000");
    printf("\n\t    Question 7 = INR1,28,000");
    printf("\n\t    Question 8 = INR2,56,000");
    printf("\n\t    Question 9 = INR5,12,000");
    printf("\n\t    Question 10 = INR10,24,000");
    printf("\n\n Rule 6 -> If you give wrong answer of any question then you will be dropped to last level that you have passed. For example, if you have ");
    printf("\n           passed level 1 and you gave wrong answer of question 5 then the money which you will get will be of Question 3. If you have not");
    printf("\n           passed any level and you gave wrong answer of a question then you will not get any money.");
    printf("\n\n Rule 7 -> The game will end if: -");
    printf("\n\t    a) The answer is incorrect of that particular question.");
    printf("\n\t    b) The person quits the game.");
    printf("\n\t    a) The person has answered all the questions correctly.");
    printf("\n\n NOTE - On quiting, the money which you will get will be the last question that you answered correctly.");
    printf("\n        And if you give the wrong answer, then the money which you will get will be the last phase that you passed.\n\n");
    printf("\t\t\t\t.....................Press Enter key to Continue.................\n");
    getchar();
}

void level1(int n)
{
    switch (n)
    {
    case 0:
        printf("International Literacy Day is observed on\n1.Sep 8\t\t2.Nov 28\n3.May 2\t\t4.Sep 22\n");
        break;

    case 1:
        printf("\nIn which of these universities did the Chinese traveller Huan Tsang study when he visited India during Emperor Harsha's reign?\n1.Somapura\t\t2.Nalanda\n3.Vikramashila\t\t4.Takshashila\n");
        break;

    case 2:
        printf("\nIndian-American business executive Arvind Krishna became the CEO of which American multinational technology company in 2020?\n1.Oracle\t\t2.Microsoft\n3.Amazon\t\t4.IBM\n");
        break;

    default:
        break;
    }
}

void level2(int n)
{
    switch (n)
    {
    case 0:
        printf("\nWho wrote the poem \" Jantantra Ka Janm \" that features the line 'Singhasan Khaali Ke Janata Aati Hai'?\n1.Bhawani Prasad Mishra\t\t2.Ramdhari Singh Dinkar\n3.Rambriksh Benipuri\t\t4.Namvar Singh\n");
        break;

    case 1:
        printf("\nAccording to the Brahmananda Purana, which of these sages was born out of the anger of Lord Shiva?\n1.Parashurama\t\t2.Vishwamitra\n3.Durvasa\t\t4.Atri\n");
        break;

    case 2:
        printf("\nWhich of these Chief Justices of India also served as an acting President of India?\n1.Mohammad Hidayatullah\t\t2.Deepak Misra\n3.K Subba Rao\t\t4.Mirza Hameedullah Beg\n");
        break;

    case 3:
        printf("\nAgni Ki Udaan is the Hindi translation of which personality's autobiography?\n1.Homi Jehagir Bhabha\t\t2.Kalpana Chawla\n3.APJ Abdul Kalam\t\t4.Vikram Sarabhai\n");
        break;
    default:
        break;
    }
}

void level3(int n)
{
    switch (n)
    {
    case 0:
        printf("During the Battle of Kurukshetra, Krishna deceived the Kauravas by hiding the sun behind clouds to enable Arjuna to kill whom?\n1.Shakuni\t\t2.Dronacharya\n3.Dushasana\t\t4.Jayadratha.\n");
        break;

    case 1:
        printf("Which company is the world's largest manufacturer of vaccines by number of doses produced (volume)\n1.Biocon\t\t2.Serum Institute\n3.Indian Immunologicals\t\t4.Bharat Biotech\n");
        break;

    case 2:
        printf("The film in which this song features is based on which battle?\nHost Amitabh Bachchan played the video clip of \" Teri Mitti \" from Akshay Kumar starrer Kesari.\n1.Battle of Saragarhi\t\t2.Battle of Chamkaur\n3.Battle of Plassey\t\t4.Battle of Buxar\n");
        break;

    default:
        break;
    }
}

void lifeline_1()
{
    int random_1, random_2;
    srand(time(0));            //seed or root for random Number
    random_1 = rand() % 2 + 1; //random no. - 1 or 2
    //random no. - 3 or 4
    random_2 = rand() % 2 + 3; // (rand() % (upper – lower + 1)) + lower
    printf("\n\n------------------------------------------********50:50***********-----------------------------------------------\n\n");
    printf("Option %d\t\tOption %d\n\n", random_1, random_2);
    printf("\n\n------------------------------------------********50:50***********-----------------------------------------------\n\n");
}

void lifeline_2()
{
    int random1, random2, random3, random4;
    srand(time(0));
    random1 = rand() % 30 + 1;
    random2 = rand() % 20 + 1;
    random3 = 92 - (random1 + random2);
    random4 = 8;
    printf("\n\n------------------------------------------********Audience Poll***********-----------------------------------------------\n\n");
    printf("Option 1 ------------> \t%.2d%%\n", random1);
    printf("Option 2 ------------> \t%.2d%%\n", random2);
    printf("Option 3 ------------> \t%.2d%%\n", random3);
    printf("Option 4 ------------> \t%.2d%%\n", random4);
    printf("\n\n------------------------------------------********Audience Poll***********-----------------------------------------------\n\n");
}

void Winner()
{
    system("cls");
    getchar();
    printf("\n\t\t\t  ..........................Congratulations......................");
    printf("\n\t\t\t........................Lakhpati of the day.......................");
    printf("\n\t\t\t  .......................... %s.......................\n\n", name);

    printf("\n\n\n\t\t\t\t\t\t\t    Winner\n");
    printf("\t\t\t\t\t\t\t%s\n\n\n", name);
}