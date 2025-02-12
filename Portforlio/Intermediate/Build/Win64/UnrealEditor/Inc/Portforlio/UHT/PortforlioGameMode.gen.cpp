// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Portforlio/PortforlioGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortforlioGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PORTFORLIO_API UClass* Z_Construct_UClass_APortforlioGameMode();
PORTFORLIO_API UClass* Z_Construct_UClass_APortforlioGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Portforlio();
// End Cross Module References

// Begin Class APortforlioGameMode
void APortforlioGameMode::StaticRegisterNativesAPortforlioGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APortforlioGameMode);
UClass* Z_Construct_UClass_APortforlioGameMode_NoRegister()
{
	return APortforlioGameMode::StaticClass();
}
struct Z_Construct_UClass_APortforlioGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PortforlioGameMode.h" },
		{ "ModuleRelativePath", "PortforlioGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortforlioGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APortforlioGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Portforlio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortforlioGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APortforlioGameMode_Statics::ClassParams = {
	&APortforlioGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortforlioGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APortforlioGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APortforlioGameMode()
{
	if (!Z_Registration_Info_UClass_APortforlioGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortforlioGameMode.OuterSingleton, Z_Construct_UClass_APortforlioGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APortforlioGameMode.OuterSingleton;
}
template<> PORTFORLIO_API UClass* StaticClass<APortforlioGameMode>()
{
	return APortforlioGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APortforlioGameMode);
APortforlioGameMode::~APortforlioGameMode() {}
// End Class APortforlioGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Portforlio_Source_Portforlio_PortforlioGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APortforlioGameMode, APortforlioGameMode::StaticClass, TEXT("APortforlioGameMode"), &Z_Registration_Info_UClass_APortforlioGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortforlioGameMode), 2887347315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portforlio_Source_Portforlio_PortforlioGameMode_h_3130969201(TEXT("/Script/Portforlio"),
	Z_CompiledInDeferFile_FID_Portforlio_Source_Portforlio_PortforlioGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portforlio_Source_Portforlio_PortforlioGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
