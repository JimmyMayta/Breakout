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

#ifndef PADDLE_H
#define PADDLE_H

#include <QPainter>

#include <global.H>

class Paddle
{
  int skin = 0;
  int size = 1;

  double width = Global::all_paddles[skin][size].width();
  double height = Global::all_paddles[skin][size].height();
  double dx = 0;
  double x = Global::VIRTUAL_WIDTH/2 - width/2;
  double y = Global::VIRTUAL_HEIGHT - 32;
public:
  Paddle();

  void move_left();

  void move_right();

  void stop();

  void update(double);

  void draw(QPainter &) const;

  QRectF get_collision_rect() const;
};

#endif // PADDLE_H