#include "instrument.h"


#include <windows.h>
#include <mmsystem.h>
#include <string>
#include <iostream>

class Piano : public Instrument
{
public:
    void jouer() const override
    {
        const char *filePath = "C:\\Users\\n4t10\\Documents\\CESI\\CPI A2\\Prog Orient Obje\\Prosit 4\\Workshop-POO-A_Points\\ex2\\piann.mp3";
        std::string openCommand = "open \"" + std::string(filePath) + "\" type mpegvideo alias mySound";
        mciSendString(openCommand.c_str(), NULL, 0, NULL);
        mciSendString("play mySound wait", NULL, 0, NULL);
        mciSendString("stop mySound", NULL, 0, NULL);
        mciSendString("close mySound", NULL, 0, NULL);
    }
};
