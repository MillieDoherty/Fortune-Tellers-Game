// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudioEditor/Classes/FMODAmbientSoundActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAmbientSoundActorFactory() {}

// Begin Cross Module References
FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory();
FMODSTUDIOEDITOR_API UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
UPackage* Z_Construct_UPackage__Script_FMODStudioEditor();
// End Cross Module References

// Begin Class UFMODAmbientSoundActorFactory
void UFMODAmbientSoundActorFactory::StaticRegisterNativesUFMODAmbientSoundActorFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODAmbientSoundActorFactory);
UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory_NoRegister()
{
	return UFMODAmbientSoundActorFactory::StaticClass();
}
struct Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** FMOD Ambient Sound Actor Factory.\n*/" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FMODAmbientSoundActorFactory.h" },
		{ "ModuleRelativePath", "Classes/FMODAmbientSoundActorFactory.h" },
		{ "ToolTip", "FMOD Ambient Sound Actor Factory." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAmbientSoundActorFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudioEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::ClassParams = {
	&UFMODAmbientSoundActorFactory::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000830ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory()
{
	if (!Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.OuterSingleton, Z_Construct_UClass_UFMODAmbientSoundActorFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory.OuterSingleton;
}
template<> FMODSTUDIOEDITOR_API UClass* StaticClass<UFMODAmbientSoundActorFactory>()
{
	return UFMODAmbientSoundActorFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAmbientSoundActorFactory);
UFMODAmbientSoundActorFactory::~UFMODAmbientSoundActorFactory() {}
// End Class UFMODAmbientSoundActorFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAmbientSoundActorFactory, UFMODAmbientSoundActorFactory::StaticClass, TEXT("UFMODAmbientSoundActorFactory"), &Z_Registration_Info_UClass_UFMODAmbientSoundActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAmbientSoundActorFactory), 1597554466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h_298769891(TEXT("/Script/FMODStudioEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudioEditor_Classes_FMODAmbientSoundActorFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
