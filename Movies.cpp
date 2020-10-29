#include <iostream>
#include <string>
#include <vector>
#include "Movie.h"
#include "Movies.h"
using namespace std;

Movies::Movies()
{
  cout << "Created the Movies Object" << endl;
}

vector<Movie> &Movies::getMovies()
{
  return movs;
}

void Movies::addMovie(string name, string rating, int watched)
{
  Movie mov;
  mov.createMovie(name, rating, watched);
  vector<Movie> movies = getMovies();
  movies.push_back(mov);

  for (auto &it : movies)
    cout << it.name << endl;
}