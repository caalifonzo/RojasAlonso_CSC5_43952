/*
* Name: Alonso Rojas
* 
* Date: 5/14/2015
* 
*/
//system libraries
#include <cstdlib>
#include<iostream>
#include <fstream>

using namespace std;
//user libraries



//global constants
// These functions are the mechanical part of the game ex: battle/level up
// Most will be used several times throughout the game
void clear_screen();
void title();
void gameover(string &name, int &attack, int &level);
void chk_hp(int &health);
void lvlUP(string &name, int &attack, int &exp, int &level, int &health,
        int &exp_earned);
void battle(string &name, int &attack, int &exp, int &level, int &health,
        string &enemy_name, int &enemy_attack, int &enemy_health);
void save(string &name, int &attack, int &exp, int &level, int &health);
//function prototypes
//All functions below are the actual game itself
// The parameters will stay constant throughout the game. Except for certain
// functions like the game over screen
void game(string &name, int &attack, int &exp, int &level, int &health);
void chest(string &name, int &attack, int &exp, int &level, int &health);
void part1(string &name, int &attack, int &exp, int &level, int &health);
void part1a(string &name, int &attack, int &exp, int &level, int &health);
void part1b(string &name, int &attack, int &exp, int &level, int &health);
void part1c(string &name, int &attack, int &exp, int &level, int &health);
void part2(string &name, int &attack, int &exp, int &level, int &health);
void left(string &name, int &attack, int &exp, int &level, int &health);
void right(string &name, int &attack, int &exp, int &level, int &health);
void part3(string &name, int &attack, int &exp, int &level, int &health);
void part3a(string &name, int &attack, int &exp, int &level, int &health);
void part3b(string &name, int &attack, int &exp, int &level, int &health);
void final(string &name, int &attack, int &exp, int &level, int &health);

//execution begins here
//Main menu/start of game
int main(int argc, char** argv) {

    string name;
    int attack = 1;
    int exp = 0;
    int level = 1;
    int health = 10;
    title();
    cout << "    The year is 2066, The human race has been conquered for 20 years,and put under the tyrannical rule of space aliens"<<endl; 
    cout << "after falling unconscious at a local bar, you wake up in your house "<<endl;
    cout << "and realize that your arm has been replaced with some sort of cybernetic weapon. "<<endl;
    cout << "the arm boots up and says 'thank you for volunteering for the anti-alien cybernetic self defense initiative"<<endl;
    cout << "the choices you make now will effect not only how your future unfolds, but the future of humanity as well \n\n";
    cout << "Before we begin, what is your name? ";
    cin >> name;
    cout << "Alright " << name << ",my name is AARON, short for 'Anti Alien Robotic Obliteration Network' which you and I are part of "<<endl;
    cout << "are you prepared and excited to fight for your species?"<<endl;
    cout << "Yes or no?"<<endl;
    string answer;
    cin >> answer;
    cout << "  Well, unfortunately your answer doesn't matter anyways because where you are"<<endl;
    cout << "going, you are a pawn to our organization, Nothing important at all."<<endl;
    part1(name, attack, exp, level, health);

    return 0;
}

// Clear screen.
void clear_screen() {
    for (int i = 0; i < 50; i++) {
        cout << endl;
    }
}

//Title screen
void title() {
    cout << "     []        [][][][][]     [][][][][][]     [][][][][]     []      "<<endl;
    cout << "               []      []     [][]      []     []      []     []      "<<endl;
    cout << "     []        []      []     [][]      []     []             []      "<<endl;
    cout << "     []        [][][][]       [][][][][]       []  [][][]     []      "<<endl;
    cout << "     []        []    [][]     [][]             []      []             "<<endl;
    cout << "     []        []      [][]   [][]             [][][][][]     []      "<<endl;
    cout << endl;
}

//Game over screen
void gameover(string &name, int &attack, int &level) {
    cout << "                      GAME OVER                            "<<endl<<endl<<endl;
    cout << "You tried taking on the task for your lives sake but failed\n";
    cout << name << " reached up to level " << level << " with an attack\n";
    cout << "power of " << attack << ".\n\n";
    cout << "Try again.";
}

//checks if health is lower than 0. If it is, health assigned to 0.
// This gets rid of any negative values
void chk_hp(int &health)
{
    if(health <= 0)
    {
        health = 0;
    }
    else;
}

