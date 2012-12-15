#ifndef CONSOLE_UI_H_
#define CONSOLE_UI_H_
#include <stdio.h>


class ConsoleUI : public SimulatorUI
{
    public:
        int main(int argc, char *argv[], Simulator *sim);
};

#endif
