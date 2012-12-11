#include <stdio.h>
#include <stdlib.h>

#include "Simulator.h"

int main(int argc, char *argv[])
{
    global_simulator.Init();
    global_simulator.Run();
}
