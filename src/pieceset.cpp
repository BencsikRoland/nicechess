/***************************************************************************
 * NiceChess
 * https://github.com/BencsikRoland/nicechess
 *
 * File : pieceset.cpp
 * Authors : Mike Cook, Joe Flint, Neil Pankey, Bencsik Roland
 **************************************************************************/

#include "pieceset.h"

bool PieceSet::load() { return true; }

bool PieceSet::unload() { return true; }

bool PieceSet::loadGL() { return true; }

bool PieceSet::unloadGL() { return true; }

void PieceSet::selectPosition(const BoardPosition& bp) 
{
  m_selected = bp;
}

void PieceSet::deselectPosition() 
{
  m_selected.invalidate();
}

bool PieceSet::hasSelectedPosition() 
{
  return m_selected.isValid();
}

void PieceSet::hoverPosition(const ChessGameState& gs, const BoardPosition& bp) 
{
  m_current = bp;
}

void PieceSet::mousePosition(float x, float y)
{
  m_mouseX = x;
  m_mouseY = y;
}


// end of file pieceset.cpp
