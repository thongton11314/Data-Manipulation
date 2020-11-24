// add comments here
// parents class of movie class. This is pure virtual function
#ifndef _MEDIA_
#define _MEDIA_
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include <sstream>

using namespace std;

const int DEFAULT_STOCK = 0;
const string DEFAULT_TITLE = "DEFAULT";
const string DEFAULT_PERSON = "DEFAULT";
const int DEFAULT_NUM = 0;
class Media {
    
    // use to use << opertor
    friend ostream& operator<<(ostream & out, const Media & media);
    
public :

    // deconstructor, for late binding
	virtual ~Media();

    // setter
    virtual void setStock(unsigned int amount);
    virtual bool setData(ifstream & infile) = 0;
	
    // getter
    virtual int getStock() const;

    // function
    virtual void addStock(unsigned int amount);
    virtual bool reduceStock(int amount);
    
    // pure virtual function
    virtual string getMediaType() const = 0;

    // arithmetic operator    
    virtual bool operator<(const Media&) const = 0;
    virtual bool operator<=(const Media&) const = 0;
    virtual bool operator>(const Media&) const = 0;
    virtual bool operator>=(const Media&) const = 0;
    virtual bool operator==(const Media&) const = 0;
    virtual bool operator!=(const Media&) const = 0;
    
protected:
    int stock;

    // subfunction for operator<<
    virtual void print(ostream & out) const = 0;
};

#endif //!_MEDIA_