// Level up system. 
void lvlUP(string &name, int &attack, int &exp, int &level, int &health, 
        int &exp_earned)
{
    exp += exp_earned*2;
    if(exp > 9 && exp < 19)
    {
        cout << "Congratulations! You have leveled up!\n";
        level += 1;
        attack += 4;
        health += 5;
        cout << "-------------------------------------\n";
        cout << "Level: " << level << "\nAttack: " << attack << "\nHealth "
                << health << endl;
        cout << "-------------------------------------\n";
    }
    else if(exp > 20 && exp < 29)
    {
        cout << "Congratulations! You have leveled up!\n";
        level += 1;
        attack += 8;
        health += 10;
        cout << "-------------------------------------\n";
        cout << "Level: " << level << "\n Attack: " << attack << "\n Health "
                << health << endl;
        cout << "-------------------------------------\n";
    }
    else if(exp > 30 && exp < 100)
    {
        cout << "Congratulations! You have leveled up!\n";
        level += 6;
        attack += 20;
        health += 20;
        cout << "-------------------------------------\n";
        cout << "Level: " << level << "\n Attack: " << attack << "\n Health "
                << health << endl;
        cout << "-------------------------------------\n";       
    }
    else;
    
}

// Battle system/screen 
void battle(string &name, int &attack, int &exp, int &level, int &health,
        string &enemy_name, int &enemy_attack, int &enemy_health) {
    int choice;
    
    int counter = 1;
    int attack1;
    int attack2;
    while (counter == 1) {
        cout << "---------------------------------------------------\n";
        cout << "1.Attack\n2.Flee\n";
        cout << "---------------------------------------------------\n";
        cin >> choice;
        attack1 = rand() %attack;
        attack2 = rand()%enemy_attack;
        if (choice == 1) {
            cout << "You attacked! And dealt " << attack1 << " damage.";
            enemy_health -= attack1;
            chk_hp(enemy_health);
            cout << enemy_name << ": " << enemy_health << " health.\n";
            if(enemy_health > 0)
            {
                cout << "The " << enemy_name << " attacked! And dealt " <<
                    attack2 << " damage.";
                health -= attack2;
                if(health < 0)
                {
                    health = 0;
                    counter = 2;
                }
                cout << name << ": " << health << " health.\n";
                
            }
            else if(enemy_health <= 0)
            {
                cout << "You have defeated " << enemy_name << "! You earned "
                << enemy_attack << " exp.";
                
                counter = 2;
            }
            else;
        } 
        else if (choice == 2) {
            cout << "You decide to flee!\n";
            if (enemy_attack > health) {
                cout << "The " << enemy_name << " has caught up to you and\n";
                cout << "killed you." << endl << endl;
                health -= enemy_attack;
                gameover(name, level, attack);
                counter = 2;
            } 
            else if(health > enemy_attack)
            {
                clear_screen();
                counter = 2;
                cout << "You successfully fled and decided to go into hiding.";
                
                cout << "                      THE END                       ";
            }
        } 
        else;
    }

}

// Save function. Gives the player the option of saving or not
void save(string &name, int &attack, int &exp, int &level, int &health)
{
    cout << "Do you want to save your progress? Y/N?";
    string input;
    cin >> input;
    if(tolower(input[0])=='y')
    {
        ofstream outfile;
        outfile.open("save.txt");
        outfile << "Name: " << name << " Level: " << level
                << " Attack: " << attack  << " Health: " << health 
                << " Exp: " << exp;
    outfile.close();
    }
    else;
}

void game(string &name, int &attack, int &exp, int &level, int &health)
{
    cout << "Aaron says 'in order to guess the password correctly, you need to guess the"<<endl;
    cout << "the number that the machine is thinking of. You will have up to ten"<<endl;
    cout << "opportunities to guess correctly, and I will give"<<endl;
    cout << "hints whether you guessed to high or to low. The only catch"<<endl;
    cout << "is that if you loose you you die."<<endl;
    cout << "So, now, guess a number between 1-100."<<endl;
    srand(time(0));
    int x = rand()%101;
    int i = 1;
    int y;
    do
    {
        cout << "Give me your " << i << " guess."<<endl;
        cin >> y;
        if(y > x)
        {
            cout << "Your entered a number too big.\n" << endl;
            i++;
        }
        else if(y < x)
        {
            cout << "Your number is too small.\n" << endl;
            i++;
        }
        else
        {
            cout << "You guessed correctly!";
            i++;
            chest(name, attack, exp, level, health);
        }
    }while(!(y==x) && i<11);
    if(x==11)
    {
            cout << "you have run out of opportunities.\nGive me\n";
            cout << "the machine will now explode and destroy everything within a 5 mile radius"<<endl;
            cout << "You have " << health << ".\n";
            gameover(name, attack, level);
    }
}

