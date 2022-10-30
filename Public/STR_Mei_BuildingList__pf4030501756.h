#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "STR_Mei_BuildingList__pf4030501756.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Structures/STR_Mei_BuildingList.STR_Mei_BuildingList", OverrideNativeName="STR_Mei_BuildingList"))
struct FSTR_Mei_BuildingList__pf4030501756
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Handle", Tooltip, OverrideNativeName="Handle_2_C90E24864059904CDC941DA0811BF7AB"))
	FDataTableRowHandle bpv__Handle_2_C90E24864059904CDC941DA0811BF7AB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Name", Tooltip, OverrideNativeName="Name_5_C5B0B9314E3DBF1AECA3AD9DFBD394F2"))
	FText bpv__Name_5_C5B0B9314E3DBF1AECA3AD9DFBD394F2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Description", Tooltip, OverrideNativeName="Description_7_A82495FF419DF0B97CC88BA92AF6B39E"))
	FText bpv__Description_7_A82495FF419DF0B97CC88BA92AF6B39E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BuildingObjects", Tooltip, OverrideNativeName="BuildingObjects_11_420FE64347F82421023084A663347331"))
	TArray<FDataTableRowHandle> bpv__BuildingObjects_11_420FE64347F82421023084A663347331__pf;
	FSTR_Mei_BuildingList__pf4030501756();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FSTR_Mei_BuildingList__pf4030501756& __Other) const
	{
		return FSTR_Mei_BuildingList__pf4030501756::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
