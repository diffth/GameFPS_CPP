// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Gun/ShooterGun.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGun() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterGun();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterGun_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	DEFINE_FUNCTION(AShooterGun::execFireReleaseCPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireReleaseCPP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterGun::execRegisterNextFireCPP)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterNextFireCPP(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterGun::execFireBulletCPP)
	{
		P_GET_OBJECT(UClass,Z_Param_BulletClass);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireBulletCPP(Z_Param_BulletClass,Z_Param_Transform);
		P_NATIVE_END;
	}
	void AShooterGun::StaticRegisterNativesAShooterGun()
	{
		UClass* Class = AShooterGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireBulletCPP", &AShooterGun::execFireBulletCPP },
			{ "FireReleaseCPP", &AShooterGun::execFireReleaseCPP },
			{ "RegisterNextFireCPP", &AShooterGun::execRegisterNextFireCPP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics
	{
		struct ShooterGun_eventFireBulletCPP_Parms
		{
			UClass* BulletClass;
			FTransform Transform;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterGun_eventFireBulletCPP_Parms, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterGun_eventFireBulletCPP_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::NewProp_BulletClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Gun/ShooterGun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterGun, nullptr, "FireBulletCPP", nullptr, nullptr, Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::ShooterGun_eventFireBulletCPP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::ShooterGun_eventFireBulletCPP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShooterGun_FireBulletCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterGun_FireBulletCPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterGun_FireReleaseCPP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterGun_FireReleaseCPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Gun/ShooterGun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterGun_FireReleaseCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterGun, nullptr, "FireReleaseCPP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGun_FireReleaseCPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterGun_FireReleaseCPP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AShooterGun_FireReleaseCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterGun_FireReleaseCPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics
	{
		struct ShooterGun_eventRegisterNextFireCPP_Parms
		{
			float Duration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterGun_eventRegisterNextFireCPP_Parms, Duration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Gun/ShooterGun.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterGun, nullptr, "RegisterNextFireCPP", nullptr, nullptr, Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::ShooterGun_eventRegisterNextFireCPP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::ShooterGun_eventRegisterNextFireCPP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterGun);
	UClass* Z_Construct_UClass_AShooterGun_NoRegister()
	{
		return AShooterGun::StaticClass();
	}
	struct Z_Construct_UClass_AShooterGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpeedCPP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpeedCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerFireCPP_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimerFireCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFirePressedCPP_MetaData[];
#endif
		static void NewProp_IsFirePressedCPP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFirePressedCPP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGun_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterGun_FireBulletCPP, "FireBulletCPP" }, // 1560838805
		{ &Z_Construct_UFunction_AShooterGun_FireReleaseCPP, "FireReleaseCPP" }, // 1515133642
		{ &Z_Construct_UFunction_AShooterGun_RegisterNextFireCPP, "RegisterNextFireCPP" }, // 2969959158
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGun_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gun/ShooterGun.h" },
		{ "ModuleRelativePath", "Private/Gun/ShooterGun.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGun_Statics::NewProp_BulletSpeedCPP_MetaData[] = {
		{ "Category", "ShooterGun" },
		{ "ModuleRelativePath", "Private/Gun/ShooterGun.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterGun_Statics::NewProp_BulletSpeedCPP = { "BulletSpeedCPP", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterGun, BulletSpeedCPP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGun_Statics::NewProp_BulletSpeedCPP_MetaData), Z_Construct_UClass_AShooterGun_Statics::NewProp_BulletSpeedCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGun_Statics::NewProp_TimerFireCPP_MetaData[] = {
		{ "Category", "ShooterGun" },
		{ "ModuleRelativePath", "Private/Gun/ShooterGun.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterGun_Statics::NewProp_TimerFireCPP = { "TimerFireCPP", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterGun, TimerFireCPP), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGun_Statics::NewProp_TimerFireCPP_MetaData), Z_Construct_UClass_AShooterGun_Statics::NewProp_TimerFireCPP_MetaData) }; // 3999327403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGun_Statics::NewProp_IsFirePressedCPP_MetaData[] = {
		{ "Category", "ShooterGun" },
		{ "ModuleRelativePath", "Private/Gun/ShooterGun.h" },
	};
#endif
	void Z_Construct_UClass_AShooterGun_Statics::NewProp_IsFirePressedCPP_SetBit(void* Obj)
	{
		((AShooterGun*)Obj)->IsFirePressedCPP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterGun_Statics::NewProp_IsFirePressedCPP = { "IsFirePressedCPP", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShooterGun), &Z_Construct_UClass_AShooterGun_Statics::NewProp_IsFirePressedCPP_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGun_Statics::NewProp_IsFirePressedCPP_MetaData), Z_Construct_UClass_AShooterGun_Statics::NewProp_IsFirePressedCPP_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterGun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGun_Statics::NewProp_BulletSpeedCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGun_Statics::NewProp_TimerFireCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterGun_Statics::NewProp_IsFirePressedCPP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterGun_Statics::ClassParams = {
		&AShooterGun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterGun_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGun_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGun_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterGun_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGun_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_AShooterGun, AShooterGun::StaticClass, TEXT("AShooterGun"), &Z_Registration_Info_UClass_AShooterGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterGun), 1139068549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterGun_h_506378443(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterGun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
