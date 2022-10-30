#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class AActor;
class UClass;
#include "STR_Mei_SaveData_Actor__pf2864127960.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Structures/SaveData/STR_Mei_SaveData_Actor.STR_Mei_SaveData_Actor", OverrideNativeName="STR_Mei_SaveData_Actor"))
struct FSTR_Mei_SaveData_Actor__pf2864127960
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Class", Tooltip, OverrideNativeName="Class_2_BD365C9A46D9D73813A1B5A1BD782B3F"))
	UClass* bpv__Class_2_BD365C9A46D9D73813A1B5A1BD782B3F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Transform", Tooltip, OverrideNativeName="Transform_5_C9D83ABA45C3317FD7AC2DB6BEC331F5"))
	FTransform bpv__Transform_5_C9D83ABA45C3317FD7AC2DB6BEC331F5__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="FormatedVariables", Tooltip, OverrideNativeName="FormatedVariables_9_C72BF7CB44E57B753A98BC93DED544A1"))
	TArray<FString> bpv__FormatedVariables_9_C72BF7CB44E57B753A98BC93DED544A1__pf;
	FSTR_Mei_SaveData_Actor__pf2864127960();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FSTR_Mei_SaveData_Actor__pf2864127960& __Other) const
	{
		return FSTR_Mei_SaveData_Actor__pf2864127960::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
