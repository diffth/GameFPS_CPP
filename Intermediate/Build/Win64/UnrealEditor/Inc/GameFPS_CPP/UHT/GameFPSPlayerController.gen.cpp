// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Gameplay/GameFPSPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFPSPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AGameFPSPlayerController();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AGameFPSPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	void AGameFPSPlayerController::StaticRegisterNativesAGameFPSPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameFPSPlayerController);
	UClass* Z_Construct_UClass_AGameFPSPlayerController_NoRegister()
	{
		return AGameFPSPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGameFPSPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameFPSPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameFPSPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameFPSPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Gameplay/GameFPSPlayerController.h" },
		{ "ModuleRelativePath", "Private/Gameplay/GameFPSPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameFPSPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameFPSPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameFPSPlayerController_Statics::ClassParams = {
		&AGameFPSPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameFPSPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameFPSPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGameFPSPlayerController()
	{
		if (!Z_Registration_Info_UClass_AGameFPSPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameFPSPlayerController.OuterSingleton, Z_Construct_UClass_AGameFPSPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameFPSPlayerController.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UClass* StaticClass<AGameFPSPlayerController>()
	{
		return AGameFPSPlayerController::StaticClass();
	}
	AGameFPSPlayerController::AGameFPSPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameFPSPlayerController);
	AGameFPSPlayerController::~AGameFPSPlayerController() {}
	struct Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_GameFPSPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_GameFPSPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameFPSPlayerController, AGameFPSPlayerController::StaticClass, TEXT("AGameFPSPlayerController"), &Z_Registration_Info_UClass_AGameFPSPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameFPSPlayerController), 3670650922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_GameFPSPlayerController_h_3682391967(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_GameFPSPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_GameFPSPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
