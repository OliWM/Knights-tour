#include "knights_tour.h"
#include <stdio.h>

const int MOVES_X[MOVE_COUNT] = {2, 1, -1, -2, -2, -1, 1, 2};
const int MOVES_Y[MOVE_COUNT] = {1, 2, 2, 1, -1, -2, -2, -1};

board_t board;
board_t resultBoard;

void greedy_tour_from_each_square() {
  size_t start_x = 0;
  size_t start_y = 0; // initialized til 0 så vi starter i 0,0 og iterer derfra
  for (start_x = 0; start_x < SIZE; start_x++) {
    for (start_y = 0; start_y < SIZE; start_y++) {
      unsigned int moves =
          tour_greedy(start_x, start_y); // unsigned fordi den skal være positiv
      resultBoard[start_x][start_y] = moves;
    }
  }
  for (int x = 0; x < SIZE; x++) {
    printf("\n");
    for (int y = 0; y < SIZE; y++)
      printf("%2d ", resultBoard[x][y]);
  }
  printf("\n");
}

unsigned int tour_greedy(size_t start_x, size_t start_y) {
  board_t visited = {0};
  size_t i = 0;
  size_t moves = 1;
  int new_x = start_x;
  int new_y = start_y;
  visited[new_x][new_y] = 1;

  while (true) {
    bool moved = false;
    for (size_t i = 0; i < MOVE_COUNT; i++) {
      if (move_is_possible(i, new_x, new_y, visited)) {
        new_x += MOVES_X[i];
        new_y += MOVES_Y[i];

        moves++;
        visited[new_x][new_y] = 1;
        moved = true;
        break;
      }
    }
    if (!moved) {
      break;
    }
  }
  return moves;
};

bool move_is_possible(size_t move_id, size_t x, size_t y, board_t visited) {
  int new_x = x + MOVES_X[move_id];
  int new_y = y + MOVES_Y[move_id];

  if ((new_x < 0 || new_x >= SIZE) || (new_y < 0 || new_y >= SIZE)) {
    return false;
  }
  if (visited[new_x][new_y] == 1) {
    return false;
  } else {
    return true;
  }
}