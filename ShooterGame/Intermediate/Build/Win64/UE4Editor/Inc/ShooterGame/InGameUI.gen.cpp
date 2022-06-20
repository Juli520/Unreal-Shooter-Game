// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterGame/Public/InGameUI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameUI() {}
// Cross Module References
	SHOOTERGAME_API UClass* Z_Construct_UClass_UInGameUI_NoRegister();
	SHOOTERGAME_API UClass* Z_Construct_UClass_UInGameUI();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ShooterGame();
// End Cross Module References
	void UInGameUI::StaticRegisterNativesUInGameUI()
	{
	}
	UClass* Z_Construct_UClass_UInGameUI_NoRegister()
	{
		return UInGameUI::StaticClass();
	}
	struct Z_Construct_UClass_UInGameUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_currentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalTme_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_totalTme;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameUI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InGameUI.h" },
		{ "ModuleRelativePath", "Public/InGameUI.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameUI_Statics::NewProp_currentScore_MetaData[] = {
		{ "Category", "InGameUI" },
		{ "ModuleRelativePath", "Public/InGameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInGameUI_Statics::NewProp_currentScore = { "currentScore", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameUI, currentScore), METADATA_PARAMS(Z_Construct_UClass_UInGameUI_Statics::NewProp_currentScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameUI_Statics::NewProp_currentScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameUI_Statics::NewProp_currentTime_MetaData[] = {
		{ "Category", "InGameUI" },
		{ "ModuleRelativePath", "Public/InGameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInGameUI_Statics::NewProp_currentTime = { "currentTime", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameUI, currentTime), METADATA_PARAMS(Z_Construct_UClass_UInGameUI_Statics::NewProp_currentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameUI_Statics::NewProp_currentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameUI_Statics::NewProp_totalTme_MetaData[] = {
		{ "Category", "InGameUI" },
		{ "ModuleRelativePath", "Public/InGameUI.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInGameUI_Statics::NewProp_totalTme = { "totalTme", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameUI, totalTme), METADATA_PARAMS(Z_Construct_UClass_UInGameUI_Statics::NewProp_totalTme_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameUI_Statics::NewProp_totalTme_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInGameUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameUI_Statics::NewProp_currentScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameUI_Statics::NewProp_currentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameUI_Statics::NewProp_totalTme,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameUI>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInGameUI_Statics::ClassParams = {
		&UInGameUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInGameUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInGameUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInGameUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInGameUI()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInGameUI_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInGameUI, 2545337447);
	template<> SHOOTERGAME_API UClass* StaticClass<UInGameUI>()
	{
		return UInGameUI::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInGameUI(Z_Construct_UClass_UInGameUI, &UInGameUI::StaticClass, TEXT("/Script/ShooterGame"), TEXT("UInGameUI"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameUI);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
