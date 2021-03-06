#ifndef SCORE_H_INCLUDED
#define SCORE_H_INCLUDED


// Default headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// CSFML header
#include <SFML/Graphics.h>
// Our headers
#include "structs.h"
#include "text.h"

// This function adds a new highscore to TOP 5
int Score_AddHighScore(FILE *highscores, int score);
// This function creates a text by given score
sfText* Score_TextCreate(int score, sfVector2f posScore, int charSize);
// This function creates the text "S C O R E";
sfText* Score_CreateLayout(sfVector2f position, int charSize);
// This sets the score according the current energy bar, after the level's end
float Score_EnergyBar (float energy, float maxEnergy);

#endif // SCORE_H_INCLUDED
