#ifndef __MOVIE_H_
#define __MOVIE_H_
#include <iostream>
#include <string>

class Movie
{

public:
  std::string name;
  std::string rating;
  int watched;

  Movie();
  void createMovie(std::string, std::string, int watched);
};

#endif