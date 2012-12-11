#include <stdio.h>
#include <stdlib.h>

#include "Simulator.h"
#include "ConsoleUI.h"

int main(int argc, char *argv[])
{
    ConsoleUI console_ui;
    global_simulator.Init(&console_ui);
    global_simulator.Run();
}
