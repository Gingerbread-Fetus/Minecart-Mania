// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MinecartMania/AntiTilt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAntiTilt() {}
// Cross Module References
	MINECARTMANIA_API UClass* Z_Construct_UClass_UAntiTilt_NoRegister();
	MINECARTMANIA_API UClass* Z_Construct_UClass_UAntiTilt();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MinecartMania();
// End Cross Module References
	void UAntiTilt::StaticRegisterNativesUAntiTilt()
	{
	}
	UClass* Z_Construct_UClass_UAntiTilt_NoRegister()
	{
		return UAntiTilt::StaticClass();
	}
	struct Z_Construct_UClass_UAntiTilt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAntiTilt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MinecartMania,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAntiTilt_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AntiTilt.h" },
		{ "ModuleRelativePath", "AntiTilt.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAntiTilt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAntiTilt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAntiTilt_Statics::ClassParams = {
		&UAntiTilt::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAntiTilt_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAntiTilt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAntiTilt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAntiTilt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAntiTilt, 2179529814);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAntiTilt(Z_Construct_UClass_UAntiTilt, &UAntiTilt::StaticClass, TEXT("/Script/MinecartMania"), TEXT("UAntiTilt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAntiTilt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
