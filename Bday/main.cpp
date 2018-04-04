#include "birthday.h"
#include "birthday.cpp"

int main (){
    Bday *richard = new Bday(17, 3, 1995);
    richard->show();
    delete richard;
    return 0;
}