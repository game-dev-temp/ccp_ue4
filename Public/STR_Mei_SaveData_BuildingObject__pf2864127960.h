#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
class ABP_Mei_Building_BaseObject_C__pf2826203124;
class UClass;
#include "STR_Mei_SaveData_BuildingObject__pf2864127960.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Structures/SaveData/STR_Mei_SaveData_BuildingObject.STR_Mei_SaveData_BuildingObject", OverrideNativeName="STR_Mei_SaveData_BuildingObject"))
struct FSTR_Mei_SaveData_BuildingObject__pf2864127960
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Class", Tooltip, OverrideNativeName="Class_20_BD365C9A46D9D73813A1B5A1BD782B3F"))
	UClass* bpv__Class_20_BD365C9A46D9D73813A1B5A1BD782B3F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Transform", Tooltip, OverrideNativeName="Transform_5_C9D83ABA45C3317FD7AC2DB6BEC331F5"))
	FTransform bpv__Transform_5_C9D83ABA45C3317FD7AC2DB6BEC331F5__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SpawnHandle", Tooltip, OverrideNativeName="SpawnHandle_10_9E9105DA401F7954AF49BD9DA9E7B490"))
	FDataTableRowHandle bpv__SpawnHandle_10_9E9105DA401F7954AF49BD9DA9E7B490__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Durability", Tooltip, OverrideNativeName="Durability_13_083EC06740AEF51CF93DAA9686259FE7"))
	float bpv__Durability_13_083EC06740AEF51CF93DAA9686259FE7__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MaxDurability", Tooltip, OverrideNativeName="MaxDurability_15_672C88DE4354B61B3CE2A1A04D950415"))
	float bpv__MaxDurability_15_672C88DE4354B61B3CE2A1A04D950415__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FloorNumber", Tooltip, OverrideNativeName="FloorNumber_19_F46541684806CE9038F4F3A185FA967E"))
	int32 bpv__FloorNumber_19_F46541684806CE9038F4F3A185FA967E__pf;
	FSTR_Mei_SaveData_BuildingObject__pf2864127960();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FSTR_Mei_SaveData_BuildingObject__pf2864127960& __Other) const
	{
		return FSTR_Mei_SaveData_BuildingObject__pf2864127960::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
