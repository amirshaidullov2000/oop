#pragma once

#include "renderSystem.h"

const int levelRows = screenRows;
const int levelColumns = screenColumns;

const float shipSpeed = 35.0;
const float shipFireCooldown = 0.15;

const float bulletSpeed = 40.0;

const float alienAmplitude = 7.0;
const float alienSpeed = 0.25;


const unsigned char	CellSymbol_Ship = 'S';
const unsigned char	CellSymbol_Bullet = '|';
const unsigned char	CellSymbol_Alien = 'X';

const unsigned char levelData0[levelRows][levelColumns + 1] =
{
	"          X        XXXXXXX                           XXXXXXX         X          ",
	"         XXX  XXXXXXXXXXXXXXXXXXXXXXXXX  XXXXXXXXXXXXXXXXXXXXXXXXX  XXX         ",
	"           XXXXX XX XXXXXXX  XXXXXXXXXXXXXXXXXXXXXX  XXXXXXX XX XXXXX           ",
	"         XXXXXXXX   X  X  X  X  XXX  XXXXXX  XXX  X  X  X  X   XXXXXXXX         ",
	"            XXXX    X  X     XXXXXXX  XXXX  XXXXXXX     X  X    XXXX            ",
	"            XXX       X      X   XXXXX XXX XXXX   X      X       XXX            ",
	"           X  XX            X     XXXXX  XXXXX     X            XX  X           ",
	"           X  XX           X       X  XXXX  X       X           XX  X           ",
	"               X                  X   X  X   X                  X               ",
	"               X     X            X   X  X   X           X      X               ",
	"                    XXX           X  X    X  X          XXX                     ",
	"                X    X              X XXXX X             X     X                ",
	"                 X                     XX                     X                 ",
	"                                       XX                                       ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                                                                ",
	"                                       S                                        ",
};


unsigned char GetRenderCellSymbol(unsigned char cellSymbol)
{
	switch (cellSymbol)
	{
	case CellSymbol_Ship:			return 202;
	case CellSymbol_Bullet:			return 179;
	case CellSymbol_Alien:			return 2;
	}
	return '?';
}

ConsoleColor GetRenderCellSymbolColor(unsigned char cellSymbol)
{
	switch (cellSymbol)
	{
	case CellSymbol_Ship:			return ConsoleColor_White;
	case CellSymbol_Bullet:			return ConsoleColor_Red;
	case CellSymbol_Alien:			return ConsoleColor_Green;
	}
	return ConsoleColor_Gray;
}

ConsoleColor GetRenderCellSymbolBackgroundColor(unsigned char cellSymbol)
{
	switch (cellSymbol)
	{
	case CellSymbol_Ship:			return ConsoleColor_DarkGray;
	}

	return ConsoleColor_Black;
}