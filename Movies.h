#ifndef __MOVIES_H_
#define __MOVIES_H_
#include <iostream>
#include <string>
#include <vector>
// so we can access all the movie methods
#include "Movie.h"

using namespace std;

class Movies
{
  // Movies contains the vector of Movie
  vector<Movie> movs;

public:
  Movies();
  vector<Movie> &getMovies();
  void addMovie(std::string, std::string, int);
};

#endif