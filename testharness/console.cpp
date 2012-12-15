#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "Simulator.h"
#include "ConsoleUI.h"

int main(int argc, char *argv[])
{
    ConsoleUI console_ui;
    global_simulator.Init(&console_ui);
    console_ui.main(argc, argv, &global_simulator);
}


void PacketReady();
int ConsoleUI::main(int argc, char *argv[], Simulator *sim)
{
    char buf[256];

    while (! feof(stdin))
    {
        printf("cmd> ");
        fflush(stdout);
        gets(buf);

        switch(tolower(buf[0]))
        {
            case 'q':
                return 0;

            case 's':
                sim->Step();
                break;

            default:
                printf("s to send packet, q to quit\n");
        }
    }
    return 0;

}

