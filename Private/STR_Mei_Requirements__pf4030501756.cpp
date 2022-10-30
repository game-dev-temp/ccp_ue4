#include "NativizedAssets.h"
#include "STR_Mei_Requirements__pf4030501756.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
FSTR_Mei_Requirements__pf4030501756::FSTR_Mei_Requirements__pf4030501756()
{
}
PRAGMA_DISABLE_OPTIMIZATION
void FSTR_Mei_Requirements__pf4030501756::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{1, FBlueprintDependencyType(true, false, false, false)},  //  ScriptStruct /Script/Engine.DataTableRowHandle 
		{2, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/Mei/BP/BuildingSystem/Structures/STR_Mei_Resource.STR_Mei_Resource 
		{0, FBlueprintDependencyType(false, true, false, false)},  //  UserDefinedEnum /Game/Mei/BP/BuildingSystem/Enumerations/E_Mei_ResourceType.E_Mei_ResourceType 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FSTR_Mei_Requirements__pf4030501756
{
	FRegisterHelper__FSTR_Mei_Requirements__pf4030501756()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Mei/BP/BuildingSystem/Structures/STR_Mei_Requirements"), &FSTR_Mei_Requirements__pf4030501756::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FSTR_Mei_Requirements__pf4030501756 Instance;
};
FRegisterHelper__FSTR_Mei_Requirements__pf4030501756 FRegisterHelper__FSTR_Mei_Requirements__pf4030501756::Instance;
