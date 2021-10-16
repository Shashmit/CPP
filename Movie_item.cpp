#include <iostream>
using namespace std;
 
class Movie{
    private:
     string title;
     int year;
     string name_of_director;
    
    public:
    void setTitle(string itle){
        title = itle;
    }
    void setYear(int Year){
        year = Year;
    }
    void setDirector(string ame_of_director){
        name_of_director = ame_of_director;
    }
    void printt(){
        cout<<"Movie name : "<<title<<endl;
        cout<<"Year of release : "<<year<<endl;
        cout<<"Director Name : "<<name_of_director<<endl;
    }
 
};
 
 
int main() {
Movie myFavoriteMovie;
int Year;
string itle;
string ame_of_director;
    cout<<"Enter the name of the movie : "<<endl;
    getline(cin,itle);
    cout<<"Enter release date of movie : "<<endl;
cin >> Year;
fflush(stdin);
    cout<<"Enter the director name : "<<endl;
    fflush(stdout);
    getline(cin,ame_of_director);
    myFavoriteMovie.setTitle(itle);
    myFavoriteMovie.setYear(Year);
    myFavoriteMovie.setDirector(ame_of_director);
    myFavoriteMovie.printt();
return 0;
}
