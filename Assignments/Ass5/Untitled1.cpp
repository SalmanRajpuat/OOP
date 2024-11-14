#include <iostream>
#include <string>

using namespace std;

class Entertainment {
private:
    string title;
    string airDate;
    string* genre;   // dynamic array for genre
    int genreCount;  // number of genres
    string type;
    int runtime;
    string country;
    string* actors;  // dynamic array for actors
    int actorCount;  // number of actors
    float rating;

public:
   

    // Parameterized constructor
    Entertainment(string _title, string _airDate, string* _genre, int _genreCount,
        string _type, int _runtime, string _country, string* _actors, int _actorCount,
        float _rating)
        : title(_title), airDate(_airDate), type(_type), runtime(_runtime),
        country(_country), rating(_rating), genreCount(_genreCount), actorCount(_actorCount) {

        // Copy genre array
        genre = new string[genreCount];
        for (int i = 0; i < genreCount; ++i) {
            genre[i] = _genre[i];
        }

        // Copy actors array
        actors = new string[actorCount];
        for (int i = 0; i < actorCount; ++i) {
            actors[i] = _actors[i];
        }
    }

    // Copy constructor (for genre, country, and rating only)
    Entertainment(const Entertainment& other) {
        title = other.title;
        airDate = other.airDate;
        type = other.type;
        runtime = other.runtime;

        // Copy genre array
        genreCount = other.genreCount;
        genre = new string[genreCount];
        for (int i = 0; i < genreCount; ++i) {
            genre[i] = other.genre[i];
        }

        // Copy actors array
        actorCount = other.actorCount;
        actors = new string[actorCount];
        for (int i = 0; i < actorCount; ++i) {
            actors[i] = other.actors[i];
        }

        country = other.country;
        rating = other.rating;
    }

    // Destructor to free dynamically allocated memory
    ~Entertainment() {
        delete[] genre;
        delete[] actors;
    }

    // Method to display information
    void display() {
        cout << "Title: " << title << endl;
        cout << "Air Date: " << airDate << endl;
        cout << "Type: " << type << endl;
        cout << "Runtime: " << runtime << " minutes" << endl;
        cout << "Country: " << country << endl;

        cout << "Genres:";
        for (int i = 0; i < genreCount; ++i) {
            cout << " " << genre[i];
        }
        cout << endl;

        cout << "Actors:";
        for (int i = 0; i < actorCount; ++i) {
            cout << " " << actors[i];
        }
        cout << endl;

        cout << "Rating: " << rating << endl;
        cout << endl;
    }
};

int main() {
    // Create object obj1 and initialize
    string obj1_genre[] = { "Action", "Adventure", "Sci-Fi" };
    int obj1_genre_count = 3;
    string obj1_actors[] = { "Actor1", "Actor2", "Actor3" };
    int obj1_actor_count = 3;

    Entertainment obj1("Movie Title", "2023-01-01", obj1_genre, obj1_genre_count,
        "Movie", 120, "USA", obj1_actors, obj1_actor_count, 8.5);

    // Display obj1
    cout << "Object obj1:" << endl;
    obj1.display();

    // Create obj2 by copying only genre, country, and rating from obj1
    Entertainment obj2 = obj1;

    // Display obj2
    cout << "Object obj2 (copied from obj1):" << endl;
    obj2.display();

    return 0;
}

