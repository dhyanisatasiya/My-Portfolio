/*Create a class representing a `Movie` with attributes like `title`, `genre`, and `releasedYear`.
 Demonstrate the instantiation of objects using array and accessing their attributes.*/
#include <iostream>
#include <string>
using namespace std;

class Movie
{
public:
    string title;
    string genre;
    int releasedYear;
};

int main()
{
    Movie movies[3] = {
        {"Avatar", "Science Fiction", 2009},
        {"Titanic", "Romance", 1997},
        {"Inception", "Thriller", 2010}
    };

    for (int i = 0; i < 3; i++)
    {
        cout << "Movie " << i + 1 << endl;
        cout << "Title: " << movies[i].title << endl;
        cout << "Genre: " << movies[i].genre << endl;
        cout << "Released Year: " << movies[i].releasedYear << endl;
        cout << endl;
    }

    return 0;
}
