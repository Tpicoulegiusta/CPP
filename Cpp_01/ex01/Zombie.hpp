#ifndef ZOMBIE
# define ZOMBIE
#include <string>

class Zombie
{
    private :
        std::string _name;

    public :
        Zombie();
        ~Zombie();
        void announce();
        void change_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
