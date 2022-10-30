#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "STR_Mei_SaveData_Actor__pf2864127960.h"
#include "STR_Mei_SaveData_BuildingObject__pf2864127960.h"
#include "STR_Mei_SaveData_Level__pf2864127960.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Structures/SaveData/STR_Mei_SaveData_Level.STR_Mei_SaveData_Level", OverrideNativeName="STR_Mei_SaveData_Level"))
struct FSTR_Mei_SaveData_Level__pf2864127960
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LevelName", Tooltip, OverrideNativeName="LevelName_2_EB6249534437B7CC6D08988DCE6E99D7"))
	FName bpv__LevelName_2_EB6249534437B7CC6D08988DCE6E99D7__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Actors", Tooltip, OverrideNativeName="Actors_18_7A544B5349ACBF1FFA29B8BA45714176"))
	TMap<int32,FSTR_Mei_SaveData_Actor__pf2864127960> bpv__Actors_18_7A544B5349ACBF1FFA29B8BA45714176__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BuildingObjects", Tooltip, OverrideNativeName="BuildingObjects_19_3FF1EF944E2E5E9C1CB112B6D43DCBC2"))
	TMap<int32,FSTR_Mei_SaveData_BuildingObject__pf2864127960> bpv__BuildingObjects_19_3FF1EF944E2E5E9C1CB112B6D43DCBC2__pf;
	FSTR_Mei_SaveData_Level__pf2864127960();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FSTR_Mei_SaveData_Level__pf2864127960& __Other) const
	{
		return FSTR_Mei_SaveData_Level__pf2864127960::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
