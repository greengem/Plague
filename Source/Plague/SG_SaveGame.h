#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SG_SaveGame.generated.h"

UCLASS()
class PLAGUE_API USG_SaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	// Constructor
	USG_SaveGame();

	// Player Health
	UPROPERTY(VisibleAnywhere, Category = "Player Data")
	float PlayerHealth;

	// Player Max Health
	UPROPERTY(VisibleAnywhere, Category = "Player Data")
	float PlayerMaxHealth;

	// Player Inventory (you can use TArray to store items, inventory slots, etc.)
	UPROPERTY(VisibleAnywhere, Category = "Player Data")
	TArray<FString> PlayerInventory;

	// Game progress (e.g., current level or checkpoint)
	UPROPERTY(VisibleAnywhere, Category = "Game Progress")
	int32 CurrentLevel;

	// Experience Points
	UPROPERTY(VisibleAnywhere, Category = "Player Data")
	int32 PlayerXP;

	// Player Position (use FVector to store player's location)
	UPROPERTY(VisibleAnywhere, Category = "Player Data")
	FVector PlayerPosition;

	// Player Rotation
	UPROPERTY(VisibleAnywhere, Category = "Player Data")
	FRotator PlayerRotation;

	// Anything else you need to save like quest data, achievements, etc.
};
