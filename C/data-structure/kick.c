// Program where the machine chooses the random number

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int Nrandom, kick, count = 0;
    bool aux = false;

    srand(time(NULL));
    Nrandom = 1 + ( rand() % 1024 );

    while (aux == false) {
        printf("What's your kick 1 to 1024? ");
        scanf("%d", &kick );
      
        if (Nrandom == kick) {
            printf("The Number was | %d | and You got it right | %d | Attempts.", Nrandom, count+1);
            aux = true;
        }
        else if (Nrandom < kick) {
            printf("-1\n");
        }
        else {
            printf("1\n");
        }
        count++;
    }

    return 0;
}

// Program where the user chooses a random number

#include <stdio.h>
#include <stdbool.h>

int main() {
    int cod, kick = 512, count = 0, est = 512;
    bool aux = false;

    printf("------------------------------------\n");
    printf("| Think of a number from 1 to 1024 |\n");
    printf("------------------------------------\n");

    while (aux == false) {
        printf("Number | %d | Was the machine right? ", kick);
        scanf("%d", &cod );
      
        if (cod == 0) {
            printf("The Number was | %d | and the Machine hit | %d | Attempts.", kick, count+1);
            aux = true;
        }
        else if (cod == 1) {
            if (count == 0) {
                est = est/2;  
                kick = kick + est + 1;
            }    
            
            else {
                est = est/2;  
                kick = kick + est;
            }
        }
        else {
            est = est/2; 
            kick = kick - est;
        }
        count++;
    }

    return 0;
}