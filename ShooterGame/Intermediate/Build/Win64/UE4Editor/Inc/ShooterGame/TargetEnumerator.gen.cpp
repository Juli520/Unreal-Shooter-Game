// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/TargetEnumerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetEnumerator() {}
// Cross Module References
	SHOOTERGAME_API UEnum* Z_Construct_UEnum_ShooterGame_ETargetEnumerator();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	static UEnum* ETargetEnumerator_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ShooterGame_ETargetEnumerator, Z_Construct_UPackage__Script_ShooterGame(), TEXT("ETargetEnumerator"));
		}
		return Singleton;
	}
	template<> SHOOTERGAME_API UEnum* StaticEnum<ETargetEnumerator>()
	{
		return ETargetEnumerator_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETargetEnumerator(ETargetEnumerator_StaticEnum, TEXT("/Script/ShooterGame"), TEXT("ETargetEnumerator"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ShooterGame_ETargetEnumerator_Hash() { return 2718145586U; }
	UEnum* Z_Construct_UEnum_ShooterGame_ETargetEnumerator()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ShooterGame();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETargetEnumerator"), 0, Get_Z_Construct_UEnum_ShooterGame_ETargetEnumerator_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETargetEnumerator::Nothing", (int64)ETargetEnumerator::Nothing },
				{ "ETargetEnumerator::MoveHorizontally", (int64)ETargetEnumerator::MoveHorizontally },
				{ "ETargetEnumerator::MoveVertically", (int64)ETargetEnumerator::MoveVertically },
				{ "ETargetEnumerator::AdjustScale", (int64)ETargetEnumerator::AdjustScale },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AdjustScale.Comment", "/**\n * \n */" },
				{ "AdjustScale.DisplayName", "AdjustScale" },
				{ "AdjustScale.Name", "ETargetEnumerator::AdjustScale" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "ModuleRelativePath", "Public/TargetEnumerator.h" },
				{ "MoveHorizontally.Comment", "/**\n * \n */" },
				{ "MoveHorizontally.DisplayName", "MoveHorizontally" },
				{ "MoveHorizontally.Name", "ETargetEnumerator::MoveHorizontally" },
				{ "MoveVertically.Comment", "/**\n * \n */" },
				{ "MoveVertically.DisplayName", "MoveVertically" },
				{ "MoveVertically.Name", "ETargetEnumerator::MoveVertically" },
				{ "Nothing.Comment", "/**\n * \n */" },
				{ "Nothing.DisplayName", "Nothing" },
				{ "Nothing.Name", "ETargetEnumerator::Nothing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ShooterGame,
				nullptr,
				"ETargetEnumerator",
				"ETargetEnumerator",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
