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

#include <random.H>

Random::Random()
  : rng(clock_t::now().time_since_epoch().count())
{
  // Empty
}

void Random::set_seed(unsigned s)
{
  rng.seed(s);
}

double Random::unif()
{
  return std::generate_canonical<double, 64>(rng);
}

double Random::unif(double n)
{
  return unif(0.0, n);
}

double Random::unif(double a, double b)
{
  std::uniform_real_distribution<double> dist(a, b);
  return dist(rng);
}

int Random::unif(int n)
{
  return unif(0, n);
}

int Random::unif(int a, int b)
{
  std::uniform_int_distribution<int> dist(a, b - 1);
  return dist(rng);
}

bool Random::flip_coin(double p)
{
  return unif() > p;
}

double Random::normal(double mu, double sigma)
{
  std::normal_distribution<double> dist(mu, sigma);
  return dist(rng);
}
