#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// card structure definition
struct card {
    const char *face;
    const char *suit;
};

typedef struct card Card;

void fillDeck(Card * const deck, const char *faces[], const char *suits[]);
void shuffle(Card * const deck, int n);
void deal(const Card * const deck);

int main(void) {
    Card deck[CARDS];

    const char *faces[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    const char *suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    srand(time(NULL));

    fillDeck(deck, faces, suits);
    shuffle(deck, 52);
    deal(deck);
}

// place strings into Card Structures
void fillDeck(Card * const deck, const char *faces[], const char *suits[]) {
    for (size_t i = 0; i < CARDS; ++i) {
        deck[i].face = faces[i % FACES];
        deck[i].suit = suits[i / FACES];
    }
}

// shuffle cards
/*
void shuffle(Card * const deck) {
    for (size_t i = 0; i < CARDS; ++i) {
        size_t j = rand() % CARDS;
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}
*/

//Fisher Yates
void shuffle(Card * const deck, int n) { //implementation of Fisher
     int i, j; // create local variables to hold values for shuffle
     Card tmp;
     for (i = n - 1; i > 0; i--) { // for loop to shuffle
         j = rand() % (i + 1); //randomise j for shuffle with Fisher Yates
         tmp = deck[j];
         deck[j] = deck[i];
         deck[i] = tmp;
     }
}

// deal cards
void deal(const Card * const deck) {
    for (size_t i = 0; i < CARDS; ++i) {
        printf("%5s of %-8s%s", deck[i].face, deck[i].suit, (i+1)%4? " ":"\n");
    }
}
