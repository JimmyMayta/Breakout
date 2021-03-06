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

#ifndef RANDOM_H
#define RANDOM_H

#include <random>
#include <chrono>

#include <singleton.H>

class Random : public Singleton<Random>
{
  using clock_t = std::chrono::high_resolution_clock;
  std::mt19937_64 rng;

public:
  Random();

  void set_seed(unsigned);

  double unif();

  double unif(double);

  double unif(double, double);

  int unif(int);

  int unif(int, int);

  bool flip_coin(double p = 0.5);

  double normal(double mu = 0, double sigma = 1);
};

#endif // RANDOM_H
