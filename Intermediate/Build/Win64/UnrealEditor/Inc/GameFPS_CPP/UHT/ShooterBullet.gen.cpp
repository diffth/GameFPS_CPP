// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Gun/ShooterBullet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterBullet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterBullet();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterBullet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	void AShooterBullet::StaticRegisterNativesAShooterBullet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterBullet);
	UClass* Z_Construct_UClass_AShooterBullet_NoRegister()
	{
		return AShooterBullet::StaticClass();
	}
	struct Z_Construct_UClass_AShooterBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletCPP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BulletCPP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBullet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gun/ShooterBullet.h" },
		{ "ModuleRelativePath", "Private/Gun/ShooterBullet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBullet_Statics::NewProp_BulletCPP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShooterBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Gun/ShooterBullet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AShooterBullet_Statics::NewProp_BulletCPP = { "BulletCPP", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterBullet, BulletCPP), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBullet_Statics::NewProp_BulletCPP_MetaData), Z_Construct_UClass_AShooterBullet_Statics::NewProp_BulletCPP_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterBullet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterBullet_Statics::NewProp_BulletCPP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterBullet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterBullet_Statics::ClassParams = {
		&AShooterBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBullet_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBullet_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterBullet_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBullet_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShooterBullet()
	{
		if (!Z_Registration_Info_UClass_AShooterBullet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterBullet.OuterSingleton, Z_Construct_UClass_AShooterBullet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterBullet.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UClass* StaticClass<AShooterBullet>()
	{
		return AShooterBullet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterBullet);
	AShooterBullet::~AShooterBullet() {}
	struct Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterBullet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterBullet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterBullet, AShooterBullet::StaticClass, TEXT("AShooterBullet"), &Z_Registration_Info_UClass_AShooterBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterBullet), 4241086331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterBullet_h_640084935(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterBullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterBullet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
