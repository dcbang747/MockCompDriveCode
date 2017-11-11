#include <WPILib.h>
#include "OI.h"
using namespace frc;

OI::OI() :
		LeftStick(new Joystick(2)), RightStick(new Joystick(1)) {

Joystick* OI::getDriveStickLeft(); {
	return LeftStick;
}

Joystick* OI::getDriveStickRight(); {
	return RightStick;
}

OI::~OI(); {
	delete LeftStick;
	delete RightStick;
}

}
