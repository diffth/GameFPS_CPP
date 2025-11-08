// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFPS_CPP/Private/Gameplay/ShooterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterCharacter();
	GAMEFPS_CPP_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	GAMEFPS_CPP_API UEnum* Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP();
	UPackage* Z_Construct_UPackage__Script_GameFPS_CPP();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_StateOfCharacterCPP;
	static UEnum* StateOfCharacterCPP_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_StateOfCharacterCPP.OuterSingleton)
		{
			Z_Registration_Info_UEnum_StateOfCharacterCPP.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP, (UObject*)Z_Construct_UPackage__Script_GameFPS_CPP(), TEXT("StateOfCharacterCPP"));
		}
		return Z_Registration_Info_UEnum_StateOfCharacterCPP.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UEnum* StaticEnum<StateOfCharacterCPP>()
	{
		return StateOfCharacterCPP_StaticEnum();
	}
	struct Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP_Statics::Enumerators[] = {
		{ "StateOfCharacterCPP::Idle", (int64)StateOfCharacterCPP::Idle },
		{ "StateOfCharacterCPP::Aiming", (int64)StateOfCharacterCPP::Aiming },
		{ "StateOfCharacterCPP::Reloading", (int64)StateOfCharacterCPP::Reloading },
		{ "StateOfCharacterCPP::Swapping", (int64)StateOfCharacterCPP::Swapping },
		{ "StateOfCharacterCPP::Running", (int64)StateOfCharacterCPP::Running },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP_Statics::Enum_MetaDataParams[] = {
		{ "Aiming.Name", "StateOfCharacterCPP::Aiming" },
		{ "BlueprintType", "true" },
		{ "Idle.Name", "StateOfCharacterCPP::Idle" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
		{ "Reloading.Name", "StateOfCharacterCPP::Reloading" },
		{ "Running.Name", "StateOfCharacterCPP::Running" },
		{ "Swapping.Name", "StateOfCharacterCPP::Swapping" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameFPS_CPP,
		nullptr,
		"StateOfCharacterCPP",
		"StateOfCharacterCPP",
		Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP()
	{
		if (!Z_Registration_Info_UEnum_StateOfCharacterCPP.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_StateOfCharacterCPP.InnerSingleton, Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_StateOfCharacterCPP.InnerSingleton;
	}
	DEFINE_FUNCTION(AShooterCharacter::execGetSpeedCPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeedCPP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execCanRunCPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRunCPP();
		P_NATIVE_END;
	}
	void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
	{
		UClass* Class = AShooterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanRunCPP", &AShooterCharacter::execCanRunCPP },
			{ "GetSpeedCPP", &AShooterCharacter::execGetSpeedCPP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics
	{
		struct ShooterCharacter_eventCanRunCPP_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShooterCharacter_eventCanRunCPP_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ShooterCharacter_eventCanRunCPP_Parms), &Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "CanRunCPP", nullptr, nullptr, Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::ShooterCharacter_eventCanRunCPP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::ShooterCharacter_eventCanRunCPP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShooterCharacter_CanRunCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_CanRunCPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics
	{
		struct ShooterCharacter_eventGetSpeedCPP_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ShooterCharacter_eventGetSpeedCPP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "GetSpeedCPP", nullptr, nullptr, Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::PropPointers), sizeof(Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::ShooterCharacter_eventGetSpeedCPP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::ShooterCharacter_eventGetSpeedCPP_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterCharacter);
	UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
	{
		return AShooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_StateCPP_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateCPP_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StateCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRunPressedCPP_MetaData[];
#endif
		static void NewProp_IsRunPressedCPP_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRunPressedCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveForwardValueCPP_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveForwardValueCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepLeftSoundCPP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FootstepLeftSoundCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootstepRightSoundCPP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FootstepRightSoundCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowBodyCPP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShadowBodyCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInBackCPP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeaponInBackCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBodyCPP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LowerBodyCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraCPP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCPP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FirstPersonCPP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInHandCPP_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeaponInHandCPP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFPS_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterCharacter_CanRunCPP, "CanRunCPP" }, // 549376417
		{ &Z_Construct_UFunction_AShooterCharacter_GetSpeedCPP, "GetSpeedCPP" }, // 3978938494
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Gameplay/ShooterCharacter.h" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StateCPP_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StateCPP_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StateCPP = { "StateCPP", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, StateCPP), Z_Construct_UEnum_GameFPS_CPP_StateOfCharacterCPP, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StateCPP_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StateCPP_MetaData) }; // 1638034500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsRunPressedCPP_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsRunPressedCPP_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->IsRunPressedCPP = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsRunPressedCPP = { "IsRunPressedCPP", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsRunPressedCPP_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsRunPressedCPP_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsRunPressedCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MoveForwardValueCPP_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MoveForwardValueCPP = { "MoveForwardValueCPP", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, MoveForwardValueCPP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MoveForwardValueCPP_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MoveForwardValueCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FootstepLeftSoundCPP_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FootstepLeftSoundCPP = { "FootstepLeftSoundCPP", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, FootstepLeftSoundCPP), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FootstepLeftSoundCPP_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FootstepLeftSoundCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FootstepRightSoundCPP_MetaData[] = {
		{ "Category", "Character" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FootstepRightSoundCPP = { "FootstepRightSoundCPP", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, FootstepRightSoundCPP), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FootstepRightSoundCPP_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FootstepRightSoundCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShadowBodyCPP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShadowBodyCPP = { "ShadowBodyCPP", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, ShadowBodyCPP), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShadowBodyCPP_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShadowBodyCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInBackCPP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInBackCPP = { "WeaponInBackCPP", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, WeaponInBackCPP), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInBackCPP_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInBackCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LowerBodyCPP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LowerBodyCPP = { "LowerBodyCPP", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, LowerBodyCPP), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LowerBodyCPP_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LowerBodyCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraCPP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraCPP = { "CameraCPP", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, CameraCPP), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraCPP_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FirstPersonCPP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FirstPersonCPP = { "FirstPersonCPP", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, FirstPersonCPP), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FirstPersonCPP_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FirstPersonCPP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInHandCPP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Gameplay/ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInHandCPP = { "WeaponInHandCPP", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterCharacter, WeaponInHandCPP), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInHandCPP_MetaData), Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInHandCPP_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StateCPP_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_StateCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_IsRunPressedCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_MoveForwardValueCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FootstepLeftSoundCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FootstepRightSoundCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_ShadowBodyCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInBackCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_LowerBodyCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_CameraCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_FirstPersonCPP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_WeaponInHandCPP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter_Statics::ClassParams = {
		&AShooterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShooterCharacter()
	{
		if (!Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton, Z_Construct_UClass_AShooterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton;
	}
	template<> GAMEFPS_CPP_API UClass* StaticClass<AShooterCharacter>()
	{
		return AShooterCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter);
	AShooterCharacter::~AShooterCharacter() {}
	struct Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterCharacter_h_Statics::EnumInfo[] = {
		{ StateOfCharacterCPP_StaticEnum, TEXT("StateOfCharacterCPP"), &Z_Registration_Info_UEnum_StateOfCharacterCPP, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1638034500U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterCharacter, AShooterCharacter::StaticClass, TEXT("AShooterCharacter"), &Z_Registration_Info_UClass_AShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterCharacter), 1986550246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterCharacter_h_3229171197(TEXT("/Script/GameFPS_CPP"),
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameFPS_CPP_Source_GameFPS_CPP_Private_Gameplay_ShooterCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
