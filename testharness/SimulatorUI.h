#ifndef SIMULATOR_UI_H_
#define SIMULATOR_UI_H_

class Simulator;

class SimulatorUI
{
    public:
        virtual int main(int argc, char *argv[], Simulator *sim) = 0;

};

#endif
