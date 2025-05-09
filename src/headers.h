#include <stdio.h>

#define NUM_RESERVED_WORDS 11
#define MAX_RESERVED_WORD_LENGHT 10
#define ASCII_EXTENDED_SIZE 256
#define MAX_TOKEN_LENGHT 256

// Mealy's machine state
typedef struct {
        int number;
        int is_final;
} State;

// Mealy's machine transition;
typedef struct {
        int num_outputs;
        char* output;
        int lookahead;
        State next_state;
} Transition;

typedef struct {
	char token[MAX_TOKEN_LENGHT];
	char class[MAX_TOKEN_LENGHT];
	int end;
} LexicalOutput;

Transition** csv_parser(char* input_file_name);