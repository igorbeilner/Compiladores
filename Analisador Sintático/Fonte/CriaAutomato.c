#include "Simulador.h"

//Dodos dois inteiros que representam o número de vértices e o número de arestas,
//esta função constroi um digrafo
Digraph *Constroi() {
   Digraph *G = DigraphInit(65);

/*******************************************/
/**************** Token MAIN ***************/
   DigraphInsertA(G, 0, 0, ' ');
   DigraphInsertA(G, 0, 0, '\n');
   DigraphInsertA(G, 0, 0, '\t');
   DigraphInsertA(G, 0, 0, '+');
   DigraphInsertA(G, 0, 0, '-');
   DigraphInsertA(G, 0, 0, '/');
   DigraphInsertA(G, 0, 0, '*');
   DigraphInsertA(G, 0, 0, '(');
   DigraphInsertA(G, 0, 0, ')');
   DigraphInsertA(G, 0, 0, '=');
   DigraphInsertA(G, 0, 0, '!');
   DigraphInsertA(G, 0, 0, '<');
   DigraphInsertA(G, 0, 0, '>');
   DigraphInsertA(G, 0, 0, ';');

   DigraphInsertA(G, 0, 1, 'M');
   DigraphInsertA(G, 1, 2, 'A');
   DigraphInsertA(G, 2, 3, 'I');
   DigraphInsertA(G, 3, 4, 'N');
   DigraphInsertA(G, 4, 36, ' ');
   DigraphInsertA(G, 4, 36, '\n');
   DigraphInsertA(G, 4, 36, '\t');
   DigraphInsertA(G, 4, 0, ' ');
   DigraphInsertA(G, 4, 0, '\n');
   DigraphInsertA(G, 4, 0, '\t');

   DigraphInsertA(G, 1, 62, ' ');
   DigraphInsertA(G, 2, 62, ' ');
   DigraphInsertA(G, 3, 62, ' ');
   DigraphInsertA(G, 1, 62, '\n');
   DigraphInsertA(G, 2, 62, '\n');
   DigraphInsertA(G, 3, 62, '\n');
   DigraphInsertA(G, 1, 62, '\t');
   DigraphInsertA(G, 2, 62, '\t');
   DigraphInsertA(G, 3, 62, '\t');

   DigraphInsertA(G, 1, 62, '+');
   DigraphInsertA(G, 2, 62, '+');
   DigraphInsertA(G, 3, 62, '+');
   DigraphInsertA(G, 1, 62, '=');
   DigraphInsertA(G, 2, 62, '=');
   DigraphInsertA(G, 3, 62, '=');
   DigraphInsertA(G, 1, 62, '-');
   DigraphInsertA(G, 2, 62, '-');
   DigraphInsertA(G, 3, 62, '-');
   DigraphInsertA(G, 1, 62, '*');
   DigraphInsertA(G, 2, 62, '*');
   DigraphInsertA(G, 3, 62, '*');
   DigraphInsertA(G, 1, 62, '/');
   DigraphInsertA(G, 2, 62, '/');
   DigraphInsertA(G, 3, 62, '/');
   DigraphInsertA(G, 1, 62, '(');
   DigraphInsertA(G, 2, 62, '(');
   DigraphInsertA(G, 3, 62, '(');
   DigraphInsertA(G, 1, 62, ')');
   DigraphInsertA(G, 2, 62, ')');
   DigraphInsertA(G, 3, 62, ')');
   DigraphInsertA(G, 1, 62, '<');
   DigraphInsertA(G, 2, 62, '<');
   DigraphInsertA(G, 3, 62, '<');
   DigraphInsertA(G, 1, 62, '>');
   DigraphInsertA(G, 2, 62, '>');
   DigraphInsertA(G, 3, 62, '>');
   DigraphInsertA(G, 1, 62, '!');
   DigraphInsertA(G, 2, 62, '!');
   DigraphInsertA(G, 3, 62, '!');
   DigraphInsertA(G, 1, 62, ';');
   DigraphInsertA(G, 2, 62, ';');
   DigraphInsertA(G, 3, 62, ';');

   DigraphInsertA(G, 1, 0, ' ');
   DigraphInsertA(G, 2, 0, ' ');
   DigraphInsertA(G, 3, 0, ' ');
   DigraphInsertA(G, 1, 0, '\n');
   DigraphInsertA(G, 2, 0, '\n');
   DigraphInsertA(G, 3, 0, '\n');
   DigraphInsertA(G, 1, 0, '\t');
   DigraphInsertA(G, 2, 0, '\t');
   DigraphInsertA(G, 3, 0, '\t');
   DigraphInsertA(G, 1, 0, '+');
   DigraphInsertA(G, 2, 0, '+');
   DigraphInsertA(G, 3, 0, '+');
   DigraphInsertA(G, 1, 0, '=');
   DigraphInsertA(G, 2, 0, '=');
   DigraphInsertA(G, 3, 0, '=');
   DigraphInsertA(G, 1, 0, '-');
   DigraphInsertA(G, 2, 0, '-');
   DigraphInsertA(G, 3, 0, '-');
   DigraphInsertA(G, 1, 0, '*');
   DigraphInsertA(G, 2, 0, '*');
   DigraphInsertA(G, 3, 0, '*');
   DigraphInsertA(G, 1, 0, '/');
   DigraphInsertA(G, 2, 0, '/');
   DigraphInsertA(G, 3, 0, '/');
   DigraphInsertA(G, 1, 0, '(');
   DigraphInsertA(G, 2, 0, '(');
   DigraphInsertA(G, 3, 0, '(');
   DigraphInsertA(G, 1, 0, ')');
   DigraphInsertA(G, 2, 0, ')');
   DigraphInsertA(G, 3, 0, ')');
   DigraphInsertA(G, 1, 0, '<');
   DigraphInsertA(G, 2, 0, '<');
   DigraphInsertA(G, 3, 0, '<');
   DigraphInsertA(G, 1, 0, '>');
   DigraphInsertA(G, 2, 0, '>');
   DigraphInsertA(G, 3, 0, '>');
   DigraphInsertA(G, 1, 0, '!');
   DigraphInsertA(G, 2, 0, '!');
   DigraphInsertA(G, 3, 0, '!');
   DigraphInsertA(G, 1, 0, ';');
   DigraphInsertA(G, 2, 0, ';');
   DigraphInsertA(G, 3, 0, ';');

   DigraphInsertA(G, 4, 51, '+');
   DigraphInsertA(G, 4, 52, '-');
   DigraphInsertA(G, 4, 53, '/');
   DigraphInsertA(G, 4, 54, '*');
   DigraphInsertA(G, 4, 55, '(');
   DigraphInsertA(G, 4, 56, ')');
   DigraphInsertA(G, 4, 57, '=');
   DigraphInsertA(G, 4, 58, '!');
   DigraphInsertA(G, 4, 59, '<');
   DigraphInsertA(G, 4, 60, '>');
   DigraphInsertA(G, 4, 61, ';');

   DigraphInsertA(G, 4, 36, '+');
   DigraphInsertA(G, 4, 36, '-');
   DigraphInsertA(G, 4, 36, '/');
   DigraphInsertA(G, 4, 36, '*');
   DigraphInsertA(G, 4, 36, '(');
   DigraphInsertA(G, 4, 36, ')');
   DigraphInsertA(G, 4, 36, '=');
   DigraphInsertA(G, 4, 36, '!');
   DigraphInsertA(G, 4, 36, '<');
   DigraphInsertA(G, 4, 36, '>');
   DigraphInsertA(G, 4, 36, ';');

   DigraphInsertA(G, 4, 0, '+');
   DigraphInsertA(G, 4, 0, '-');
   DigraphInsertA(G, 4, 0, '/');
   DigraphInsertA(G, 4, 0, '*');
   DigraphInsertA(G, 4, 0, '(');
   DigraphInsertA(G, 4, 0, ')');
   DigraphInsertA(G, 4, 0, '=');
   DigraphInsertA(G, 4, 0, '!');
   DigraphInsertA(G, 4, 0, '<');
   DigraphInsertA(G, 4, 0, '>');
   DigraphInsertA(G, 4, 0, ';');

/********************************************/
/**************** Token WHILE ***************/

   DigraphInsertA(G, 0, 5, 'W');
   DigraphInsertA(G, 5, 6, 'H');
   DigraphInsertA(G, 6, 7, 'I');
   DigraphInsertA(G, 7, 8, 'L');
   DigraphInsertA(G, 8, 9, 'E');
   DigraphInsertA(G, 9, 37, ' ');
   DigraphInsertA(G, 9, 37, '\n');
   DigraphInsertA(G, 9, 37, '\t');
   DigraphInsertA(G, 9, 0, ' ');
   DigraphInsertA(G, 9, 0, '\n');
   DigraphInsertA(G, 9, 0, '\t');

   DigraphInsertA(G, 5, 62, ' ');
   DigraphInsertA(G, 6, 62, ' ');
   DigraphInsertA(G, 7, 62, ' ');
   DigraphInsertA(G, 8, 62, ' ');
   DigraphInsertA(G, 5, 62, '\n');
   DigraphInsertA(G, 6, 62, '\n');
   DigraphInsertA(G, 7, 62, '\n');
   DigraphInsertA(G, 8, 62, '\n');
   DigraphInsertA(G, 5, 62, '\t');
   DigraphInsertA(G, 6, 62, '\t');
   DigraphInsertA(G, 7, 62, '\t');
   DigraphInsertA(G, 8, 62, '\t');

   DigraphInsertA(G, 5, 62, '+');
   DigraphInsertA(G, 6, 62, '+');
   DigraphInsertA(G, 7, 62, '+');
   DigraphInsertA(G, 8, 62, '+');
   DigraphInsertA(G, 5, 62, '-');
   DigraphInsertA(G, 6, 62, '-');
   DigraphInsertA(G, 7, 62, '-');
   DigraphInsertA(G, 8, 62, '-');
   DigraphInsertA(G, 5, 62, '*');
   DigraphInsertA(G, 6, 62, '*');
   DigraphInsertA(G, 7, 62, '*');
   DigraphInsertA(G, 8, 62, '*');
   DigraphInsertA(G, 5, 62, '/');
   DigraphInsertA(G, 6, 62, '/');
   DigraphInsertA(G, 7, 62, '/');
   DigraphInsertA(G, 8, 62, '/');
   DigraphInsertA(G, 5, 62, '=');
   DigraphInsertA(G, 6, 62, '=');
   DigraphInsertA(G, 7, 62, '=');
   DigraphInsertA(G, 8, 62, '=');
   DigraphInsertA(G, 5, 62, '(');
   DigraphInsertA(G, 6, 62, '(');
   DigraphInsertA(G, 7, 62, '(');
   DigraphInsertA(G, 8, 62, '(');
   DigraphInsertA(G, 5, 62, ')');
   DigraphInsertA(G, 6, 62, ')');
   DigraphInsertA(G, 7, 62, ')');
   DigraphInsertA(G, 8, 62, ')');
   DigraphInsertA(G, 5, 62, '<');
   DigraphInsertA(G, 6, 62, '<');
   DigraphInsertA(G, 7, 62, '<');
   DigraphInsertA(G, 8, 62, '<');
   DigraphInsertA(G, 5, 62, '>');
   DigraphInsertA(G, 6, 62, '>');
   DigraphInsertA(G, 7, 62, '>');
   DigraphInsertA(G, 8, 62, '>');
   DigraphInsertA(G, 5, 62, '!');
   DigraphInsertA(G, 6, 62, '!');
   DigraphInsertA(G, 7, 62, '!');
   DigraphInsertA(G, 8, 62, '!');
   DigraphInsertA(G, 5, 62, ';');
   DigraphInsertA(G, 6, 62, ';');
   DigraphInsertA(G, 7, 62, ';');
   DigraphInsertA(G, 8, 62, ';');

   DigraphInsertA(G, 5, 0, ' ');
   DigraphInsertA(G, 6, 0, ' ');
   DigraphInsertA(G, 7, 0, ' ');
   DigraphInsertA(G, 8, 0, ' ');
   DigraphInsertA(G, 5, 0, '\n');
   DigraphInsertA(G, 6, 0, '\n');
   DigraphInsertA(G, 7, 0, '\n');
   DigraphInsertA(G, 8, 0, '\n');
   DigraphInsertA(G, 5, 0, '\t');
   DigraphInsertA(G, 6, 0, '\t');
   DigraphInsertA(G, 7, 0, '\t');
   DigraphInsertA(G, 8, 0, '\t');
   DigraphInsertA(G, 5, 0, '+');
   DigraphInsertA(G, 6, 0, '+');
   DigraphInsertA(G, 7, 0, '+');
   DigraphInsertA(G, 8, 0, '+');
   DigraphInsertA(G, 5, 0, '-');
   DigraphInsertA(G, 6, 0, '-');
   DigraphInsertA(G, 7, 0, '-');
   DigraphInsertA(G, 8, 0, '-');
   DigraphInsertA(G, 5, 0, '*');
   DigraphInsertA(G, 6, 0, '*');
   DigraphInsertA(G, 7, 0, '*');
   DigraphInsertA(G, 8, 0, '*');
   DigraphInsertA(G, 5, 0, '/');
   DigraphInsertA(G, 6, 0, '/');
   DigraphInsertA(G, 7, 0, '/');
   DigraphInsertA(G, 8, 0, '/');
   DigraphInsertA(G, 5, 0, '=');
   DigraphInsertA(G, 6, 0, '=');
   DigraphInsertA(G, 7, 0, '=');
   DigraphInsertA(G, 8, 0, '=');
   DigraphInsertA(G, 5, 0, '(');
   DigraphInsertA(G, 6, 0, '(');
   DigraphInsertA(G, 7, 0, '(');
   DigraphInsertA(G, 8, 0, '(');
   DigraphInsertA(G, 5, 0, ')');
   DigraphInsertA(G, 6, 0, ')');
   DigraphInsertA(G, 7, 0, ')');
   DigraphInsertA(G, 8, 0, ')');
   DigraphInsertA(G, 5, 0, '<');
   DigraphInsertA(G, 6, 0, '<');
   DigraphInsertA(G, 7, 0, '<');
   DigraphInsertA(G, 8, 0, '<');
   DigraphInsertA(G, 5, 0, '>');
   DigraphInsertA(G, 6, 0, '>');
   DigraphInsertA(G, 7, 0, '>');
   DigraphInsertA(G, 8, 0, '>');
   DigraphInsertA(G, 5, 0, '!');
   DigraphInsertA(G, 6, 0, '!');
   DigraphInsertA(G, 7, 0, '!');
   DigraphInsertA(G, 8, 0, '!');
   DigraphInsertA(G, 5, 0, ';');
   DigraphInsertA(G, 6, 0, ';');
   DigraphInsertA(G, 7, 0, ';');
   DigraphInsertA(G, 8, 0, ';');

   DigraphInsertA(G, 9, 51, '+');
   DigraphInsertA(G, 9, 52, '-');
   DigraphInsertA(G, 9, 53, '/');
   DigraphInsertA(G, 9, 54, '*');
   DigraphInsertA(G, 9, 55, '(');
   DigraphInsertA(G, 9, 56, ')');
   DigraphInsertA(G, 9, 57, '=');
   DigraphInsertA(G, 9, 58, '!');
   DigraphInsertA(G, 9, 59, '<');
   DigraphInsertA(G, 9, 60, '>');
   DigraphInsertA(G, 9, 61, ';');

   DigraphInsertA(G, 9, 37, '+');
   DigraphInsertA(G, 9, 37, '-');
   DigraphInsertA(G, 9, 37, '/');
   DigraphInsertA(G, 9, 37, '*');
   DigraphInsertA(G, 9, 37, '(');
   DigraphInsertA(G, 9, 37, ')');
   DigraphInsertA(G, 9, 37, '=');
   DigraphInsertA(G, 9, 37, '!');
   DigraphInsertA(G, 9, 37, '<');
   DigraphInsertA(G, 9, 37, '>');
   DigraphInsertA(G, 9, 37, ';');

   DigraphInsertA(G, 9, 0, '+');
   DigraphInsertA(G, 9, 0, '-');
   DigraphInsertA(G, 9, 0, '/');
   DigraphInsertA(G, 9, 0, '*');
   DigraphInsertA(G, 9, 0, '(');
   DigraphInsertA(G, 9, 0, ')');
   DigraphInsertA(G, 9, 0, '=');
   DigraphInsertA(G, 9, 0, '!');
   DigraphInsertA(G, 9, 0, '<');
   DigraphInsertA(G, 9, 0, '>');
   DigraphInsertA(G, 9, 0, ';');

/*******************************************/
/**************** Token IF *****************/

   DigraphInsertA(G, 0, 10, 'I');
   DigraphInsertA(G, 10, 11, 'F');
   DigraphInsertA(G, 11, 38, ' ');
   DigraphInsertA(G, 11, 38, '\n');
   DigraphInsertA(G, 11, 38, '\t');
   DigraphInsertA(G, 11, 0, ' ');
   DigraphInsertA(G, 11, 0, '\n');
   DigraphInsertA(G, 11, 0, '\t');

   DigraphInsertA(G, 10, 62, ' ');
   DigraphInsertA(G, 10, 62, '\n');
   DigraphInsertA(G, 10, 62, '\t');

   DigraphInsertA(G, 10, 62, '+');
   DigraphInsertA(G, 10, 62, '-');
   DigraphInsertA(G, 10, 62, '*');
   DigraphInsertA(G, 10, 62, '/');
   DigraphInsertA(G, 10, 62, '(');
   DigraphInsertA(G, 10, 62, ')');
   DigraphInsertA(G, 10, 62, '=');
   DigraphInsertA(G, 10, 62, '<');
   DigraphInsertA(G, 10, 62, '>');
   DigraphInsertA(G, 10, 62, '!');
   DigraphInsertA(G, 10, 62, ';');

   DigraphInsertA(G, 10, 0, ' ');
   DigraphInsertA(G, 10, 0, '\n');
   DigraphInsertA(G, 10, 0, '\t');
   DigraphInsertA(G, 10, 0, '+');
   DigraphInsertA(G, 10, 0, '-');
   DigraphInsertA(G, 10, 0, '*');
   DigraphInsertA(G, 10, 0, '/');
   DigraphInsertA(G, 10, 0, '(');
   DigraphInsertA(G, 10, 0, ')');
   DigraphInsertA(G, 10, 0, '=');
   DigraphInsertA(G, 10, 0, '<');
   DigraphInsertA(G, 10, 0, '>');
   DigraphInsertA(G, 10, 0, '!');
   DigraphInsertA(G, 10, 0, ';');

   DigraphInsertA(G, 11, 51, '+');
   DigraphInsertA(G, 11, 52, '-');
   DigraphInsertA(G, 11, 53, '/');
   DigraphInsertA(G, 11, 54, '*');
   DigraphInsertA(G, 11, 55, '(');
   DigraphInsertA(G, 11, 56, ')');
   DigraphInsertA(G, 11, 57, '=');
   DigraphInsertA(G, 11, 58, '!');
   DigraphInsertA(G, 11, 59, '<');
   DigraphInsertA(G, 11, 60, '>');
   DigraphInsertA(G, 11, 61, ';');

   DigraphInsertA(G, 11, 38, '+');
   DigraphInsertA(G, 11, 38, '-');
   DigraphInsertA(G, 11, 38, '/');
   DigraphInsertA(G, 11, 38, '*');
   DigraphInsertA(G, 11, 38, '(');
   DigraphInsertA(G, 11, 38, ')');
   DigraphInsertA(G, 11, 38, '=');
   DigraphInsertA(G, 11, 38, '!');
   DigraphInsertA(G, 11, 38, '<');
   DigraphInsertA(G, 11, 38, '>');
   DigraphInsertA(G, 11, 38, ';');

   DigraphInsertA(G, 11, 0, '+');
   DigraphInsertA(G, 11, 0, '-');
   DigraphInsertA(G, 11, 0, '/');
   DigraphInsertA(G, 11, 0, '*');
   DigraphInsertA(G, 11, 0, '(');
   DigraphInsertA(G, 11, 0, ')');
   DigraphInsertA(G, 11, 0, '=');
   DigraphInsertA(G, 11, 0, '!');
   DigraphInsertA(G, 11, 0, '<');
   DigraphInsertA(G, 11, 0, '>');
   DigraphInsertA(G, 11, 0, ';');

/*******************************************/
/************** Token END E ELSE ***********/

   DigraphInsertA(G, 0, 12, 'E');

   DigraphInsertA(G, 12, 13, 'N');
   DigraphInsertA(G, 13, 14, 'D');
   DigraphInsertA(G, 14, 39, ' ');
   DigraphInsertA(G, 14, 39, '\n');
   DigraphInsertA(G, 14, 39, '\t');
   DigraphInsertA(G, 14, 0, ' ');
   DigraphInsertA(G, 14, 0, '\n');
   DigraphInsertA(G, 14, 0, '\t');

   DigraphInsertA(G, 12, 62, ' ');
   DigraphInsertA(G, 13, 62, ' ');
   DigraphInsertA(G, 12, 62, '\n');
   DigraphInsertA(G, 13, 62, '\n');
   DigraphInsertA(G, 12, 62, '\t');
   DigraphInsertA(G, 13, 62, '\t');

   DigraphInsertA(G, 12, 62, '+');
   DigraphInsertA(G, 13, 62, '+');
   DigraphInsertA(G, 12, 62, '-');
   DigraphInsertA(G, 13, 62, '-');
   DigraphInsertA(G, 12, 62, '*');
   DigraphInsertA(G, 13, 62, '*');
   DigraphInsertA(G, 12, 62, '/');
   DigraphInsertA(G, 13, 62, '/');
   DigraphInsertA(G, 12, 62, '(');
   DigraphInsertA(G, 13, 62, '(');
   DigraphInsertA(G, 12, 62, ')');
   DigraphInsertA(G, 13, 62, ')');
   DigraphInsertA(G, 12, 62, '=');
   DigraphInsertA(G, 13, 62, '=');
   DigraphInsertA(G, 12, 62, '<');
   DigraphInsertA(G, 13, 62, '<');
   DigraphInsertA(G, 12, 62, '>');
   DigraphInsertA(G, 13, 62, '>');
   DigraphInsertA(G, 12, 62, '!');
   DigraphInsertA(G, 13, 62, '!');
   DigraphInsertA(G, 12, 62, ';');
   DigraphInsertA(G, 13, 62, ';');

   DigraphInsertA(G, 12, 0, ' ');
   DigraphInsertA(G, 13, 0, ' ');
   DigraphInsertA(G, 12, 0, '\n');
   DigraphInsertA(G, 13, 0, '\n');
   DigraphInsertA(G, 12, 0, '\t');
   DigraphInsertA(G, 13, 0, '\t');
   DigraphInsertA(G, 12, 0, '+');
   DigraphInsertA(G, 13, 0, '+');
   DigraphInsertA(G, 12, 0, '-');
   DigraphInsertA(G, 13, 0, '-');
   DigraphInsertA(G, 12, 0, '*');
   DigraphInsertA(G, 13, 0, '*');
   DigraphInsertA(G, 12, 0, '/');
   DigraphInsertA(G, 13, 0, '/');
   DigraphInsertA(G, 12, 0, '(');
   DigraphInsertA(G, 13, 0, '(');
   DigraphInsertA(G, 12, 0, ')');
   DigraphInsertA(G, 13, 0, ')');
   DigraphInsertA(G, 12, 0, '=');
   DigraphInsertA(G, 13, 0, '=');
   DigraphInsertA(G, 12, 0, '<');
   DigraphInsertA(G, 13, 0, '<');
   DigraphInsertA(G, 12, 0, '>');
   DigraphInsertA(G, 13, 0, '>');
   DigraphInsertA(G, 12, 0, '!');
   DigraphInsertA(G, 13, 0, '!');
   DigraphInsertA(G, 12, 0, ';');
   DigraphInsertA(G, 13, 0, ';');

   DigraphInsertA(G, 14, 51, '+');
   DigraphInsertA(G, 14, 52, '-');
   DigraphInsertA(G, 14, 53, '/');
   DigraphInsertA(G, 14, 54, '*');
   DigraphInsertA(G, 14, 55, '(');
   DigraphInsertA(G, 14, 56, ')');
   DigraphInsertA(G, 14, 57, '=');
   DigraphInsertA(G, 14, 58, '!');
   DigraphInsertA(G, 14, 59, '<');
   DigraphInsertA(G, 14, 60, '>');
   DigraphInsertA(G, 14, 61, ';');

   DigraphInsertA(G, 14, 39, '+');
   DigraphInsertA(G, 14, 39, '-');
   DigraphInsertA(G, 14, 39, '/');
   DigraphInsertA(G, 14, 39, '*');
   DigraphInsertA(G, 14, 39, '(');
   DigraphInsertA(G, 14, 39, ')');
   DigraphInsertA(G, 14, 39, '=');
   DigraphInsertA(G, 14, 39, '!');
   DigraphInsertA(G, 14, 39, '<');
   DigraphInsertA(G, 14, 39, '>');
   DigraphInsertA(G, 14, 39, ';');

   DigraphInsertA(G, 14, 0, '+');
   DigraphInsertA(G, 14, 0, '-');
   DigraphInsertA(G, 14, 0, '/');
   DigraphInsertA(G, 14, 0, '*');
   DigraphInsertA(G, 14, 0, '(');
   DigraphInsertA(G, 14, 0, ')');
   DigraphInsertA(G, 14, 0, '=');
   DigraphInsertA(G, 14, 0, '!');
   DigraphInsertA(G, 14, 0, '<');
   DigraphInsertA(G, 14, 0, '>');
   DigraphInsertA(G, 14, 0, ';');

   DigraphInsertA(G, 12, 15, 'L');
   DigraphInsertA(G, 15, 16, 'S');
   DigraphInsertA(G, 16, 17, 'E');
   DigraphInsertA(G, 17, 40, ' ');
   DigraphInsertA(G, 17, 40, '\n');
   DigraphInsertA(G, 17, 40, '\t');
   DigraphInsertA(G, 17, 0, ' ');
   DigraphInsertA(G, 17, 0, '\n');
   DigraphInsertA(G, 17, 0, '\t');

   DigraphInsertA(G, 15, 62, ' ');
   DigraphInsertA(G, 16, 62, ' ');
   DigraphInsertA(G, 15, 62, '\n');
   DigraphInsertA(G, 16, 62, '\n');
   DigraphInsertA(G, 15, 62, '\t');
   DigraphInsertA(G, 16, 62, '\t');

   DigraphInsertA(G, 15, 62, '+');
   DigraphInsertA(G, 16, 62, '+');
   DigraphInsertA(G, 15, 62, '-');
   DigraphInsertA(G, 16, 62, '-');
   DigraphInsertA(G, 15, 62, '*');
   DigraphInsertA(G, 16, 62, '*');
   DigraphInsertA(G, 15, 62, '/');
   DigraphInsertA(G, 16, 62, '/');
   DigraphInsertA(G, 15, 62, '(');
   DigraphInsertA(G, 16, 62, '(');
   DigraphInsertA(G, 15, 62, ')');
   DigraphInsertA(G, 16, 62, ')');
   DigraphInsertA(G, 15, 62, '=');
   DigraphInsertA(G, 16, 62, '=');
   DigraphInsertA(G, 15, 62, '<');
   DigraphInsertA(G, 16, 62, '<');
   DigraphInsertA(G, 15, 62, '>');
   DigraphInsertA(G, 16, 62, '>');
   DigraphInsertA(G, 15, 62, '!');
   DigraphInsertA(G, 16, 62, '!');
   DigraphInsertA(G, 15, 62, ';');
   DigraphInsertA(G, 16, 62, ';');

   DigraphInsertA(G, 15, 0, ' ');
   DigraphInsertA(G, 16, 0, ' ');
   DigraphInsertA(G, 15, 0, '\n');
   DigraphInsertA(G, 16, 0, '\n');
   DigraphInsertA(G, 15, 0, '\t');
   DigraphInsertA(G, 16, 0, '\t');
   DigraphInsertA(G, 15, 0, '+');
   DigraphInsertA(G, 16, 0, '+');
   DigraphInsertA(G, 15, 0, '-');
   DigraphInsertA(G, 16, 0, '-');
   DigraphInsertA(G, 15, 0, '*');
   DigraphInsertA(G, 16, 0, '*');
   DigraphInsertA(G, 15, 0, '/');
   DigraphInsertA(G, 16, 0, '/');
   DigraphInsertA(G, 15, 0, '(');
   DigraphInsertA(G, 16, 0, '(');
   DigraphInsertA(G, 15, 0, ')');
   DigraphInsertA(G, 16, 0, ')');
   DigraphInsertA(G, 15, 0, '=');
   DigraphInsertA(G, 16, 0, '=');
   DigraphInsertA(G, 15, 0, '<');
   DigraphInsertA(G, 16, 0, '<');
   DigraphInsertA(G, 15, 0, '>');
   DigraphInsertA(G, 16, 0, '>');
   DigraphInsertA(G, 15, 0, '!');
   DigraphInsertA(G, 16, 0, '!');
   DigraphInsertA(G, 15, 0, ';');
   DigraphInsertA(G, 16, 0, ';');

   DigraphInsertA(G, 17, 51, '+');
   DigraphInsertA(G, 17, 52, '-');
   DigraphInsertA(G, 17, 53, '/');
   DigraphInsertA(G, 17, 54, '*');
   DigraphInsertA(G, 17, 55, '(');
   DigraphInsertA(G, 17, 56, ')');
   DigraphInsertA(G, 17, 57, '=');
   DigraphInsertA(G, 17, 58, '!');
   DigraphInsertA(G, 17, 59, '<');
   DigraphInsertA(G, 17, 60, '>');
   DigraphInsertA(G, 17, 61, ';');

   DigraphInsertA(G, 17, 40, '+');
   DigraphInsertA(G, 17, 40, '-');
   DigraphInsertA(G, 17, 40, '/');
   DigraphInsertA(G, 17, 40, '*');
   DigraphInsertA(G, 17, 40, '(');
   DigraphInsertA(G, 17, 40, ')');
   DigraphInsertA(G, 17, 40, '=');
   DigraphInsertA(G, 17, 40, '!');
   DigraphInsertA(G, 17, 40, '<');
   DigraphInsertA(G, 17, 40, '>');
   DigraphInsertA(G, 17, 40, ';');

   DigraphInsertA(G, 17, 0, '+');
   DigraphInsertA(G, 17, 0, '-');
   DigraphInsertA(G, 17, 0, '/');
   DigraphInsertA(G, 17, 0, '*');
   DigraphInsertA(G, 17, 0, '(');
   DigraphInsertA(G, 17, 0, ')');
   DigraphInsertA(G, 17, 0, '=');
   DigraphInsertA(G, 17, 0, '!');
   DigraphInsertA(G, 17, 0, '<');
   DigraphInsertA(G, 17, 0, '>');
   DigraphInsertA(G, 17, 0, ';');

/*******************************************/
/**************** Token THEN ***************/

   DigraphInsertA(G, 0, 18, 'T');
   DigraphInsertA(G, 18, 19, 'H');
   DigraphInsertA(G, 19, 20, 'E');
   DigraphInsertA(G, 20, 21, 'N');
   DigraphInsertA(G, 21, 41, ' ');
   DigraphInsertA(G, 21, 41, '\n');
   DigraphInsertA(G, 21, 41, '\t');
   DigraphInsertA(G, 21, 0, ' ');
   DigraphInsertA(G, 21, 0, '\n');
   DigraphInsertA(G, 21, 0, '\t');

   DigraphInsertA(G, 18, 62, ' ');
   DigraphInsertA(G, 19, 62, ' ');
   DigraphInsertA(G, 20, 62, ' ');
   DigraphInsertA(G, 18, 62, '\n');
   DigraphInsertA(G, 19, 62, '\n');
   DigraphInsertA(G, 20, 62, '\n');
   DigraphInsertA(G, 18, 62, '\t');
   DigraphInsertA(G, 19, 62, '\t');
   DigraphInsertA(G, 20, 62, '\t');

   DigraphInsertA(G, 18, 62, '+');
   DigraphInsertA(G, 19, 62, '+');
   DigraphInsertA(G, 20, 62, '+');
   DigraphInsertA(G, 18, 62, '-');
   DigraphInsertA(G, 19, 62, '-');
   DigraphInsertA(G, 20, 62, '-');
   DigraphInsertA(G, 18, 62, '*');
   DigraphInsertA(G, 19, 62, '*');
   DigraphInsertA(G, 20, 62, '*');
   DigraphInsertA(G, 18, 62, '/');
   DigraphInsertA(G, 19, 62, '/');
   DigraphInsertA(G, 20, 62, '/');
   DigraphInsertA(G, 18, 62, '(');
   DigraphInsertA(G, 19, 62, '(');
   DigraphInsertA(G, 20, 62, '(');
   DigraphInsertA(G, 18, 62, ')');
   DigraphInsertA(G, 19, 62, ')');
   DigraphInsertA(G, 20, 62, ')');
   DigraphInsertA(G, 18, 62, '=');
   DigraphInsertA(G, 19, 62, '=');
   DigraphInsertA(G, 20, 62, '=');
   DigraphInsertA(G, 18, 62, '<');
   DigraphInsertA(G, 19, 62, '<');
   DigraphInsertA(G, 20, 62, '<');
   DigraphInsertA(G, 18, 62, '>');
   DigraphInsertA(G, 19, 62, '>');
   DigraphInsertA(G, 20, 62, '>');
   DigraphInsertA(G, 18, 62, '!');
   DigraphInsertA(G, 19, 62, '!');
   DigraphInsertA(G, 20, 62, '!');
   DigraphInsertA(G, 18, 62, ';');
   DigraphInsertA(G, 19, 62, ';');
   DigraphInsertA(G, 20, 62, ';');

   DigraphInsertA(G, 18, 0, ' ');
   DigraphInsertA(G, 19, 0, ' ');
   DigraphInsertA(G, 20, 0, ' ');
   DigraphInsertA(G, 18, 0, '\n');
   DigraphInsertA(G, 19, 0, '\n');
   DigraphInsertA(G, 20, 0, '\n');
   DigraphInsertA(G, 18, 0, '\t');
   DigraphInsertA(G, 19, 0, '\t');
   DigraphInsertA(G, 20, 0, '\t');
   DigraphInsertA(G, 18, 0, '+');
   DigraphInsertA(G, 19, 0, '+');
   DigraphInsertA(G, 20, 0, '+');
   DigraphInsertA(G, 18, 0, '-');
   DigraphInsertA(G, 19, 0, '-');
   DigraphInsertA(G, 20, 0, '-');
   DigraphInsertA(G, 18, 0, '*');
   DigraphInsertA(G, 19, 0, '*');
   DigraphInsertA(G, 20, 0, '*');
   DigraphInsertA(G, 18, 0, '/');
   DigraphInsertA(G, 19, 0, '/');
   DigraphInsertA(G, 20, 0, '/');
   DigraphInsertA(G, 18, 0, '(');
   DigraphInsertA(G, 19, 0, '(');
   DigraphInsertA(G, 20, 0, '(');
   DigraphInsertA(G, 18, 0, ')');
   DigraphInsertA(G, 19, 0, ')');
   DigraphInsertA(G, 20, 0, ')');
   DigraphInsertA(G, 18, 0, '=');
   DigraphInsertA(G, 19, 0, '=');
   DigraphInsertA(G, 20, 0, '=');
   DigraphInsertA(G, 18, 0, '<');
   DigraphInsertA(G, 19, 0, '<');
   DigraphInsertA(G, 20, 0, '<');
   DigraphInsertA(G, 18, 0, '>');
   DigraphInsertA(G, 19, 0, '>');
   DigraphInsertA(G, 20, 0, '>');
   DigraphInsertA(G, 18, 0, '!');
   DigraphInsertA(G, 19, 0, '!');
   DigraphInsertA(G, 20, 0, '!');
   DigraphInsertA(G, 18, 0, ';');
   DigraphInsertA(G, 19, 0, ';');
   DigraphInsertA(G, 20, 0, ';');

   DigraphInsertA(G, 21, 51, '+');
   DigraphInsertA(G, 21, 52, '-');
   DigraphInsertA(G, 21, 53, '/');
   DigraphInsertA(G, 21, 54, '*');
   DigraphInsertA(G, 21, 55, '(');
   DigraphInsertA(G, 21, 56, ')');
   DigraphInsertA(G, 21, 57, '=');
   DigraphInsertA(G, 21, 58, '!');
   DigraphInsertA(G, 21, 59, '<');
   DigraphInsertA(G, 21, 60, '>');
   DigraphInsertA(G, 21, 61, ';');

   DigraphInsertA(G, 21, 41, '+');
   DigraphInsertA(G, 21, 41, '-');
   DigraphInsertA(G, 21, 41, '/');
   DigraphInsertA(G, 21, 41, '*');
   DigraphInsertA(G, 21, 41, '(');
   DigraphInsertA(G, 21, 41, ')');
   DigraphInsertA(G, 21, 41, '=');
   DigraphInsertA(G, 21, 41, '!');
   DigraphInsertA(G, 21, 41, '<');
   DigraphInsertA(G, 21, 41, '>');
   DigraphInsertA(G, 21, 41, ';');

   DigraphInsertA(G, 21, 0, '+');
   DigraphInsertA(G, 21, 0, '-');
   DigraphInsertA(G, 21, 0, '/');
   DigraphInsertA(G, 21, 0, '*');
   DigraphInsertA(G, 21, 0, '(');
   DigraphInsertA(G, 21, 0, ')');
   DigraphInsertA(G, 21, 0, '=');
   DigraphInsertA(G, 21, 0, '!');
   DigraphInsertA(G, 21, 0, '<');
   DigraphInsertA(G, 21, 0, '>');
   DigraphInsertA(G, 21, 0, ';');

/*********************************************/
/**************** Token RETURN ***************/

   DigraphInsertA(G, 0, 22, 'R');
   DigraphInsertA(G, 22, 23, 'E');
   DigraphInsertA(G, 23, 24, 'T');
   DigraphInsertA(G, 24, 25, 'U');
   DigraphInsertA(G, 25, 26, 'R');
   DigraphInsertA(G, 26, 27, 'N');
   DigraphInsertA(G, 27, 42, ' ');
   DigraphInsertA(G, 27, 42, '\n');
   DigraphInsertA(G, 27, 42, '\t');
   DigraphInsertA(G, 27, 0, ' ');
   DigraphInsertA(G, 27, 0, '\n');
   DigraphInsertA(G, 27, 0, '\t');

   DigraphInsertA(G, 22, 62, ' ');
   DigraphInsertA(G, 23, 62, ' ');
   DigraphInsertA(G, 24, 62, ' ');
   DigraphInsertA(G, 25, 62, ' ');
   DigraphInsertA(G, 26, 62, ' ');
   DigraphInsertA(G, 22, 62, '\n');
   DigraphInsertA(G, 23, 62, '\n');
   DigraphInsertA(G, 24, 62, '\n');
   DigraphInsertA(G, 25, 62, '\n');
   DigraphInsertA(G, 26, 62, '\n');
   DigraphInsertA(G, 22, 62, '\t');
   DigraphInsertA(G, 23, 62, '\t');
   DigraphInsertA(G, 24, 62, '\t');
   DigraphInsertA(G, 25, 62, '\t');
   DigraphInsertA(G, 26, 62, '\t');

   DigraphInsertA(G, 22, 62, '+');
   DigraphInsertA(G, 23, 62, '+');
   DigraphInsertA(G, 24, 62, '+');
   DigraphInsertA(G, 25, 62, '+');
   DigraphInsertA(G, 26, 62, '+');
   DigraphInsertA(G, 22, 62, '-');
   DigraphInsertA(G, 23, 62, '-');
   DigraphInsertA(G, 24, 62, '-');
   DigraphInsertA(G, 25, 62, '-');
   DigraphInsertA(G, 26, 62, '-');
   DigraphInsertA(G, 22, 62, '*');
   DigraphInsertA(G, 23, 62, '*');
   DigraphInsertA(G, 24, 62, '*');
   DigraphInsertA(G, 25, 62, '*');
   DigraphInsertA(G, 26, 62, '*');
   DigraphInsertA(G, 22, 62, '/');
   DigraphInsertA(G, 23, 62, '/');
   DigraphInsertA(G, 24, 62, '/');
   DigraphInsertA(G, 25, 62, '/');
   DigraphInsertA(G, 26, 62, '/');
   DigraphInsertA(G, 22, 62, '(');
   DigraphInsertA(G, 23, 62, '(');
   DigraphInsertA(G, 24, 62, '(');
   DigraphInsertA(G, 25, 62, '(');
   DigraphInsertA(G, 26, 62, '(');
   DigraphInsertA(G, 22, 62, ')');
   DigraphInsertA(G, 23, 62, ')');
   DigraphInsertA(G, 24, 62, ')');
   DigraphInsertA(G, 25, 62, ')');
   DigraphInsertA(G, 26, 62, ')');
   DigraphInsertA(G, 22, 62, '=');
   DigraphInsertA(G, 23, 62, '=');
   DigraphInsertA(G, 24, 62, '=');
   DigraphInsertA(G, 25, 62, '=');
   DigraphInsertA(G, 26, 62, '=');
   DigraphInsertA(G, 22, 62, '<');
   DigraphInsertA(G, 23, 62, '<');
   DigraphInsertA(G, 24, 62, '<');
   DigraphInsertA(G, 25, 62, '<');
   DigraphInsertA(G, 26, 62, '<');
   DigraphInsertA(G, 22, 62, '>');
   DigraphInsertA(G, 23, 62, '>');
   DigraphInsertA(G, 24, 62, '>');
   DigraphInsertA(G, 25, 62, '>');
   DigraphInsertA(G, 26, 62, '>');
   DigraphInsertA(G, 22, 62, '!');
   DigraphInsertA(G, 23, 62, '!');
   DigraphInsertA(G, 24, 62, '!');
   DigraphInsertA(G, 25, 62, '!');
   DigraphInsertA(G, 26, 62, '!');
   DigraphInsertA(G, 22, 62, ';');
   DigraphInsertA(G, 23, 62, ';');
   DigraphInsertA(G, 24, 62, ';');
   DigraphInsertA(G, 25, 62, ';');
   DigraphInsertA(G, 26, 62, ';');

   DigraphInsertA(G, 22, 0, ' ');
   DigraphInsertA(G, 23, 0, ' ');
   DigraphInsertA(G, 24, 0, ' ');
   DigraphInsertA(G, 25, 0, ' ');
   DigraphInsertA(G, 26, 0, ' ');
   DigraphInsertA(G, 22, 0, '\n');
   DigraphInsertA(G, 23, 0, '\n');
   DigraphInsertA(G, 24, 0, '\n');
   DigraphInsertA(G, 25, 0, '\n');
   DigraphInsertA(G, 26, 0, '\n');
   DigraphInsertA(G, 22, 0, '\t');
   DigraphInsertA(G, 23, 0, '\t');
   DigraphInsertA(G, 24, 0, '\t');
   DigraphInsertA(G, 25, 0, '\t');
   DigraphInsertA(G, 26, 0, '\t');
   DigraphInsertA(G, 22, 0, '+');
   DigraphInsertA(G, 23, 0, '+');
   DigraphInsertA(G, 24, 0, '+');
   DigraphInsertA(G, 25, 0, '+');
   DigraphInsertA(G, 26, 0, '+');
   DigraphInsertA(G, 22, 0, '-');
   DigraphInsertA(G, 23, 0, '-');
   DigraphInsertA(G, 24, 0, '-');
   DigraphInsertA(G, 25, 0, '-');
   DigraphInsertA(G, 26, 0, '-');
   DigraphInsertA(G, 22, 0, '*');
   DigraphInsertA(G, 23, 0, '*');
   DigraphInsertA(G, 24, 0, '*');
   DigraphInsertA(G, 25, 0, '*');
   DigraphInsertA(G, 26, 0, '*');
   DigraphInsertA(G, 22, 0, '/');
   DigraphInsertA(G, 23, 0, '/');
   DigraphInsertA(G, 24, 0, '/');
   DigraphInsertA(G, 25, 0, '/');
   DigraphInsertA(G, 26, 0, '/');
   DigraphInsertA(G, 22, 0, '(');
   DigraphInsertA(G, 23, 0, '(');
   DigraphInsertA(G, 24, 0, '(');
   DigraphInsertA(G, 25, 0, '(');
   DigraphInsertA(G, 26, 0, '(');
   DigraphInsertA(G, 22, 0, ')');
   DigraphInsertA(G, 23, 0, ')');
   DigraphInsertA(G, 24, 0, ')');
   DigraphInsertA(G, 25, 0, ')');
   DigraphInsertA(G, 26, 0, ')');
   DigraphInsertA(G, 22, 0, '=');
   DigraphInsertA(G, 23, 0, '=');
   DigraphInsertA(G, 24, 0, '=');
   DigraphInsertA(G, 25, 0, '=');
   DigraphInsertA(G, 26, 0, '=');
   DigraphInsertA(G, 22, 0, '<');
   DigraphInsertA(G, 23, 0, '<');
   DigraphInsertA(G, 24, 0, '<');
   DigraphInsertA(G, 25, 0, '<');
   DigraphInsertA(G, 26, 0, '<');
   DigraphInsertA(G, 22, 0, '>');
   DigraphInsertA(G, 23, 0, '>');
   DigraphInsertA(G, 24, 0, '>');
   DigraphInsertA(G, 25, 0, '>');
   DigraphInsertA(G, 26, 0, '>');
   DigraphInsertA(G, 22, 0, '!');
   DigraphInsertA(G, 23, 0, '!');
   DigraphInsertA(G, 24, 0, '!');
   DigraphInsertA(G, 25, 0, '!');
   DigraphInsertA(G, 26, 0, '!');
   DigraphInsertA(G, 22, 0, ';');
   DigraphInsertA(G, 23, 0, ';');
   DigraphInsertA(G, 24, 0, ';');
   DigraphInsertA(G, 25, 0, ';');
   DigraphInsertA(G, 26, 0, ';');


   DigraphInsertA(G, 27, 51, '+');
   DigraphInsertA(G, 27, 52, '-');
   DigraphInsertA(G, 27, 53, '/');
   DigraphInsertA(G, 27, 54, '*');
   DigraphInsertA(G, 27, 55, '(');
   DigraphInsertA(G, 27, 56, ')');
   DigraphInsertA(G, 27, 57, '=');
   DigraphInsertA(G, 27, 58, '!');
   DigraphInsertA(G, 27, 59, '<');
   DigraphInsertA(G, 27, 60, '>');
   DigraphInsertA(G, 27, 61, ';');

   DigraphInsertA(G, 27, 42, '+');
   DigraphInsertA(G, 27, 42, '-');
   DigraphInsertA(G, 27, 42, '/');
   DigraphInsertA(G, 27, 42, '*');
   DigraphInsertA(G, 27, 42, '(');
   DigraphInsertA(G, 27, 42, ')');
   DigraphInsertA(G, 27, 42, '=');
   DigraphInsertA(G, 27, 42, '!');
   DigraphInsertA(G, 27, 42, '<');
   DigraphInsertA(G, 27, 42, '>');
   DigraphInsertA(G, 27, 42, ';');

   DigraphInsertA(G, 27, 0, '+');
   DigraphInsertA(G, 27, 0, '-');
   DigraphInsertA(G, 27, 0, '/');
   DigraphInsertA(G, 27, 0, '*');
   DigraphInsertA(G, 27, 0, '(');
   DigraphInsertA(G, 27, 0, ')');
   DigraphInsertA(G, 27, 0, '=');
   DigraphInsertA(G, 27, 0, '!');
   DigraphInsertA(G, 27, 0, '<');
   DigraphInsertA(G, 27, 0, '>');
   DigraphInsertA(G, 27, 0, ';');

/*******************************************/
/**************** Token VAR ****************/

   DigraphInsertA(G, 0, 28, 'V');
   DigraphInsertA(G, 28, 29, 'A');
   DigraphInsertA(G, 29, 30, 'R');
   DigraphInsertA(G, 30, 43, ' ');
   DigraphInsertA(G, 30, 43, '\n');
   DigraphInsertA(G, 30, 43, '\t');
   DigraphInsertA(G, 30, 0, ' ');
   DigraphInsertA(G, 30, 0, '\n');
   DigraphInsertA(G, 30, 0, '\t');

   DigraphInsertA(G, 28, 0, ' ');
   DigraphInsertA(G, 29, 0, ' ');
   DigraphInsertA(G, 28, 0, '\n');
   DigraphInsertA(G, 29, 0, '\n');
   DigraphInsertA(G, 28, 0, '\t');
   DigraphInsertA(G, 29, 0, '\t');
   DigraphInsertA(G, 28, 0, '+');
   DigraphInsertA(G, 29, 0, '+');
   DigraphInsertA(G, 28, 0, '-');
   DigraphInsertA(G, 29, 0, '-');
   DigraphInsertA(G, 28, 0, '*');
   DigraphInsertA(G, 29, 0, '*');
   DigraphInsertA(G, 28, 0, '/');
   DigraphInsertA(G, 29, 0, '/');
   DigraphInsertA(G, 28, 0, '(');
   DigraphInsertA(G, 29, 0, '(');
   DigraphInsertA(G, 28, 0, ')');
   DigraphInsertA(G, 29, 0, ')');
   DigraphInsertA(G, 28, 0, '=');
   DigraphInsertA(G, 29, 0, '=');
   DigraphInsertA(G, 28, 0, '<');
   DigraphInsertA(G, 29, 0, '<');
   DigraphInsertA(G, 28, 0, '>');
   DigraphInsertA(G, 29, 0, '>');
   DigraphInsertA(G, 28, 0, '!');
   DigraphInsertA(G, 29, 0, '!');
   DigraphInsertA(G, 28, 0, ';');
   DigraphInsertA(G, 29, 0, ';');

   DigraphInsertA(G, 28, 62, ' ');
   DigraphInsertA(G, 29, 62, ' ');
   DigraphInsertA(G, 28, 62, '\n');
   DigraphInsertA(G, 29, 62, '\n');
   DigraphInsertA(G, 28, 62, '\t');
   DigraphInsertA(G, 29, 62, '\t');

   DigraphInsertA(G, 28, 62, '+');
   DigraphInsertA(G, 29, 62, '+');
   DigraphInsertA(G, 28, 62, '-');
   DigraphInsertA(G, 29, 62, '-');
   DigraphInsertA(G, 28, 62, '*');
   DigraphInsertA(G, 29, 62, '*');
   DigraphInsertA(G, 28, 62, '/');
   DigraphInsertA(G, 29, 62, '/');
   DigraphInsertA(G, 28, 62, '(');
   DigraphInsertA(G, 29, 62, '(');
   DigraphInsertA(G, 28, 62, ')');
   DigraphInsertA(G, 29, 62, ')');
   DigraphInsertA(G, 28, 62, '=');
   DigraphInsertA(G, 29, 62, '=');
   DigraphInsertA(G, 28, 62, '<');
   DigraphInsertA(G, 29, 62, '<');
   DigraphInsertA(G, 28, 62, '>');
   DigraphInsertA(G, 29, 62, '>');
   DigraphInsertA(G, 28, 62, '!');
   DigraphInsertA(G, 29, 62, '!');
   DigraphInsertA(G, 28, 62, ';');
   DigraphInsertA(G, 29, 62, ';');

   DigraphInsertA(G, 30, 51, '+');
   DigraphInsertA(G, 30, 52, '-');
   DigraphInsertA(G, 30, 53, '/');
   DigraphInsertA(G, 30, 54, '*');
   DigraphInsertA(G, 30, 55, '(');
   DigraphInsertA(G, 30, 56, ')');
   DigraphInsertA(G, 30, 57, '=');
   DigraphInsertA(G, 30, 58, '!');
   DigraphInsertA(G, 30, 59, '<');
   DigraphInsertA(G, 30, 60, '>');
   DigraphInsertA(G, 30, 61, ';');

   DigraphInsertA(G, 30, 43, '+');
   DigraphInsertA(G, 30, 43, '-');
   DigraphInsertA(G, 30, 43, '/');
   DigraphInsertA(G, 30, 43, '*');
   DigraphInsertA(G, 30, 43, '(');
   DigraphInsertA(G, 30, 43, ')');
   DigraphInsertA(G, 30, 43, '=');
   DigraphInsertA(G, 30, 43, '!');
   DigraphInsertA(G, 30, 43, '<');
   DigraphInsertA(G, 30, 43, '>');
   DigraphInsertA(G, 30, 43, ';');

   DigraphInsertA(G, 30, 0, '+');
   DigraphInsertA(G, 30, 0, '-');
   DigraphInsertA(G, 30, 0, '/');
   DigraphInsertA(G, 30, 0, '*');
   DigraphInsertA(G, 30, 0, '(');
   DigraphInsertA(G, 30, 0, ')');
   DigraphInsertA(G, 30, 0, '=');
   DigraphInsertA(G, 30, 0, '!');
   DigraphInsertA(G, 30, 0, '<');
   DigraphInsertA(G, 30, 0, '>');
   DigraphInsertA(G, 30, 0, ';');

/********************************************/
/**************** Token BREAK ***************/

   DigraphInsertA(G, 0, 31, 'B');
   DigraphInsertA(G, 31, 32, 'R');
   DigraphInsertA(G, 32, 33, 'E');
   DigraphInsertA(G, 33, 34, 'A');
   DigraphInsertA(G, 34, 35, 'K');
   DigraphInsertA(G, 35, 44, ' ');
   DigraphInsertA(G, 35, 44, '\n');
   DigraphInsertA(G, 35, 44, '\t');
   DigraphInsertA(G, 35, 0, ' ');
   DigraphInsertA(G, 35, 0, '\n');
   DigraphInsertA(G, 35, 0, '\t');

   DigraphInsertA(G, 31, 62, ' ');
   DigraphInsertA(G, 32, 62, ' ');
   DigraphInsertA(G, 33, 62, ' ');
   DigraphInsertA(G, 34, 62, ' ');
   DigraphInsertA(G, 31, 62, '\n');
   DigraphInsertA(G, 32, 62, '\n');
   DigraphInsertA(G, 33, 62, '\n');
   DigraphInsertA(G, 34, 62, '\n');
   DigraphInsertA(G, 31, 62, '\t');
   DigraphInsertA(G, 32, 62, '\t');
   DigraphInsertA(G, 33, 62, '\t');
   DigraphInsertA(G, 34, 62, '\t');

   DigraphInsertA(G, 31, 62, '+');
   DigraphInsertA(G, 32, 62, '+');
   DigraphInsertA(G, 33, 62, '+');
   DigraphInsertA(G, 34, 62, '+');
   DigraphInsertA(G, 31, 62, '-');
   DigraphInsertA(G, 32, 62, '-');
   DigraphInsertA(G, 33, 62, '-');
   DigraphInsertA(G, 34, 62, '-');
   DigraphInsertA(G, 31, 62, '*');
   DigraphInsertA(G, 32, 62, '*');
   DigraphInsertA(G, 33, 62, '*');
   DigraphInsertA(G, 34, 62, '*');
   DigraphInsertA(G, 31, 62, '/');
   DigraphInsertA(G, 32, 62, '/');
   DigraphInsertA(G, 33, 62, '/');
   DigraphInsertA(G, 34, 62, '/');
   DigraphInsertA(G, 31, 62, '(');
   DigraphInsertA(G, 32, 62, '(');
   DigraphInsertA(G, 33, 62, '(');
   DigraphInsertA(G, 34, 62, '(');
   DigraphInsertA(G, 31, 62, ')');
   DigraphInsertA(G, 32, 62, ')');
   DigraphInsertA(G, 33, 62, ')');
   DigraphInsertA(G, 34, 62, ')');
   DigraphInsertA(G, 31, 62, '=');
   DigraphInsertA(G, 32, 62, '=');
   DigraphInsertA(G, 33, 62, '=');
   DigraphInsertA(G, 34, 62, '=');
   DigraphInsertA(G, 31, 62, '<');
   DigraphInsertA(G, 32, 62, '<');
   DigraphInsertA(G, 33, 62, '<');
   DigraphInsertA(G, 34, 62, '<');
   DigraphInsertA(G, 31, 62, '>');
   DigraphInsertA(G, 32, 62, '>');
   DigraphInsertA(G, 33, 62, '>');
   DigraphInsertA(G, 34, 62, '>');
   DigraphInsertA(G, 31, 62, '!');
   DigraphInsertA(G, 32, 62, '!');
   DigraphInsertA(G, 33, 62, '!');
   DigraphInsertA(G, 34, 62, '!');
   DigraphInsertA(G, 31, 62, ';');
   DigraphInsertA(G, 32, 62, ';');
   DigraphInsertA(G, 33, 62, ';');
   DigraphInsertA(G, 34, 62, ';');

   DigraphInsertA(G, 31, 0, ' ');
   DigraphInsertA(G, 32, 0, ' ');
   DigraphInsertA(G, 33, 0, ' ');
   DigraphInsertA(G, 34, 0, ' ');
   DigraphInsertA(G, 31, 0, '\n');
   DigraphInsertA(G, 32, 0, '\n');
   DigraphInsertA(G, 33, 0, '\n');
   DigraphInsertA(G, 34, 0, '\n');
   DigraphInsertA(G, 31, 0, '\t');
   DigraphInsertA(G, 32, 0, '\t');
   DigraphInsertA(G, 33, 0, '\t');
   DigraphInsertA(G, 34, 0, '\t');
   DigraphInsertA(G, 31, 0, '+');
   DigraphInsertA(G, 32, 0, '+');
   DigraphInsertA(G, 33, 0, '+');
   DigraphInsertA(G, 34, 0, '+');
   DigraphInsertA(G, 31, 0, '-');
   DigraphInsertA(G, 32, 0, '-');
   DigraphInsertA(G, 33, 0, '-');
   DigraphInsertA(G, 34, 0, '-');
   DigraphInsertA(G, 31, 0, '*');
   DigraphInsertA(G, 32, 0, '*');
   DigraphInsertA(G, 33, 0, '*');
   DigraphInsertA(G, 34, 0, '*');
   DigraphInsertA(G, 31, 0, '/');
   DigraphInsertA(G, 32, 0, '/');
   DigraphInsertA(G, 33, 0, '/');
   DigraphInsertA(G, 34, 0, '/');
   DigraphInsertA(G, 31, 0, '(');
   DigraphInsertA(G, 32, 0, '(');
   DigraphInsertA(G, 33, 0, '(');
   DigraphInsertA(G, 34, 0, '(');
   DigraphInsertA(G, 31, 0, ')');
   DigraphInsertA(G, 32, 0, ')');
   DigraphInsertA(G, 33, 0, ')');
   DigraphInsertA(G, 34, 0, ')');
   DigraphInsertA(G, 31, 0, '=');
   DigraphInsertA(G, 32, 0, '=');
   DigraphInsertA(G, 33, 0, '=');
   DigraphInsertA(G, 34, 0, '=');
   DigraphInsertA(G, 31, 0, '<');
   DigraphInsertA(G, 32, 0, '<');
   DigraphInsertA(G, 33, 0, '<');
   DigraphInsertA(G, 34, 0, '<');
   DigraphInsertA(G, 31, 0, '>');
   DigraphInsertA(G, 32, 0, '>');
   DigraphInsertA(G, 33, 0, '>');
   DigraphInsertA(G, 34, 0, '>');
   DigraphInsertA(G, 31, 0, '!');
   DigraphInsertA(G, 32, 0, '!');
   DigraphInsertA(G, 33, 0, '!');
   DigraphInsertA(G, 34, 0, '!');
   DigraphInsertA(G, 31, 0, ';');
   DigraphInsertA(G, 32, 0, ';');
   DigraphInsertA(G, 33, 0, ';');
   DigraphInsertA(G, 34, 0, ';');


   DigraphInsertA(G, 35, 51, '+');
   DigraphInsertA(G, 35, 52, '-');
   DigraphInsertA(G, 35, 53, '/');
   DigraphInsertA(G, 35, 54, '*');
   DigraphInsertA(G, 35, 55, '(');
   DigraphInsertA(G, 35, 56, ')');
   DigraphInsertA(G, 35, 57, '=');
   DigraphInsertA(G, 35, 58, '!');
   DigraphInsertA(G, 35, 59, '<');
   DigraphInsertA(G, 35, 60, '>');
   DigraphInsertA(G, 35, 61, ';');

   DigraphInsertA(G, 35, 44, '+');
   DigraphInsertA(G, 35, 44, '-');
   DigraphInsertA(G, 35, 44, '/');
   DigraphInsertA(G, 35, 44, '*');
   DigraphInsertA(G, 35, 44, '(');
   DigraphInsertA(G, 35, 44, ')');
   DigraphInsertA(G, 35, 44, '=');
   DigraphInsertA(G, 35, 44, '!');
   DigraphInsertA(G, 35, 44, '<');
   DigraphInsertA(G, 35, 44, '>');
   DigraphInsertA(G, 35, 44, ';');

   DigraphInsertA(G, 35, 0, '+');
   DigraphInsertA(G, 35, 0, '-');
   DigraphInsertA(G, 35, 0, '/');
   DigraphInsertA(G, 35, 0, '*');
   DigraphInsertA(G, 35, 0, '(');
   DigraphInsertA(G, 35, 0, ')');
   DigraphInsertA(G, 35, 0, '=');
   DigraphInsertA(G, 35, 0, '!');
   DigraphInsertA(G, 35, 0, '<');
   DigraphInsertA(G, 35, 0, '>');
   DigraphInsertA(G, 35, 0, ';');

/*******************************************/
/*************** Token de ID´s *************/

   DigraphInsertA(G, 0, 45, 'a');
   DigraphInsertA(G, 0, 45, 'b');
   DigraphInsertA(G, 0, 45, 'c');
   DigraphInsertA(G, 0, 45, 'd');
   DigraphInsertA(G, 0, 45, 'e');
   DigraphInsertA(G, 0, 45, 'f');
   DigraphInsertA(G, 0, 45, 'g');
   DigraphInsertA(G, 0, 45, 'h');
   DigraphInsertA(G, 0, 45, 'i');
   DigraphInsertA(G, 0, 45, 'j');
   DigraphInsertA(G, 0, 45, 'k');
   DigraphInsertA(G, 0, 45, 'l');
   DigraphInsertA(G, 0, 45, 'm');
   DigraphInsertA(G, 0, 45, 'n');
   DigraphInsertA(G, 0, 45, 'o');
   DigraphInsertA(G, 0, 45, 'p');
   DigraphInsertA(G, 0, 45, 'q');
   DigraphInsertA(G, 0, 45, 'r');
   DigraphInsertA(G, 0, 45, 's');
   DigraphInsertA(G, 0, 45, 't');
   DigraphInsertA(G, 0, 45, 'u');
   DigraphInsertA(G, 0, 45, 'v');
   DigraphInsertA(G, 0, 45, 'x');
   DigraphInsertA(G, 0, 45, 'z');
   DigraphInsertA(G, 0, 45, 'w');
   DigraphInsertA(G, 0, 45, 'y');

/*******************************************/
/*************** Token de ID´s *************/

   DigraphInsertA(G, 45, 45, 'a');
   DigraphInsertA(G, 45, 45, 'b');
   DigraphInsertA(G, 45, 45, 'c');
   DigraphInsertA(G, 45, 45, 'd');
   DigraphInsertA(G, 45, 45, 'e');
   DigraphInsertA(G, 45, 45, 'f');
   DigraphInsertA(G, 45, 45, 'g');
   DigraphInsertA(G, 45, 45, 'h');
   DigraphInsertA(G, 45, 45, 'i');
   DigraphInsertA(G, 45, 45, 'j');
   DigraphInsertA(G, 45, 45, 'k');
   DigraphInsertA(G, 45, 45, 'l');
   DigraphInsertA(G, 45, 45, 'm');
   DigraphInsertA(G, 45, 45, 'n');
   DigraphInsertA(G, 45, 45, 'o');
   DigraphInsertA(G, 45, 45, 'p');
   DigraphInsertA(G, 45, 45, 'q');
   DigraphInsertA(G, 45, 45, 'r');
   DigraphInsertA(G, 45, 45, 's');
   DigraphInsertA(G, 45, 45, 't');
   DigraphInsertA(G, 45, 45, 'u');
   DigraphInsertA(G, 45, 45, 'v');
   DigraphInsertA(G, 45, 45, 'x');
   DigraphInsertA(G, 45, 45, 'z');
   DigraphInsertA(G, 45, 45, 'w');
   DigraphInsertA(G, 45, 45, 'y');
   DigraphInsertA(G, 45, 46, ' ');
   DigraphInsertA(G, 45, 46, '\n');
   DigraphInsertA(G, 45, 46, '\t');
   DigraphInsertA(G, 45, 0, ' ');
   DigraphInsertA(G, 45, 0, '\n');
   DigraphInsertA(G, 45, 0, '\t');

   DigraphInsertA(G, 45, 51, '+');
   DigraphInsertA(G, 45, 52, '-');
   DigraphInsertA(G, 45, 53, '/');
   DigraphInsertA(G, 45, 54, '*');
   DigraphInsertA(G, 45, 55, '(');
   DigraphInsertA(G, 45, 56, ')');
   DigraphInsertA(G, 45, 57, '=');
   DigraphInsertA(G, 45, 58, '!');
   DigraphInsertA(G, 45, 59, '<');
   DigraphInsertA(G, 45, 60, '>');
   DigraphInsertA(G, 45, 61, ';');

   DigraphInsertA(G, 45, 46, '+');
   DigraphInsertA(G, 45, 46, '-');
   DigraphInsertA(G, 45, 46, '/');
   DigraphInsertA(G, 45, 46, '*');
   DigraphInsertA(G, 45, 46, '(');
   DigraphInsertA(G, 45, 46, ')');
   DigraphInsertA(G, 45, 46, '=');
   DigraphInsertA(G, 45, 46, '!');
   DigraphInsertA(G, 45, 46, '<');
   DigraphInsertA(G, 45, 46, '>');
   DigraphInsertA(G, 45, 46, ';');

   DigraphInsertA(G, 45, 0, '+');
   DigraphInsertA(G, 45, 0, '-');
   DigraphInsertA(G, 45, 0, '/');
   DigraphInsertA(G, 45, 0, '*');
   DigraphInsertA(G, 45, 0, '(');
   DigraphInsertA(G, 45, 0, ')');
   DigraphInsertA(G, 45, 0, '=');
   DigraphInsertA(G, 45, 0, '!');
   DigraphInsertA(G, 45, 0, '<');
   DigraphInsertA(G, 45, 0, '>');
   DigraphInsertA(G, 45, 0, ';');

/*******************************************/
/************ Token de CONSTANTES **********/

   DigraphInsertA(G, 0, 47, '0');
   DigraphInsertA(G, 0, 47, '1');
   DigraphInsertA(G, 0, 47, '2');
   DigraphInsertA(G, 0, 47, '3');
   DigraphInsertA(G, 0, 47, '4');
   DigraphInsertA(G, 0, 47, '5');
   DigraphInsertA(G, 0, 47, '6');
   DigraphInsertA(G, 0, 47, '7');
   DigraphInsertA(G, 0, 47, '8');
   DigraphInsertA(G, 0, 47, '9');

/*******************************************/
/*********** Token de CONSTANTES ***********/

   DigraphInsertA(G, 47, 47, '0');
   DigraphInsertA(G, 47, 47, '1');
   DigraphInsertA(G, 47, 47, '2');
   DigraphInsertA(G, 47, 47, '3');
   DigraphInsertA(G, 47, 47, '4');
   DigraphInsertA(G, 47, 47, '5');
   DigraphInsertA(G, 47, 47, '6');
   DigraphInsertA(G, 47, 47, '7');
   DigraphInsertA(G, 47, 47, '8');
   DigraphInsertA(G, 47, 47, '9');
   DigraphInsertA(G, 47, 48, ' ');
   DigraphInsertA(G, 47, 48, '\n');
   DigraphInsertA(G, 47, 48, '\t');
   DigraphInsertA(G, 47, 0, ' ');
   DigraphInsertA(G, 47, 0, '\n');
   DigraphInsertA(G, 47, 0, '\t');

   DigraphInsertA(G, 47, 51, '+');
   DigraphInsertA(G, 47, 52, '-');
   DigraphInsertA(G, 47, 53, '/');
   DigraphInsertA(G, 47, 54, '*');
   DigraphInsertA(G, 47, 55, '(');
   DigraphInsertA(G, 47, 56, ')');
   DigraphInsertA(G, 47, 57, '=');
   DigraphInsertA(G, 47, 58, '!');
   DigraphInsertA(G, 47, 59, '<');
   DigraphInsertA(G, 47, 60, '>');
   DigraphInsertA(G, 47, 61, ';');

   DigraphInsertA(G, 47, 48, '+');
   DigraphInsertA(G, 47, 48, '-');
   DigraphInsertA(G, 47, 48, '/');
   DigraphInsertA(G, 47, 48, '*');
   DigraphInsertA(G, 47, 48, '(');
   DigraphInsertA(G, 47, 48, ')');
   DigraphInsertA(G, 47, 48, '=');
   DigraphInsertA(G, 47, 48, '!');
   DigraphInsertA(G, 47, 48, '<');
   DigraphInsertA(G, 47, 48, '>');
   DigraphInsertA(G, 47, 48, ';');

   DigraphInsertA(G, 47, 0, '+');
   DigraphInsertA(G, 47, 0, '-');
   DigraphInsertA(G, 47, 0, '/');
   DigraphInsertA(G, 47, 0, '*');
   DigraphInsertA(G, 47, 0, '(');
   DigraphInsertA(G, 47, 0, ')');
   DigraphInsertA(G, 47, 0, '=');
   DigraphInsertA(G, 47, 0, '!');
   DigraphInsertA(G, 47, 0, '<');
   DigraphInsertA(G, 47, 0, '>');
   DigraphInsertA(G, 47, 0, ';');

/********************************************/
/************ Tratamento de erros ***********/

   DigraphInsertA(G, 49, 0, ' ');
   DigraphInsertA(G, 49, 0, '\n');
   DigraphInsertA(G, 49, 0, '\t');

   DigraphInsertA(G, 49, 0, '+');
   DigraphInsertA(G, 49, 0, '-');
   DigraphInsertA(G, 49, 0, '/');
   DigraphInsertA(G, 49, 0, '*');
   DigraphInsertA(G, 49, 0, '(');
   DigraphInsertA(G, 49, 0, ')');
   DigraphInsertA(G, 49, 0, '=');
   DigraphInsertA(G, 49, 0, '!');
   DigraphInsertA(G, 49, 0, '<');
   DigraphInsertA(G, 49, 0, '>');
   DigraphInsertA(G, 49, 0, ';');

   DigraphInsertA(G, 49, 51, '+');
   DigraphInsertA(G, 49, 52, '-');
   DigraphInsertA(G, 49, 53, '/');
   DigraphInsertA(G, 49, 54, '*');
   DigraphInsertA(G, 49, 55, '(');
   DigraphInsertA(G, 49, 56, ')');
   DigraphInsertA(G, 49, 57, '=');
   DigraphInsertA(G, 49, 58, '!');
   DigraphInsertA(G, 49, 59, '<');
   DigraphInsertA(G, 49, 60, '>');
   DigraphInsertA(G, 49, 61, ';');


   DigraphInsertA(G, 50, 0, ' ');
   DigraphInsertA(G, 50, 0, '\n');
   DigraphInsertA(G, 50, 0, '\t');

   DigraphInsertA(G, 50, 0, '+');
   DigraphInsertA(G, 50, 0, '-');
   DigraphInsertA(G, 50, 0, '/');
   DigraphInsertA(G, 50, 0, '*');
   DigraphInsertA(G, 50, 0, '(');
   DigraphInsertA(G, 50, 0, ')');
   DigraphInsertA(G, 50, 0, '=');
   DigraphInsertA(G, 50, 0, '!');
   DigraphInsertA(G, 50, 0, '<');
   DigraphInsertA(G, 50, 0, '>');
   DigraphInsertA(G, 50, 0, ';');


   DigraphInsertA(G, 50, 51, '+');
   DigraphInsertA(G, 50, 52, '-');
   DigraphInsertA(G, 50, 53, '/');
   DigraphInsertA(G, 50, 54, '*');
   DigraphInsertA(G, 50, 55, '(');
   DigraphInsertA(G, 50, 56, ')');
   DigraphInsertA(G, 50, 57, '=');
   DigraphInsertA(G, 50, 58, '!');
   DigraphInsertA(G, 50, 59, '<');
   DigraphInsertA(G, 50, 60, '>');
   DigraphInsertA(G, 50, 61, ';');

   DigraphInsertA(G, 0, 51, '+');
   DigraphInsertA(G, 0, 52, '-');
   DigraphInsertA(G, 0, 53, '/');
   DigraphInsertA(G, 0, 54, '*');
   DigraphInsertA(G, 0, 55, '(');
   DigraphInsertA(G, 0, 56, ')');
   DigraphInsertA(G, 0, 57, '=');
   DigraphInsertA(G, 0, 58, '!');
   DigraphInsertA(G, 0, 59, '<');
   DigraphInsertA(G, 0, 60, '>');
   DigraphInsertA(G, 0, 61, ';');


   G->Est_inicial = 0;

   /************** Producoes dos estados ************/

   G->adj[0][0].producao   = PALAVRA_VAZIA;
   G->adj[1][1].producao   = PALAVRA_VAZIA;
   G->adj[2][2].producao   = PALAVRA_VAZIA;
   G->adj[3][3].producao   = PALAVRA_VAZIA;
   G->adj[4][4].producao   = PALAVRA_VAZIA;
   G->adj[5][5].producao   = PALAVRA_VAZIA;
   G->adj[6][6].producao   = PALAVRA_VAZIA;
   G->adj[7][7].producao   = PALAVRA_VAZIA;
   G->adj[8][8].producao   = PALAVRA_VAZIA;
   G->adj[9][9].producao   = PALAVRA_VAZIA;
   G->adj[10][10].producao = PALAVRA_VAZIA;
   G->adj[11][11].producao = PALAVRA_VAZIA;
   G->adj[12][12].producao = PALAVRA_VAZIA;
   G->adj[13][13].producao = PALAVRA_VAZIA;
   G->adj[14][14].producao = PALAVRA_VAZIA;
   G->adj[15][15].producao = PALAVRA_VAZIA;
   G->adj[16][16].producao = PALAVRA_VAZIA;
   G->adj[17][17].producao = PALAVRA_VAZIA;
   G->adj[18][18].producao = PALAVRA_VAZIA;
   G->adj[19][19].producao = PALAVRA_VAZIA;
   G->adj[20][20].producao = PALAVRA_VAZIA;
   G->adj[21][21].producao = PALAVRA_VAZIA;
   G->adj[22][22].producao = PALAVRA_VAZIA;
   G->adj[23][23].producao = PALAVRA_VAZIA;
   G->adj[24][24].producao = PALAVRA_VAZIA;
   G->adj[25][25].producao = PALAVRA_VAZIA;
   G->adj[26][26].producao = PALAVRA_VAZIA;
   G->adj[27][27].producao = PALAVRA_VAZIA;
   G->adj[28][28].producao = PALAVRA_VAZIA;
   G->adj[29][29].producao = PALAVRA_VAZIA;
   G->adj[30][30].producao = PALAVRA_VAZIA;
   G->adj[31][31].producao = PALAVRA_VAZIA;
   G->adj[32][32].producao = PALAVRA_VAZIA;
   G->adj[33][33].producao = PALAVRA_VAZIA;
   G->adj[34][34].producao = PALAVRA_VAZIA;
   G->adj[35][35].producao = PALAVRA_VAZIA;
   G->adj[45][45].producao = PALAVRA_VAZIA;
   G->adj[47][47].producao = PALAVRA_VAZIA;
   G->adj[50][50].producao = PALAVRA_VAZIA;

/*******************************************/
/****************** Tokens *****************/

   G->adj[36][36].producao = 1;		/* Token MAIN 					*/
   G->adj[37][37].producao = 2;		/* Token WHILE 					*/
   G->adj[38][38].producao = 3;		/* Token IF 					*/
   G->adj[39][39].producao = 4;		/* Token END 					*/
   G->adj[40][40].producao = 5;		/* Token ELSE 					*/
   G->adj[41][41].producao = 6;		/* Token THEN					*/
   G->adj[42][42].producao = 7;		/* Token RETURN 				*/
   G->adj[43][43].producao = 8;		/* Token VAR 					*/
   G->adj[44][44].producao = 9;		/* Token BREAK 					*/
   G->adj[46][46].producao = 10;		/* Token OPERADORES				*/
   G->adj[48][48].producao = 11;		/* Token CONSTANTES 			*/
   G->adj[49][49].producao = 12;		/* Token ESTADO DE ERRO 		*/

   G->adj[51][51].producao = 13;		/* Token SOMA 			  |+|	*/
   G->adj[52][52].producao = 14;		/* Token SUBTRACAO 		  |-|	*/
   G->adj[53][53].producao = 15;		/* Token DIVISAO 		  |/|	*/
   G->adj[54][54].producao = 16;		/* Token MULTIPLICACAO 	  |*|	*/
   G->adj[55][55].producao = 17;		/* Token ABRE PARENTESES  |(|	*/
   G->adj[56][56].producao = 18;		/* Token FECHA PARENTESES |)|	*/
   G->adj[57][57].producao = 19;		/* Token ATRIBUICAO 	  |=|	*/
   G->adj[58][58].producao = 20;		/* Token NEGACAO		  |!|	*/
   G->adj[59][59].producao = 21;		/* Token MENOR 			  |<|	*/
   G->adj[60][60].producao = 22;		/* Token MAIOR 			  |>|	*/
   G->adj[61][61].producao = 23;		/* Token PONTO E VIRGULA  |;|	*/
   G->adj[62][62].producao = 12;		/* Token ESTADO DE ERRO			*/

   return G;
}
