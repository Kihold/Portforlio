// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Portforlio/MyPortforlioGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPortforlioGameMode() {}

// Begin Cross Module References
PORTFORLIO_API UClass* Z_Construct_UClass_AMyPortforlioGameMode();
PORTFORLIO_API UClass* Z_Construct_UClass_AMyPortforlioGameMode_NoRegister();
PORTFORLIO_API UClass* Z_Construct_UClass_APortforlioGameMode();
UPackage* Z_Construct_UPackage__Script_Portforlio();
// End Cross Module References

// Begin Class AMyPortforlioGameMode
void AMyPortforlioGameMode::StaticRegisterNativesAMyPortforlioGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPortforlioGameMode);
UClass* Z_Construct_UClass_AMyPortforlioGameMode_NoRegister()
{
	return AMyPortforlioGameMode::StaticClass();
}
struct Z_Construct_UClass_AMyPortforlioGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyPortforlioGameMode.h" },
		{ "ModuleRelativePath", "MyPortforlioGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPortforlioGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyPortforlioGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APortforlioGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_Portforlio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPortforlioGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPortforlioGameMode_Statics::ClassParams = {
	&AMyPortforlioGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPortforlioGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPortforlioGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPortforlioGameMode()
{
	if (!Z_Registration_Info_UClass_AMyPortforlioGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPortforlioGameMode.OuterSingleton, Z_Construct_UClass_AMyPortforlioGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPortforlioGameMode.OuterSingleton;
}
template<> PORTFORLIO_API UClass* StaticClass<AMyPortforlioGameMode>()
{
	return AMyPortforlioGameMode::StaticClass();
}
AMyPortforlioGameMode::AMyPortforlioGameMode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPortforlioGameMode);
AMyPortforlioGameMode::~AMyPortforlioGameMode() {}
// End Class AMyPortforlioGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Portforlio_Source_Portforlio_MyPortforlioGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPortforlioGameMode, AMyPortforlioGameMode::StaticClass, TEXT("AMyPortforlioGameMode"), &Z_Registration_Info_UClass_AMyPortforlioGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPortforlioGameMode), 2373216058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Portforlio_Source_Portforlio_MyPortforlioGameMode_h_1360109262(TEXT("/Script/Portforlio"),
	Z_CompiledInDeferFile_FID_Portforlio_Source_Portforlio_MyPortforlioGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Portforlio_Source_Portforlio_MyPortforlioGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