void chest(string &name, int &attack, int &exp, int &level, int &health)
{
    cout << "The machine lock opens the chest for you and inside you find a piece\n"
            << "of alien armor. You wear the item. It boosts your health and attack"
            << " by 30.\n";
    attack += 30;
    health += 30;
    cout << "Health: " << health << endl << "Attack: " << attack << endl;
    part3(name, attack, exp, level, health);
}

//The game is in this format through out with switch case, each lead to a 
// different path.
void part1(string &name, int &attack, int &exp, int &level, int &health) {
    cout << "   Before you can properly respond. Suddenly you hear "<<endl;
    cout << "knocking at your door. Do you choose to answer?"<<endl;
    cout << "1. Answer door.\n2. Leave door closed"<<endl;
    int input;
    cin >> input;
    
    switch (input) {
        case 1:
            cout << "You choose to open the door."<<endl;
            clear_screen();
            part1a(name, attack, exp, level, health);
            break;
        case 2:
            cout << "You choose not to open the door."<<endl;
            clear_screen();
            part1b(name, attack, exp, level, health);
            break;
        default:
            cout << "You stood there doing nothing as the your house was raided and you were killed"
                    << endl << ", since you made the wrong choice."<<endl;
            gameover(name, attack, level);
            break;
    }
    
}

void part1a(string &name, int &attack, int &exp, int &level, int &health) {
    cout << "Still in shock over the bizarre situation, you manage to quickly put on a hoodie to hide your arm, and answer the door"<<endl;
    cout << "At the entrance of your shack, you see a group of scary looking men in suits."<<endl;
    cout << "One approaches you."<<endl;
    cout << "Scary man: Hello citizen, the knights of the Anti Alien Obliteration Network, our leader has given " << name << ",This weapon to"<<endl;
    cout << "explore a human military rebel base which the aliens have taken over."<<endl;
    cout << "That base is said to have humanity's last hope in freeing ourselves from eternal slavery. Will you, " << name << ", follow our"<<endl;
    cout << "orders and save the human race, or disobey and let us take that arm of yours back so we can put it on someone who will?"<<endl;
    cout << "1. Follow the orders\n2. ask them to take the arm off ";
    cout << "exist.\n";
    int input;
    cin >> input;
    switch (input) {
        case 1:
            cout << "You decided to follow orders for your own sake, no, for your people's sake";
            clear_screen();
            part1c(name, attack, exp, level, health);
            break;
        case 2:
            cout << "'Yes! please take this thing off guys, surely this must all be a misunderstanding, im just a "<<endl;
            cout << "simple factory worker!' you say, hoping to quickly be woken from this nightmare;"<<endl;
            clear_screen();
            part1b(name, attack, exp, level, health);
            break;
        default:
            cout << "You stand there terrified, unable to utter a cohesive answer."<<endl;
            cout << "Scary man: damn Ronnie, why are you always picking these cowardly types?"<<endl;
            cout << "he pulls out a gun and shoots you in the face several times"<<endl;
            gameover(name, attack, level);
            break;
    }
}

void part1b(string &name, int &attack, int &exp, int &level, int &health) {
    cout << "Suddenly the door is kicked down, and a couple scary men wearing suits walk in"<<endl;
    cout << "Scary man 1: Damn Ronnie, told you this good-for-nothing drunk wasn't up to the task"<<endl;
    cout << "Scary man 2: I dont know what to tell ya Vinnie, I was at the bar with this guy and he seemed promising, such a shame"<<endl;
    cout << "------------ENTER BATTLE------------\n";
    cout << name << ": Lv: " << level << " Attack: " << attack << " Health: "
            << health << endl;
    string knight = "Knight";
    int knight_lv = 999;
    int knight_atk = 999;
    int knight_health = 999;
    cout << "Knight: Lv:" << knight_lv << " Attack: " << knight_atk
            << " Health: " << knight_health << endl;
    battle(name, attack, exp, level, health, knight, knight_atk, knight_health);
    if (health == 0) {
        gameover(name, attack, level);
    } else; //There is no else statement here because there is no way where you
    // can beat the knight.
}

