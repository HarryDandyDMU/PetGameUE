// Copywrite Harry James Dandy 2025

#pragma once

#include "CoreMinimal.h"



struct PETGAMEUE_API FGemStruct
{
public:

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gem")
		FName GemType;
	
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gem")
		FVector GemLocation;

};
