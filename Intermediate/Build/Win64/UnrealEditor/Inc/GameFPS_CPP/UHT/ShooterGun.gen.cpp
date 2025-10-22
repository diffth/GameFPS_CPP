// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Gun/ShooterGun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGun() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterGun();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterGun_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	void AShooterGun::StaticRegisterNativesAShooterGun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterGun);
	UClass* Z_Construct_UClass_AShooterGun_NoRegister()
	{
		return AShooterGun::StaticClass();
	}
	struct Z_Construct_UClass_AShooterGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGun_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gun/ShooterGun.h" },
		{ "ModuleRelativePath", "Private/Gun/ShooterGun.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterGun_Statics::ClassParams = {
		&AShooterGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGun_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterGun_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AShooterGun()
	{
		if (!Z_Registration_Info_UClass_AShooterGun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterGun.OuterSingleton, Z_Construct_UClass_AShooterGun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterGun.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UClass* StaticClass<AShooterGun>()
	{
		return AShooterGun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGun);
	AShooterGun::~AShooterGun() {}
	struct Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterGun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterGun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterGun, AShooterGun::StaticClass, TEXT("AShooterGun"), &Z_Registration_Info_UClass_AShooterGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterGun), 1509446842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterGun_h_3967848815(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterGun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
