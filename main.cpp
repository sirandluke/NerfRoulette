#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main() {
  srand(time(0));
  int chambered_round_index = rand() % 6;
  int round = 0;
  int fails = 0;
  string user_input;
  printf("You load a Nerf© N-Strike Maverick REV-6 with a single Nerf N-Strike\nElite Universal Suction Dart, spin the chamber, and ready the blaster.\n");
  printf("---\n\n");
  while (round < 6) {
    printf("Pull the (t)rigger: ");
    getline(cin, user_input);
    if(user_input == "t" and user_input.size() == 1) {
      if(round == chambered_round_index) {
        printf("\nPPPPFFTT! The blaster fired... Ouch!\n");
        return 0;
      } else {
        printf("\nClick... Nothing happened...\n");
        round++;
      }
    } else {
      fails++;
      switch(fails) {
        case 5:
        case 4:
          printf("\nJUST INPUT 't' PLEASE...");
        case 3:
          printf("\nInput 't' and press the `ENTER` key..\n");
          break;
        case 2:
          printf("\nInput 't' to pull the trigger.\n");
          break;
        case 1:
          printf("\nWhat are you waiting for? Pull the trigger.\n");
          break;
        default: 
          printf("\nbruh... (you failed to correctly input 't' %d times)\n", fails);
      }
    }
  }
  printf("The Nerf© N-Strike Maverick REV-6 blaster is deffective and never fired.\n");
  return 1;
}