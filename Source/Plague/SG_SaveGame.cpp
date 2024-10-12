#include "SG_SaveGame.h"

USG_SaveGame::USG_SaveGame()
{
	// Default values
	PlayerHealth = 100.0f;
	PlayerMaxHealth = 100.0f;
	CurrentLevel = 1;
	PlayerXP = 0;

	// Empty inventory by default
	PlayerInventory.Empty();

	// Default player position and rotation
	PlayerPosition = FVector::ZeroVector;
	PlayerRotation = FRotator::ZeroRotator;
}
