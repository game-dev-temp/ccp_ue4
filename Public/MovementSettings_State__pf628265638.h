#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "MovementSettings_Stance__pf628265638.h"
#include "MovementSettings_State__pf628265638.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Structs/MovementSettings_State.MovementSettings_State", OverrideNativeName="MovementSettings_State"))
struct FMovementSettings_State__pf628265638
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="VelocityDirection", Tooltip, OverrideNativeName="VelocityDirection_17_291919F34C61D6D2C253D3B80934D9D2"))
	FMovementSettings_Stance__pf628265638 bpv__VelocityDirection_17_291919F34C61D6D2C253D3B80934D9D2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LookingDirection", Tooltip, OverrideNativeName="LookingDirection_18_DEF8FDDA4324E7EF87C9DE8D07831456"))
	FMovementSettings_Stance__pf628265638 bpv__LookingDirection_18_DEF8FDDA4324E7EF87C9DE8D07831456__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Aiming", Tooltip, OverrideNativeName="Aiming_21_D7B17FD043E721735EF6CCA049CD9E66"))
	FMovementSettings_Stance__pf628265638 bpv__Aiming_21_D7B17FD043E721735EF6CCA049CD9E66__pf;
	FMovementSettings_State__pf628265638();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FMovementSettings_State__pf628265638& __Other) const
	{
		return FMovementSettings_State__pf628265638::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FMovementSettings_State__pf628265638& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FMovementSettings_State__pf628265638::StaticStruct()); }
};
