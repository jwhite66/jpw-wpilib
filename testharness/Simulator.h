/*
    WPILib Test Harness
    Copyright (C) 2009 Dustin Spicuzza <dustin@virtualroadside.com>

        $Id: Simulator.h 304 2009-03-14 09:31:05Z dspicuzz $

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

#ifndef SIMULATOR_SIMULATOR_H
#define SIMULATOR_SIMULATOR_H

#include <NetworkCommunication/FRCComm.h>

#include <vector>
#include <vxWorks.h>

#include "SimulatorUI.h"

/// provided to decouple the GUI related code from the simulation code
class Simulator
{
public:
        void Init(SimulatorUI *ui);
        void Run(void);
        void Step(void);
        void Stop(void);

        FRCCommonControlData *GetControlData(void) { return &controlData; }
        void setNewDataSem(SEM_ID s) { m_data_sem = s; }


private:
        bool stop_now;
        SimulatorUI *m_ui;
        SEM_ID m_data_sem;

        // driver station data going to the simulation
        FRCCommonControlData controlData;
};

#if ! defined(OWN_GLOBAL_SIMULATOR)
extern Simulator global_simulator;
#endif

#endif
