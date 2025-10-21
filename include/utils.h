/**
 * @file utils.h
 * @brief utlity header file, currently just used to clean strings
 *
 * Cleans strings by making them all uppercase and removing any non-letters
 */

#ifndef utils_h
#define utils_h

/**
 * @brief Turns strings uppercase, removes all non-letters
 *
 *
 * @param wordToBeCleaned Pointer to the string to be cleaned.
 */

void cleanStrings(char *wordToBeCleaned);

#endif