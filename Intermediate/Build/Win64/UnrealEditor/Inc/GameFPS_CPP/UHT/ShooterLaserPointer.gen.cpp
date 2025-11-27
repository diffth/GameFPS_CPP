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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterLaserPointer();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterLaserPointer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	DEFINE_FUNCTION(AShooterLaserPointer::execGetEndPointOfLaserCPP)
	{
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEndPointOfLaserCPP(Z_Param_Start,Z_Param_End);
		P_NATIVE_END;
	}
	void AShooterLaserPointer::StaticRegisterNativesAShooterLaserPointer()
	{
		UClass* Class = AShooterLaserPointer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEndPointOfLaserCPP", &AShooterLaserPointer::execGetEndPointOfLaserCPP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics
	{
		struct ShooterLaserPointer_eventGetEndPointOfLaserCPP_Parms
		{
			FVector Start;
			FVector End;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterLaserPointer_eventGetEndPointOfLaserCPP_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterLaserPointer_eventGetEndPointOfLaserCPP_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterLaserPointer_eventGetEndPointOfLaserCPP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Gun/ShooterLaserPointer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterLaserPointer, nullptr, "GetEndPointOfLaserCPP", nullptr, nullptr, Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::ShooterLaserPointer_eventGetEndPointOfLaserCPP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::ShooterLaserPointer_eventGetEndPointOfLaserCPP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterLaserPointer);
	UClass* Z_Construct_UClass_AShooterLaserPointer_NoRegister()
	{
		return AShooterLaserPointer::StaticClass();
	}
	struct Z_Construct_UClass_AShooterLaserPointer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterLaserPointer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterLaserPointer_GetEndPointOfLaserCPP, "GetEndPointOfLaserCPP" }, // 857117597
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterLaserPointer_Statics::FuncInfo) < 2048);
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AShooterLaserPointer, AShooterLaserPointer::StaticClass, TEXT("AShooterLaserPointer"), &Z_Registration_Info_UClass_AShooterLaserPointer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterLaserPointer), 326214609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterLaserPointer_h_2925202831(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterLaserPointer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gun_ShooterLaserPointer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
