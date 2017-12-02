
#ifndef PARKINGGARAGEMANAGER_H_INCLUDED
#define PARKINGGARAGEMANAGER_H_INCLUDED

#include <string>

using namespace std;

class Manager{
    
public:
    
    //manager constructor
    Manager(string user);
    
    //Setters
    void set_username (string user);
    void set_password (string pass);
    
    //Getters
    string get_password ();
    string get_username ();
    
    
private:
    //manager variables
    string username;
    string password;
    
};


#endif // PARKINGGARAGEMANAGER_H_INCLUDED

