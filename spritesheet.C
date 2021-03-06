/*
  This file is part of Breakout game.
  Copyright (C) 2020 by Alejandro J. Mujica

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

  Any user request of this software, write to

  Alejandro Mujica

  aledrums@gmail.com
*/

#include <spritesheet.H>

SpriteSheet::SpriteSheet()
  : breakout(":/images/breakout"), arrows(":/images/arrows"),
    opaque_arrows(":/images/opaque-arrows")
{
  // Empty
}

const QPixmap & SpriteSheet::get_breakout() const
{
  return breakout;
}

const QPixmap & SpriteSheet::get_arrows() const
{
  return arrows;
}

const QPixmap & SpriteSheet::get_opaque_arrows() const
{
  return opaque_arrows;
}
