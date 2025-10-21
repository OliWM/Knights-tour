#include <stdbool.h>
#include <stdio.h>
#include <utils.h>
#define SIZE 8
#define MOVE_COUNT 8

// utils.h and utils.c is an example of how to inlcude a headerfile and how to
// use doxygen. REMEMBER TO DELETE BEFORE YOU SUBMIT! (Or use)
const int MOVES_X[MOVE_COUNT] = {2, 1, -1, -2, -2, -1, 1, 2};
const int MOVES_Y[MOVE_COUNT] = {1, 2, 2, 1, -1, -2, -2, -1};

typedef int board_t[SIZE][SIZE];
bool move_is_possible(size_t move_id, size_t x, size_t y, board_t visited);
unsigned int tour_greedy(size_t start_x, size_t start_y);
void greedy_tour_from_each_square();

board_t board;
board_t visited;
board_t resultBoard;
void greedy_tour_from_each_square() {
  size_t start_x = 0;
  size_t start_y = 0; // initialized til 0 så vi starter i 0,0 og iterer derfra
  for (start_x = 0; start_x < SIZE; start_x++) {
    for (start_y = 0; start_y < SIZE; start_y++)
      tour_greedy(start_x, start_y); // kør touren ved hvert squareint
    resultBoard[start_x][start_y] = tour_greedy(start_x, start_y);
    // sæt det square vi startede ved til værdien af tour_greedy i det punkt så
    // vi ved hvor mange den nåede. (ikke på den måde, det kommer ikke til at
    // virke)
  }
}

unsigned int tour_greedy(size_t start_x, size_t start_y) {
  size_t i;
  int new_x = start_x;
  int new_y = start_y;
  do {
    int new_x = new_x + MOVES_X[i];
    int new_y = new_y + MOVES_Y[i];
    i++;
  } while (!*move_is_possible && i > SIZE);
  // prøv move_count x og y
  // if (move_is_possible) {visited[][] = 1 ; postion_x = postion_x + move_count
  // x osv
};

bool move_is_possible(size_t move_id, size_t x, size_t y, board_t visited) {
  // tag nuværende position + move_id MOVES_X, MOVES_Y og tjek om == 0 eller ej.
}

int main() {

  for (int x = 0; x < SIZE; x++) {
    printf("\n");
    for (int y = 0; y < SIZE; y++)
      printf("%2d", board[x][y]);
  }
  printf("\n");
  return 0;
}
/* int main(void) {
greedy_tour_from_each_square();
return 0;
}*/
// skal implementeres sådan her til sidst

// lav et 8x8 grid

// sæt position

// if board[MOVES_X[i]][MOVES_Y[i]] == 0 {
// }

// lav koordinaterne x og y
// kør et if statement: Afprøv en af de lovlige moves, hvis det er lovligt (Vi
// har en samling moves ala +1-2 -1-2 osv) (inden for 0-7 og feltet er frit) så
// ryk derhen hvis ikke, prøv en anden. Hvis alle ikke var lovlige så slut the
// run. hvis lovligt så ændr. din position (lav en variabel der er yourPosition)
// og ændr det felt til optaget (evt. bare lave en array med besøgte felter)

// backtrack - hvis du rammer noget ulovligt så start sekvensen forfra fra moved
// inden og afprøv alle mulighed. Hvis ikke der er noget lovligt der så gå flere
// moves tilbage. Osv. og log hvad du har prøvet? Meget besværligt måske.
// hvad med at prøve den anden vej fra - start med fuldt udfyldt board og så
// backtrack derfra