// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Gun/ShooterBullet.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterBullet() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterBullet();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterBullet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	DEFINE_FUNCTION(AShooterBullet::execOnCompHitCall)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalInpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCompHitCall(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalInpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AShooterBullet::StaticRegisterNativesAShooterBullet()
	{
		UClass* Class = AShooterBullet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCompHitCall", &AShooterBullet::execOnCompHitCall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics
	{
		struct ShooterBullet_eventOnCompHitCall_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalInpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalInpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBullet_eventOnCompHitCall_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_HitComp_MetaData), Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_HitComp_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBullet_eventOnCompHitCall_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBullet_eventOnCompHitCall_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_NormalInpulse = { "NormalInpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBullet_eventOnCompHitCall_Parms, NormalInpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterBullet_eventOnCompHitCall_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_HitComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_NormalInpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Gun/ShooterBullet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterBullet, nullptr, "OnCompHitCall", nullptr, nullptr, Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::ShooterBullet_eventOnCompHitCall_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::ShooterBullet_eventOnCompHitCall_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShooterBullet_OnCompHitCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterBullet_OnCompHitCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterBullet);
	UClass* Z_Construct_UClass_AShooterBullet_NoRegister()
	{
		return AShooterBullet::StaticClass();
	}
	struct Z_Construct_UClass_AShooterBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterBullet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterBullet_OnCompHitCall, "OnCompHitCall" }, // 1644283497
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBullet_Statics::FuncInfo) < 2048);
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
		FuncInfo,
		Z_Construct_UClass_AShooterBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AShooterBullet, AShooterBullet::StaticClass, TEXT("AShooterBullet"), &Z_Registration_Info_UClass_AShooterBullet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterBullet), 946180066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterBullet_h_2715476896(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterBullet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterBullet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
