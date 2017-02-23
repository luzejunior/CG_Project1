#include "main.h"

//-----------------------------------------------------------------------------
void MyGlDraw(void)
{
	//*************************************************************************
	// Chame aqui as funções do mygl.h
	//*************************************************************************
	//putPixel(-254, 254, colorGreen);
	// drawLine(0,0, colorRed, 200, 100, colorGreen); //1 octante
	// drawLine(0,0, colorRed, 100, 200, colorGreen); //2 octante
	// drawLine(0,0, colorRed, -100, 200, colorGreen); //3 octante
	//drawLine(0,0, colorRed, -200, 100, colorGreen); //4 octante
	//drawLine(0,0, colorRed, -200, -100, colorGreen); //5 octante
	// drawLine(0,0, colorRed, -100, -200, colorGreen); //6 octante
	//drawLine(0,0, colorRed, 100, -200, colorGreen); //7 octante
	//drawLine(0,0, colorRed, 200, -100, colorGreen); //8 octante
	//drawLine(-100, 0, colorRed, -100, 90, colorGreen);
	//drawLine(-100, 0, colorRed, 100, 0, colorBlue);
	//drawLine(-100, 90, colorGreen, 100, 0, colorBlue);
	drawTriangle(-100, 0, colorRed, -100, 90, colorGreen, 100, 0, colorBlue);
}

//-----------------------------------------------------------------------------
int main(int argc, char **argv)
{
	// Inicializações.
	InitOpenGL(&argc, argv);
	InitCallBacks();
	InitDataStructures();

	// Ajusta a função que chama as funções do mygl.h
	DrawFunc = MyGlDraw;	

	// Framebuffer scan loop.
	glutMainLoop();

	return 0;
}

