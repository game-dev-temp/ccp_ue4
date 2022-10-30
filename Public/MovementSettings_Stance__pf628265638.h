#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "MovementSettings__pf628265638.h"
#include "MovementSettings_Stance__pf628265638.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Structs/MovementSettings_Stance.MovementSettings_Stance", OverrideNativeName="MovementSettings_Stance"))
struct FMovementSettings_Stance__pf628265638
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Standing", Tooltip, OverrideNativeName="Standing_12_291919F34C61D6D2C253D3B80934D9D2"))
	FMovementSettings__pf628265638 bpv__Standing_12_291919F34C61D6D2C253D3B80934D9D2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Crouching", Tooltip, OverrideNativeName="Crouching_14_DEF8FDDA4324E7EF87C9DE8D07831456"))
	FMovementSettings__pf628265638 bpv__Crouching_14_DEF8FDDA4324E7EF87C9DE8D07831456__pf;
	FMovementSettings_Stance__pf628265638();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FMovementSettings_Stance__pf628265638& __Other) const
	{
		return FMovementSettings_Stance__pf628265638::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FMovementSettings_Stance__pf628265638& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FMovementSettings_Stance__pf628265638::StaticStruct()); }
};
