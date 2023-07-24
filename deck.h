#ifndef DECK_H
#define DECK_H

/**
 * struct card_s - Representation of a card in a deck
 * @value: Value of the card (e.g., "King", "Queen", "10")
 * @kind: Kind of the card (e.g., "Spades", "Hearts", "Diamonds")
 *
 * Description: A playing card in a deck with a value and a kind.
 */
typedef struct card_s
{
    const char *value;
    const char *kind;
} card_t;

/**
 * struct deck_node_s - Doubly-linked list representation of a deck
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node in the deck
 * @next: Pointer to the next node in the deck
 *
 * Description: A doubly-linked list node representing a card in a deck.
 */
typedef struct deck_node_s
{
    const card_t *card;
    struct deck_node_s *prev;
    struct deck_node_s *next;
} deck_node_t;

/* Function prototypes */
int _strcmp(const char *s1, const char *s2);
char get_value(deck_node_t *card);
void insertion_sort_deck_kind(deck_node_t **deck);
void insertion_sort_deck_value(deck_node_t **deck);
void sort_deck(deck_node_t **deck);

#endif /* DECK_H */
