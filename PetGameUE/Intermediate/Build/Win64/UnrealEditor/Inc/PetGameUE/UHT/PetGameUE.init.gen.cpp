// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePetGameUE_init() {}
	PETGAMEUE_API UFunction* Z_Construct_UDelegateFunction_PetGameUE_InventoryUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PetGameUE;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PetGameUE()
	{
		if (!Z_Registration_Info_UPackage__Script_PetGameUE.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PetGameUE_InventoryUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PetGameUE",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x23EC583D,
				0xB471DAA7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PetGameUE.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PetGameUE.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PetGameUE(Z_Construct_UPackage__Script_PetGameUE, TEXT("/Script/PetGameUE"), Z_Registration_Info_UPackage__Script_PetGameUE, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x23EC583D, 0xB471DAA7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
