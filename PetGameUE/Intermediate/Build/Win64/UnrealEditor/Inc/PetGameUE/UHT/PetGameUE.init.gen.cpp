// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePetGameUE_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PetGameUE;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PetGameUE()
	{
		if (!Z_Registration_Info_UPackage__Script_PetGameUE.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PetGameUE",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x003E3E64,
				0x3491DF5C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PetGameUE.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PetGameUE.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PetGameUE(Z_Construct_UPackage__Script_PetGameUE, TEXT("/Script/PetGameUE"), Z_Registration_Info_UPackage__Script_PetGameUE, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x003E3E64, 0x3491DF5C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
