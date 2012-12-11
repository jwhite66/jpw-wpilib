/*
    WPILib Test Harness
    Copyright (C) 2009 Dustin Spicuzza <dustin@virtualroadside.com>

        $Id: Simulator.cpp 304 2009-03-14 09:31:05Z dspicuzz $

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License v3 as published by
    the Free Software Foundation.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#define OWN_GLOBAL_SIMULATOR
#include "Simulator.h"

#include <DigitalInput.h>
#include <Encoder.h>
#include <Gyro.h>
#include <Notifier.h>
#include <PWM.h>

#include <RobotBase.h>
extern "C" void FRC_UserProgram_StartupLibraryInit();
extern void PacketReady(void);

#include <vector>
using namespace std;

void Simulator::Init(void)
{
    FRC_UserProgram_StartupLibraryInit();
}

// does not return until simulation is complete
void Simulator::Run(void)
{
    // Run a loop
    while (!exit_now)
        Step();
}

void Simulator::Step()
{
}

void Simulator::Exit()
{
    exit_now = true;
}

Simulator global_simulator;
