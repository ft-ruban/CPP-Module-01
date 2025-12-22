#include <iostream>
#include "../includes/Harl.hpp"

typedef  void (Harl::*complain)(std::string level);  // Please do this!

int main(){
    //Harl harl;
    complain debug = &Harl::complain;
    std::cout<<"Hello World."<<std::endl;
    return(0);
}