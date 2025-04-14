// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudioEditor/Classes/FMODGenerateAssetsCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODGenerateAssetsCommandlet() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODGenerateAssetsCommandlet();
FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODGenerateAssetsCommandlet_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMODStudioEditor();
// End Cross Module References

// Begin Class UFMODGenerateAssetsCommandlet
void UFMODGenerateAssetsCommandlet::StaticRegisterNativesUFMODGenerateAssetsCommandlet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODGenerateAssetsCommandlet);
UClass* Z_Construct_UClass_UFMODGenerateAssetsCommandlet_NoRegister()
{
	return UFMODGenerateAssetsCommandlet::StaticClass();
}
struct Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FMODGenerateAssetsCommandlet.h" },
		{ "ModuleRelativePath", "Classes/FMODGenerateAssetsCommandlet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODGenerateAssetsCommandlet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommandlet,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudioEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::ClassParams = {
	&UFMODGenerateAssetsCommandlet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODGenerateAssetsCommandlet()
{
	if (!Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet.OuterSingleton, Z_Construct_UClass_UFMODGenerateAssetsCommandlet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet.OuterSingleton;
}
template<> FMODSTUDIOEDITOR_API UClass* StaticClass<UFMODGenerateAssetsCommandlet>()
{
	return UFMODGenerateAssetsCommandlet::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODGenerateAssetsCommandlet);
UFMODGenerateAssetsCommandlet::~UFMODGenerateAssetsCommandlet() {}
// End Class UFMODGenerateAssetsCommandlet

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODGenerateAssetsCommandlet, UFMODGenerateAssetsCommandlet::StaticClass, TEXT("UFMODGenerateAssetsCommandlet"), &Z_Registration_Info_UClass_UFMODGenerateAssetsCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODGenerateAssetsCommandlet), 483256782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h_559024537(TEXT("/Script/FMODStudioEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODGenerateAssetsCommandlet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
