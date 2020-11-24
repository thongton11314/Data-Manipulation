// add comments
// class movie type classis

#ifndef _CLASSIC_
#define _CLASSIC_
#include "media_movie.h"

class Classic : public Movie {

    friend ostream& operator<<(ostream &, const Classic &);
    
public:

    // constructor
    Classic();

    // copy constructor
    Classic(const Classic &classic);
    
    bool setData(ifstream & infile);

    // deconstructor
    virtual ~Classic();

    // setter
    void setMonth(int month);
    void setMajorActorFirst(string name);
    void setMajorActorLast(string name);

    // getter
    int getMonth() const;
    string getMajorActorFirst() const;
    string getMajorActorLast() const;
    virtual char getMovieType() const;

    // function
    void print(ostream & out) const;

    // arithmetic operator, sort by release date and major actor
    virtual bool operator<(const Media&) const;
    virtual bool operator<=(const Media&) const;
    virtual bool operator>(const Media&) const;
    virtual bool operator>=(const Media&) const;
    virtual bool operator==(const Media&) const;
    virtual bool operator!=(const Media&) const;

private:
    string majorActorFirst; 
    string majorActorLast;
    int month;
};
#endif //!_CLASSIC_