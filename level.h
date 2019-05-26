#pragma once

#include "renderSystem.h"

const int levelRows = screenRows;
const int levelColumns = screenColumns;

const float shipSpeed = 35.0;
const float shipFireCooldown = 0.2;

const float bulletSpeed = 40.0;

const float alienAmplitude = 7.0;
const float alienSpeed = 0.23;


const unsigned char	CellSymbol_Ship = 'S';
const unsigned char	CellSymbol_Bullet = '|';
const unsigned char	CellSymbol_Alien = 'X';

const unsigned char levelData0[levelRows][levelColumns + 1] =
{
	"                                                                                ",
	"        XX            XX    XX  XXXXXXXX   XXX        XX    XX                  ",
	"        XXXX          XX    XX     XX    XX  XX      XX    XX                   ",
	"        XX  XX        XX    XX     XX   XX    XX    XX    XX                    ", 
	"        XX    XX      XXXXXXXX     XX  XX  XX  XX  XXXXXXXX                     ",
	"        XXXXXXXXXX    XX    XX     XX   XX    XX  XX    XX                      ", 
	"         XX      XX   XX    XX     XX    XX  XX  XX    XX                       ",
	"          XX      XX  XX    XX     XX     XXXX  XX    XX                        ",
	"           XX      XX XX    XX     XX      XX  XX    XX                         ", 
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