#include "../includes/Harl.hpp"
#include <ostream>

// 1) Main to test the Harl class user just have to write the right instruction
//    they wnat frim Harl and thats pretty much all.
//    it is protected in case user write no arguments.

int main(int argc, char **argv){
    Harl harl;
    if(argc != 2){
        std::cout<<"Error: c.9: no arguments provided, please give an instruction to Harl"<<std::endl;
        return(1);
    }
    harl.complain(argv[1]);
    return(0);
}