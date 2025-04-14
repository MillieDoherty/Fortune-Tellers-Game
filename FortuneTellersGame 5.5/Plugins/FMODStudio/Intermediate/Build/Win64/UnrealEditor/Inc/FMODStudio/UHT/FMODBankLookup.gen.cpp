// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Private/FMODBankLookup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODBankLookup() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBankLookup();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBankLookup_NoRegister();
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankRow();
FMODSTUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankTable();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References

// Begin ScriptStruct FFMODLocalizedBankRow
static_assert(std::is_polymorphic<FFMODLocalizedBankRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFMODLocalizedBankRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow;
class UScriptStruct* FFMODLocalizedBankRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODLocalizedBankRow, (UObject*)Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODLocalizedBankRow"));
	}
	return Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow.OuterSingleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODLocalizedBankRow>()
{
	return FFMODLocalizedBankRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODLocalizedBankRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODLocalizedBankRow, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewProp_Path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"FMODLocalizedBankRow",
	Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::PropPointers),
	sizeof(FFMODLocalizedBankRow),
	alignof(FFMODLocalizedBankRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankRow()
{
	if (!Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow.InnerSingleton, Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow.InnerSingleton;
}
// End ScriptStruct FFMODLocalizedBankRow

// Begin ScriptStruct FFMODLocalizedBankTable
static_assert(std::is_polymorphic<FFMODLocalizedBankTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFMODLocalizedBankTable cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable;
class UScriptStruct* FFMODLocalizedBankTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODLocalizedBankTable, (UObject*)Z_Construct_UPackage__Script_FMODStudio(), TEXT("FMODLocalizedBankTable"));
	}
	return Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable.OuterSingleton;
}
template<> FMODSTUDIO_API UScriptStruct* StaticStruct<FFMODLocalizedBankTable>()
{
	return FFMODLocalizedBankTable::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Banks_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Banks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFMODLocalizedBankTable>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewProp_Banks = { "Banks", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFMODLocalizedBankTable, Banks), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Banks_MetaData), NewProp_Banks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewProp_Banks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"FMODLocalizedBankTable",
	Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::PropPointers),
	sizeof(FFMODLocalizedBankTable),
	alignof(FFMODLocalizedBankTable),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFMODLocalizedBankTable()
{
	if (!Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable.InnerSingleton, Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable.InnerSingleton;
}
// End ScriptStruct FFMODLocalizedBankTable

// Begin Class UFMODBankLookup
void UFMODBankLookup::StaticRegisterNativesUFMODBankLookup()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODBankLookup);
UClass* Z_Construct_UClass_UFMODBankLookup_NoRegister()
{
	return UFMODBankLookup::StaticClass();
}
struct Z_Construct_UClass_UFMODBankLookup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FMODBankLookup.h" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterBankPath_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterAssetsBankPath_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterStringsBankPath_MetaData[] = {
		{ "Category", "FMOD|Internal|BankLookup" },
		{ "ModuleRelativePath", "Private/FMODBankLookup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MasterBankPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MasterAssetsBankPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MasterStringsBankPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODBankLookup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODBankLookup, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterBankPath = { "MasterBankPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODBankLookup, MasterBankPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterBankPath_MetaData), NewProp_MasterBankPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterAssetsBankPath = { "MasterAssetsBankPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODBankLookup, MasterAssetsBankPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterAssetsBankPath_MetaData), NewProp_MasterAssetsBankPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterStringsBankPath = { "MasterStringsBankPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODBankLookup, MasterStringsBankPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterStringsBankPath_MetaData), NewProp_MasterStringsBankPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODBankLookup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterBankPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterAssetsBankPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODBankLookup_Statics::NewProp_MasterStringsBankPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFMODBankLookup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODBankLookup_Statics::ClassParams = {
	&UFMODBankLookup::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFMODBankLookup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBankLookup_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODBankLookup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODBankLookup()
{
	if (!Z_Registration_Info_UClass_UFMODBankLookup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODBankLookup.OuterSingleton, Z_Construct_UClass_UFMODBankLookup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODBankLookup.OuterSingleton;
}
template<> FMODSTUDIO_API UClass* StaticClass<UFMODBankLookup>()
{
	return UFMODBankLookup::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODBankLookup);
UFMODBankLookup::~UFMODBankLookup() {}
// End Class UFMODBankLookup

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFMODLocalizedBankRow::StaticStruct, Z_Construct_UScriptStruct_FFMODLocalizedBankRow_Statics::NewStructOps, TEXT("FMODLocalizedBankRow"), &Z_Registration_Info_UScriptStruct_FMODLocalizedBankRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODLocalizedBankRow), 147685188U) },
		{ FFMODLocalizedBankTable::StaticStruct, Z_Construct_UScriptStruct_FFMODLocalizedBankTable_Statics::NewStructOps, TEXT("FMODLocalizedBankTable"), &Z_Registration_Info_UScriptStruct_FMODLocalizedBankTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFMODLocalizedBankTable), 1651805577U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODBankLookup, UFMODBankLookup::StaticClass, TEXT("UFMODBankLookup"), &Z_Registration_Info_UClass_UFMODBankLookup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODBankLookup), 656714438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_3275853293(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_FMODBankLookup_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
