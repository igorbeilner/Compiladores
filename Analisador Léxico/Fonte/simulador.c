/*
 * Project name:
   Analisador Lexico de uma linguagem hipotetica para a disciplina de Contrucao de Compiladores

 * Autor:
   Igor Beilner

 * Revision History:
   Versão 2.0
   16/09/2015

 * Description:
   Representação de uma Maquina de Moore com grafos por Matriz de adjacência

* Test configuration:
      Alterar o arquivo CriaAutomato.c para criar o automato e insirir as conducoes de transicao entre os
      estado, bem como a saida de cada estado.

 * NOTES:
*/

#include "Simulador.h"

int main() {
   Digraph *G;

   G = Constroi();
   Simula(G);

   return 0;
}