void part1c(string &name, int &attack, int &exp, int &level, int &health)
{
    cout << "You follow the orders given by the knights. They then lead you to a big black car and"<<endl;
    cout << "drive you to the old base where humanity's last hope resides"<<endl;
    cout << "Knight: Here is the place kid. and here's an upgrade for that arm of yours, Kill the aliens"<<endl;
    cout << "and bring back the weapon. we don't know what it looks like, but you'll know when you get it, Good luck kid."<<endl;
    cout << "The upgrade gives you an attack boost of 10 pts."<<endl;
    attack += 10;
    cout << "Your attack is now " << attack << ".";
    part2(name, attack, exp, level, health);
}

void part2(string &name, int &attack, int &exp, int &level, int &health)
{
    cout << "You enter the cave and right away find yourself face to face"<<endl;
    cout << "with a cave goblin class alien"<<endl;
    string caveGob = "Cave Goblin";
    int caveGob_atk = 5;
    int caveGob_lv = 1;
    int caveGob_hp = 5;
    int temp;
    temp = health;
    cout << "------------ENTER BATTLE------------\n";
    cout << name << ": Lv: " << level << " Attack: " << attack << " Health: "
            << health << endl;
    cout << caveGob << ": Lv: " << caveGob_lv << " Attack: " 
            << caveGob_atk << " Health: " << caveGob_hp << endl;
    battle(name, attack, exp, level, health, caveGob, caveGob_atk, caveGob_hp);
    cout << "Your health is back to its original state.\n";
    health = temp;
    lvlUP(name, attack, exp, level, health, caveGob_atk);
    cout << "You continue walking through the cavern and find yourself \n at a fork"
          << " with a hall leading to the left and one to the right."<<endl;
    cout << "Which path will you take?\n1.Go left.\n2.Go right."<<endl;
    int input;
    cin >> input;
    switch(input)
    {
        case 1:
            cout << "You decided to go left."; 
            save(name, attack, exp, level, health);
            clear_screen();
            left(name, attack, exp, level, health); break;
        case 2:
            cout << "You decided to go right."; 
            save(name, attack, exp, level, health);
            clear_screen();
            right(name, attack, exp, level, health); break;
        default:
            cout << "You somehow manage to split yourself in half by using"<<endl;
            cout << "your chainsaw application on yourself to go in both directions."<<endl;
            cout << "What you didn't realize is that this move kills you."<<endl;
            gameover(name, attack, level); break;
    }
}

void left(string &name, int &attack, int &exp, int &level, int &health)
{
    cout << "You continue down the left hallway and begin to see something at"<<endl;
    cout << "the end of the path."<<endl;
    cout << "To your surprise you find a huge chest marked 'protect at all costs'. Sadly, you dont have the "<<endl;
    cout << "password to open the chest. Out of no where, your arm starts speaking.\n";
    cout << "AARON: If you wish to access the contents of the chest, i could try to hack it for you"<<endl;
    cout << ", unfortunately, the chest seems to be fitted with a security device that could kill you if we mess up"<<endl;
    cout << ", also unfortunately for you, it seems that the device will attack you if you choose to ignore it now"<<endl;
    cout << "Choose wisely.\n";
    cout << "--------------\n";
    cout << "1. try to hack the lock with AARON.\n2. try to escape and be attacked by the security device.\n3. run "
            << "away from the chest .\n";
    int input;
    cin >> input;
    switch(input)
    {
        case 1:
            cout << "'Alright, lets do this AARON, im counting on you'"<<endl;
            save(name, attack, exp, level, health);
            clear_screen();
            game(name, attack, exp, level, health);
             break;
        case 2:
            cout << "'man, screw  this' "<<endl;
            health /= 2;
            cout << "You run away as fast as you can, but you get shot a couple of times. You "
                    "now have " << health <<
                    " health.\n";
            save(name, attack, exp, level, health);
            clear_screen();
            chest(name, attack, exp, level, health); 
             break;
        case 3:
            cout << "'Nah, keep it, well just walk away slowly'"<<endl;
            save(name, attack, exp, level, health);
            part3(name, attack, exp, level, health);
             break;
        default:
            cout << "You remember that before the aliens came, you took one computer science class at your local city college"
                    << " so\n despite having failed the class, you decide to hack it yourself \n"
                    << "Things didn't go as well as you wished, and you get shot up from all directions"
                    << endl << "your corpse lays there, looking like a human swiss cheese \n";
            gameover(name, attack, level);
             break;
    }
}

