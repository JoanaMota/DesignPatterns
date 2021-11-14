#include <iostream>
#include "remote_invoker.hpp"
#include "light_commands.hpp"
#include "garage_door_commands.hpp"
#include "stereo_commands.hpp"
#include "macro_command.hpp"

int main()
{
    int nrDevices = 5;
    CSimpleRemoteControl *remote = new CSimpleRemoteControl(nrDevices);

    // Device 1
    CLight *light = new CLight();
    CLightOnCommand *lightOn = new CLightOnCommand(light);
    CLightOffCommand *lightOff = new CLightOffCommand(light);

    // Device 2
    CGarageDoor *garage = new CGarageDoor();
    CGarageDoorOpenCommand *garageOpen = new CGarageDoorOpenCommand(garage);
    CGarageDoorCloseCommand *garageClose = new CGarageDoorCloseCommand(garage);

    // Device 3
    CStereo *stereo = new CStereo();
    CStereoOnCommand *stereoOn = new CStereoOnCommand(stereo);
    CStereoOffCommand *stereoOff = new CStereoOffCommand(stereo);

    std::vector<ICommand *> partyOnCommands = {lightOn, stereoOn};
    std::vector<ICommand *> partyOffCommands = {lightOn, stereoOff};
    CMacroCommand *partyOnMode = new CMacroCommand(partyOnCommands);
    CMacroCommand *partyOffMode = new CMacroCommand(partyOffCommands);

    remote->setCommand(0, lightOn, lightOff);
    remote->setCommand(1, garageOpen, garageClose);
    remote->setCommand(2, stereoOn, stereoOff);
    remote->setCommand(3, partyOnMode, partyOffMode);
    std::cout << "---Remote Control---" << std::endl;
    remote->print();

    remote->onButtonWasPressed(1);
    remote->onButtonWasPressed(2);
    remote->onButtonWasPressed(0);
    remote->undoButtonWasPressed();
    remote->offButtonWasPressed(2);
    remote->offButtonWasPressed(4);
    remote->offButtonWasPressed(0);
    remote->onButtonWasPressed(3);
    remote->offButtonWasPressed(3);
    remote->undoButtonWasPressed();

    delete stereoOff;
    delete stereoOn;
    delete stereo;
    delete garageClose;
    delete garageOpen;
    delete garage;
    delete lightOn;
    delete light;
    delete remote;
    return 0;
}