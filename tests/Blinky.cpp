#include "BrainPad.h"

BrainPad brain;

void
onClick(Event)
{
    DMESG("CLICK");
}

int
main()
{
    brain.init();
    brain.serial.printf(" *** BRAINPAD BLINKY TEST ***");

    brain.messageBus.listen(DEVICE_ID_BUTTON_A, DEVICE_BUTTON_EVT_CLICK, onClick);

    while(1)
    {
        brain.io.led.setDigitalValue(1);
        brain.sleep(200);

        brain.io.led.setDigitalValue(0);
        brain.sleep(200);
    }
}