void right(string &name, int &attack, int &exp, int &level, int &health)
{
    cout << "As you travel forward through the right tunnel you come upon"<<endl;
    cout << "the smell of wet dog and a low growl. Guess what, you walked"<<endl;
    cout << "into a wolf class alien."<<endl;
    cout << "------------ENTER BATTLE------------\n";
    cout << name << ": Lv: " << level << " Attack: " << attack << " Health: "
            << health << endl;
    string wolf = "Wolf";
    int wolf_lv = 2;
    int wolf_atk = 10;
    int wolf_hp = 15;
    int temp = health;
    cout << wolf << ": Lv: " << wolf_lv << " Attack: " << wolf_atk << " Health"
            << ": " << wolf_hp << endl;
    battle(name, attack, exp, level, health, wolf, wolf_atk, wolf_hp);
    if(health == 0)
    {
        gameover(name, attack, level);
    }
    cout << "Your health is back to its original state.\n";
    health = temp;
    lvlUP(name, attack, exp, level, health, wolf_atk);
    cout << "You decide to skin the wolf and wear his fur as a sign of triumph."
            <<"\nYou feel like you have a killer instinct now\n";
    cout << "Health and attack is boosted by 5.\n";
    health += 10;
    attack += 10;
    cout << "Health: " << health << endl << "Attack: " << attack << endl;
    part3(name, attack, exp, level, health);
}

void part3(string &name, int &attack, int &exp, int &level, int &health)
{
    cout << "Finally after, suffering as much as you did "
            << " you find yourself at the cheif alien's hide out.its humanoid,looks almost like the wicked witch from the wizard of Oz."<<endl;
    cout << "Witch: Filthy Huuuuman! I am the strongest specimen from a planet much stronger than this! Dare you try and kill me and be"<<endl;
    cout << "rewarded by the evil Knights who made you do this, or join me, and I will help you achieve"<<endl;
    cout << "greatness. "<<endl;
    cout << "--------------------\n1.Kill her\n2.Spare her\n";
    int input;
    cin >> input;
    switch(input)
    {
        case 1:
            cout << "'Im not doing this for them you ugly witch, im doing it for my people.'"<<endl;
            save(name, attack, exp, level, health);
            clear_screen();
            part3a(name, attack, exp, level, health); break;
        case 2:
            cout << "'The reward from you better be good'."<<endl;
            save(name, attack, exp, level, health);
            clear_screen();
            part3b(name, attack, exp, level, health); break;
        default:
            cout << "you tried to reason with the witch, but when you lowered your guard, she "
                    << "pulled out a lightsaber \nand stabbed you.\n";
            gameover(name, attack, level); break;
            
    }
}

void part3a(string &name, int &attack, int &exp, int &level, int &health)
{
    cout << "'The witch looking alien, looks frail so she isn't much of a match for you.' says AARON "<<endl;
    string witch = "Witch";
    int w_lv = 0;
    int w_atk = 1;
    int w_hp = 1;
    cout << "------------ENTER BATTLE------------\n";
    cout << name << ": Lv: " << level << " Attack: " << attack << " Health: "
            << health << endl;
    cout << witch << ": Lv: " << w_lv << " Attack: " << w_atk << " Health: "
            << w_hp << endl;
    cout << "------------------------------------\n";
    cout << "You empty clip after clip of your machine gun arm application onto her until your positive she is dead. You exit the base and"
            << " make\nyour way to the black car waiting outside "
            << " where the knights in suits are waiting"<<endl;
    cout << "Knight 1:What did I tell ya Vinnie, I knew this was the right guy for the job\n"
            << "Knight 2: well what can i say, looks like even you can be right sometimes, thanks kid, tomorrow you will wake up"
            << "back\nwith your old arm reattached in your crappy shack like none of this ever happened.\n\n";
    cout << "                        THE END                          \n";
    cout << name << " was able to save his/her own life by completing the task."
            << "\nYou went through all that for nothing it seems.maybe it was a dream. Congrats.\n";
    cout << name << endl << "Lv: " << level << endl << "Attack: " << attack
            << endl << "Health: " << health << endl;
    save(name, attack, exp, level, health);
}

