/***************************************************************************
 * NiceChess
 * https://github.com/BencsikRoland/nicechess
 *
 * File : humanplayer.cpp
 * Authors : Mike Cook, Joe Flint, Neil Pankey
 **************************************************************************/

#include "boardmove.h"
#include "chessplayer.h"
#include "SDL.h"

#include <iostream>

using namespace std;

HumanPlayer::HumanPlayer()
{
  m_is_human = true;
  m_trustworthy = false;
}

void HumanPlayer::think(const ChessGameState & cgs)
{
//  printf("think\n");

  m_move.invalidate();

  while (true)
  {
    if (m_move.isValid())
    {
      break;
    }

    if (m_is_stop_thinking)
    {
      break;
    }

    SDL_Delay(50);
  }
}

void HumanPlayer::sendMove(const BoardMove & m)
{
  m_move = m;
}

// End of file humanplayer.cpp

