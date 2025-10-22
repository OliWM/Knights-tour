/**
 * @file knights_tour.h
 * @brief Function declarations and constants for the Knight's Tour program.
 *
 * This header defines the core functions and types used to compute
 * knight's tours on an chessboard (currently SIZE 8x8) using a simple greedy
 * algorithm.
 */

// I hope I understood the assignment correctly that you WANT us to use your
// constants, functions and doxygen explanations

#ifndef knights_tour_h
#define knights_tour_h

#include <stdbool.h>
#include <stdio.h>

#define SIZE 8 /* < Board size. */

#define MOVE_COUNT 8

/* @brief Type definition for the chessboard */
typedef int board_t[SIZE][SIZE];

/** Determines whether a move is possible from a starting position.
 *
 * @param move_id One of the 8 moves that the knight wants to make [0, 7]
 * @param x Current horizontal position
 * @param y Current vertical position
 * @param visited A two-dimensional array that represents the squares. If a
 * value is positive, then the corresponding field was visited before.
 * @return True if the move is possible, else false.
 */

bool move_is_possible(size_t move_id, size_t x, size_t y, board_t visited);

/** Attempts a tour by picking the first accessible square.
 *
 * @param start_x Horizontal starting position on the board
 * @param start_y Vertical starting position on the board
 * @return The number of visited squares
 * @note An array is created for the attempt
 */

unsigned int tour_greedy(size_t start_x, size_t start_y);

/** Attempts tours beginning from each square available on the board
 * and annotates the number of visited squares like this:
 *
 * 15  8 15 15
 * 10  6  4 15
 *  8 10 14 14
 * 14 14 14 11
 */
void greedy_tour_from_each_square();

#endif