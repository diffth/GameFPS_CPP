// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Gun/ShooterLaserPointer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterLaserPointer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterLaserPointer();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterLaserPointer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	void AShooterLaserPointer::StaticRegisterNativesAShooterLaserPointer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterLaserPointer);
	UClass* Z_Construct_UClass_AShooterLaserPointer_NoRegister()
	{
		return AShooterLaserPointer::StaticClass();
	}
	struct Z_Construct_UClass_AShooterLaserPointer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterLaserPointer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterLaserPointer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterLaserPointer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gun/ShooterLaserPointer.h" },
		{ "ModuleRelativePath", "Private/Gun/ShooterLaserPointer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterLaserPointer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterLaserPointer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterLaserPointer_Statics::ClassParams = {
		&AShooterLaserPointer::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterLaserPointer_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterLaserPointer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AShooterLaserPointer()
	{
		if (!Z_Registration_Info_UClass_AShooterLaserPointer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterLaserPointer.OuterSingleton, Z_Construct_UClass_AShooterLaserPointer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterLaserPointer.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UClass* StaticClass<AShooterLaserPointer>()
	{
		return AShooterLaserPointer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterLaserPointer);
	AShooterLaserPointer::~AShooterLaserPointer() {}
	struct Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterLaserPointer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterLaserPointer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterLaserPointer, AShooterLaserPointer::StaticClass, TEXT("AShooterLaserPointer"), &Z_Registration_Info_UClass_AShooterLaserPointer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterLaserPointer), 2983399007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterLaserPointer_h_1313318603(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterLaserPointer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterLaserPointer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
