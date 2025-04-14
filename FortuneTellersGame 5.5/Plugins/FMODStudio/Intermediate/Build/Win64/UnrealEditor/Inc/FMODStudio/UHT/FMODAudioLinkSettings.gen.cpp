// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODAudioLink/Public/FMODAudioLinkSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAudioLinkSettings() {}

// Begin Cross Module References
AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioLinkSettings();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioLinkSettings_NoRegister();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References

// Begin Class UFMODAudioLinkSettings
void UFMODAudioLinkSettings::StaticRegisterNativesUFMODAudioLinkSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODAudioLinkSettings);
UClass* Z_Construct_UClass_UFMODAudioLinkSettings_NoRegister()
{
	return UFMODAudioLinkSettings::StaticClass();
}
struct Z_Construct_UClass_UFMODAudioLinkSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "" },
		{ "ModuleRelativePath", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkEvent_MetaData[] = {
		{ "Category", "default" },
		{ "ModuleRelativePath", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldClearBufferOnReceipt_MetaData[] = {
		{ "Category", "default" },
		{ "Comment", "/** If this is set, the receiving code will clear the buffer after it's read, so it's not rendered by Unreal. Only applies if running both renderers at once.  */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "If this is set, the receiving code will clear the buffer after it's read, so it's not rendered by Unreal. Only applies if running both renderers at once." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProducerToConsumerBufferRatio_MetaData[] = {
		{ "Category", "default" },
		{ "Comment", "/** This is the ratio of producer to consumer buffer size, 2.0 means its twice as big as the consumer buffer.  */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "This is the ratio of producer to consumer buffer size, 2.0 means its twice as big as the consumer buffer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSilenceFillRatio_MetaData[] = {
		{ "Category", "default" },
		{ "Comment", "/** Ratio of initial buffer to fill with silence ahead of consumption. Adjusting this can resolve starvation at the cost of added latency. */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "Ratio of initial buffer to fill with silence ahead of consumption. Adjusting this can resolve starvation at the cost of added latency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkEventResolved_MetaData[] = {
		{ "Comment", "/** Once the SoftObjectReference has been resolved, attach the reference here so it's owned. */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "Once the SoftObjectReference has been resolved, attach the reference here so it's owned." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LinkEvent;
	static void NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldClearBufferOnReceipt;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProducerToConsumerBufferRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSilenceFillRatio;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkEventResolved;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAudioLinkSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEvent = { "LinkEvent", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioLinkSettings, LinkEvent), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkEvent_MetaData), NewProp_LinkEvent_MetaData) };
void Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj)
{
	((UFMODAudioLinkSettings*)Obj)->bShouldClearBufferOnReceipt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt = { "bShouldClearBufferOnReceipt", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODAudioLinkSettings), &Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldClearBufferOnReceipt_MetaData), NewProp_bShouldClearBufferOnReceipt_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio = { "ProducerToConsumerBufferRatio", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioLinkSettings, ProducerToConsumerBufferRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProducerToConsumerBufferRatio_MetaData), NewProp_ProducerToConsumerBufferRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio = { "InitialSilenceFillRatio", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioLinkSettings, InitialSilenceFillRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSilenceFillRatio_MetaData), NewProp_InitialSilenceFillRatio_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEventResolved = { "LinkEventResolved", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioLinkSettings, LinkEventResolved), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkEventResolved_MetaData), NewProp_LinkEventResolved_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODAudioLinkSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEventResolved,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFMODAudioLinkSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAudioLinkSettingsAbstract,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODAudioLinkSettings_Statics::ClassParams = {
	&UFMODAudioLinkSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFMODAudioLinkSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::PropPointers),
	0,
	0x001010A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODAudioLinkSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODAudioLinkSettings()
{
	if (!Z_Registration_Info_UClass_UFMODAudioLinkSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAudioLinkSettings.OuterSingleton, Z_Construct_UClass_UFMODAudioLinkSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODAudioLinkSettings.OuterSingleton;
}
template<> FMODSTUDIO_API UClass* StaticClass<UFMODAudioLinkSettings>()
{
	return UFMODAudioLinkSettings::StaticClass();
}
UFMODAudioLinkSettings::UFMODAudioLinkSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAudioLinkSettings);
UFMODAudioLinkSettings::~UFMODAudioLinkSettings() {}
// End Class UFMODAudioLinkSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLink_Public_FMODAudioLinkSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAudioLinkSettings, UFMODAudioLinkSettings::StaticClass, TEXT("UFMODAudioLinkSettings"), &Z_Registration_Info_UClass_UFMODAudioLinkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAudioLinkSettings), 3713581247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLink_Public_FMODAudioLinkSettings_h_2572298399(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLink_Public_FMODAudioLinkSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLink_Public_FMODAudioLinkSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
