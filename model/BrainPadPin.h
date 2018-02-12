#ifndef BRAINPAD_PIN_H
#define BRAINPAD_PIN_H

#include "MbedPin.h"
#include "mbed.h"

namespace codal {

    class BrainPadPin : public codal::_mbed::Pin {

	protected:

		void *pin;

	public:


		int getAnalogValue() override;

		BrainPadPin(int id, PinNumber name, PinCapability capability);
	};

}

#endif