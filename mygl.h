#ifndef _MYGL_H_
#define _MYGL_H_

#include "definitions.h"

//*****************************************************************************
// Defina aqui as suas funções gráficas
//*****************************************************************************

//Função para desenhar pixels na tela.
//Recebe como parametro os pontos X e Y a serem colocados num plano cartesiano na tela.
void putPixel(int x, int y, int RGBA[4]){

	int print_position = ((x+255) + ((255-y) * IMAGE_HEIGHT)) * 4; //Posição do Array da memória onde o Pixel vai ser pintado.

	//Definição do array dos pixels na tela.
	FBptr[print_position] = RGBA[0];
	FBptr[print_position+1] = RGBA[1];
	FBptr[print_position+2] = RGBA[2];
	FBptr[print_position+3] = RGBA[3];
}

#endif // _MYGL_H_