void part3b(string &name, int &attack, int &exp, int &level, int &health)
{
    cout << "Witch: So you will spare my life. As i thought, humans have no loyalty toward their people. and here is "
            << "your reward\n";
    cout << "You received the latest in alien technology-powered armor\n";
    cout << "This t-shirt will boost your attack, health, and level "
            << "over 9000!"<<endl;
    level += 9000;
    health += 9000;
    attack += 9000;
    cout << "With this new power you can destroy those corrupt knights "
            << " and\n become a puppet ruler for us. Onward Human!"<<endl;
    save(name, attack, exp, level, health);
    final(name, attack, exp, level, health);
}

void final(string &name, int &attack, int &exp, int &level, int &health)
{
    cout << "You make your way out of the base and find the knights blocking the exit\n"
            << "your path.\n";
    cout << "Knight: What did i tell ya Donnie, i knew he was a traitor the moment i saw him\n";
    cout << "------------ENTER BATTLE------------\n";
    cout << name << ": Lv: " << level << " Attack: " << attack << " Health: "
            << health << endl;
    string knight = "Knight";
    int knight_lv = 999;
    int knight_atk = 999;
    int knight_health = 999;
    cout << "Knight: Lv:" << knight_lv << " Attack: " << knight_atk
            << " Health: " << knight_health << endl;
    battle(name, attack, exp, level, health, knight, knight_atk, knight_health);
    cout << "You easily kill one knight and torture the others until they tell you where their leader is."<<endl;
    cout << "Knight 5: AAARGH ALRIGHT ILL TELL YA, *breaths heavily* hes at the 3rd district house 345 has an underground base"<<endl;
    cout << " you kill the rest and drive there with their black car"<<endl;
    cout << "Knight leader: Hand me that shirt bro, you can't handle it's power, and you for sure cant"<<endl;
    cout << "\noverthrow me, IM GOING TO SAVE HUMANITY!"<<endl;
    cout << "------------------\n1.Overthrow and spare his life.\n2. Kill and "
            << "overthrow.\n3. Hand over the shirt.\n4.Kill everything in your"
            << " path.\n";
    int input;
    cin >> input;
    switch(input)
    {
        case 1:
            cout << "You overthrow the leader and force him \n"
                    << "to live a life of poverty.\n";
            cout << "You now live the life of a king.\n";
            cout << "\n\n                      THE END                      \n";
            save(name, attack, exp, level, health);
            break;
        case 2:
            cout << "You killed him because he's an asshole for making you go through this "
                    << "crap.\n";
            cout << "You now return to your alien overlords, and they declare you king of earth\n";
            cout << "\n\n                      THE END                      \n";
            save(name, attack, exp, level, health);
            break;
        case 3:
            cout << "your way in over your head, you have no idea how to help the world, so you give him the shirt"
                    << "your just a humble factory worker \n you nothing on ruling a planet.\n";
            cout << "You continue being what you know best, a poor factory worker.\n";
            cout << "\n\n                      THE END                      \n";
            save(name, attack, exp, level, health);
            break;
        case 4:
            cout << "with the help of the shirt and AARON, you rage, and kill everything in your path. Literally."
                    << "EVERYTHING.\nYou destroy all aliens and humans alike from all corners of the earth. you are the bad guy now.\n";
            cout << "\n\n                      THE END                      \n";
            save(name, attack, exp, level, health);
            break;
        default:
            cout << "You suddenly wake up and find yourself in a completely\n"
                    << "white room.\n";
            cout << "'Is this a straight jacket?' you ask yourself.\n";
            cout << "'Indeed it is.' says the narrator.";
            cout << "\n\n                      THE END                       \n";
            save(name, attack, exp, level, health);
            break;
            
    }
}