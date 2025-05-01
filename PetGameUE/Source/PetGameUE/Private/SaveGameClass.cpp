// Copywrite Harry James Dandy 2025


#include "SaveGameClass.h"

USaveGameClass::USaveGameClass()
{
	//defaults
	SaveName = TEXT("SaveSlotTest");
	UserIndex = 0;//set to 0
	PlayerLocation = FVector(0.f, 0.f, 0.f);
	BlueStack = 0;
	GreenStack = 0;
	RedStack = 0;
	YellowStack = 0;
	Gems;

}
