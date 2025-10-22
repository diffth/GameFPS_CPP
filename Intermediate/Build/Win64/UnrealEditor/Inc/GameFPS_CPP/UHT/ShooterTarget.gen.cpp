// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Target/ShooterTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterTarget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterTarget();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	void AShooterTarget::StaticRegisterNativesAShooterTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterTarget);
	UClass* Z_Construct_UClass_AShooterTarget_NoRegister()
	{
		return AShooterTarget::StaticClass();
	}
	struct Z_Construct_UClass_AShooterTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterTarget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Target/ShooterTarget.h" },
		{ "ModuleRelativePath", "Private/Target/ShooterTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterTarget_Statics::ClassParams = {
		&AShooterTarget::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterTarget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AShooterTarget()
	{
		if (!Z_Registration_Info_UClass_AShooterTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterTarget.OuterSingleton, Z_Construct_UClass_AShooterTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterTarget.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UClass* StaticClass<AShooterTarget>()
	{
		return AShooterTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterTarget);
	AShooterTarget::~AShooterTarget() {}
	struct Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Target_ShooterTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Target_ShooterTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterTarget, AShooterTarget::StaticClass, TEXT("AShooterTarget"), &Z_Registration_Info_UClass_AShooterTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterTarget), 3475335424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Target_ShooterTarget_h_264486893(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Target_ShooterTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Target_ShooterTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
