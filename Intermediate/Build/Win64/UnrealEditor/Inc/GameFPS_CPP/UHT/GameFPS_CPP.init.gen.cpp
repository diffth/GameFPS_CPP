// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFPS_CPP_init() {}
	GAMEFPS_CPP_API UFunction* Z_Construct_USparseDelegateFunction_GameFPS_CPP_ShooterGameModeOnEndGame__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameFPS_CPP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameFPS_CPP()
	{
		if (!Z_Registration_Info_UPackage__Script_GameFPS_CPP.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_USparseDelegateFunction_GameFPS_CPP_ShooterGameModeOnEndGame__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameFPS_CPP",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7306D909,
				0xFB590A8E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameFPS_CPP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameFPS_CPP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameFPS_CPP(Z_Construct_UPackage__Script_GameFPS_CPP, TEXT("/Script/GameFPS_CPP"), Z_Registration_Info_UPackage__Script_GameFPS_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7306D909, 0xFB590A8E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
