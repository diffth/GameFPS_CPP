// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Gameplay/ShooterSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_UShooterSaveGame();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_UShooterSaveGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	void UShooterSaveGame::StaticRegisterNativesUShooterSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShooterSaveGame);
	UClass* Z_Construct_UClass_UShooterSaveGame_NoRegister()
	{
		return UShooterSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UShooterSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterSaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterSaveGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Gameplay/ShooterSaveGame.h" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterSaveGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterSaveGame_Statics::ClassParams = {
		&UShooterSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShooterSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UShooterSaveGame_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UShooterSaveGame()
	{
		if (!Z_Registration_Info_UClass_UShooterSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterSaveGame.OuterSingleton, Z_Construct_UClass_UShooterSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShooterSaveGame.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UClass* StaticClass<UShooterSaveGame>()
	{
		return UShooterSaveGame::StaticClass();
	}
	UShooterSaveGame::UShooterSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterSaveGame);
	UShooterSaveGame::~UShooterSaveGame() {}
	struct Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShooterSaveGame, UShooterSaveGame::StaticClass, TEXT("UShooterSaveGame"), &Z_Registration_Info_UClass_UShooterSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterSaveGame), 3178607538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterSaveGame_h_2789035670(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
