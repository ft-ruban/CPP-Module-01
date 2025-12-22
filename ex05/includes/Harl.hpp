# ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

typedef  void (Harl::*complain)(std::string level);  // Please do this!

class Harl{
    public:
        Harl( void );
        ~Harl( void );
        void complain( std::string level ){
            // level(void);
        }

    private:
        void debug( void ){
            std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"<<std::endl;
        }
        void info( void ){
            std::cout<<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
        }
        void warning( void ){
            std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."<<std::endl;
        }
        void error( void ){
            std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
        }
};

#endif