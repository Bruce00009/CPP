#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

Movie::Movie()
{
  cout << "Movie constructor called" << endl;
}

void Movie::createMovie(string name, string rating, int watched)
{
  this->name = name;
  this->rating = rating;
  this->watched = watched;
}