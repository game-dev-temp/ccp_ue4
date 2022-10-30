#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "VelocityBlend__pf628265638.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Structs/VelocityBlend.VelocityBlend", OverrideNativeName="VelocityBlend"))
struct FVelocityBlend__pf628265638
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="F", Tooltip, OverrideNativeName="F_3_2154ABAD4BD15DAC904154B63D704219"))
	float bpv__F_3_2154ABAD4BD15DAC904154B63D704219__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="B", Tooltip, OverrideNativeName="B_5_0A0855774CB13BB3E4B0A6847E7154F6"))
	float bpv__B_5_0A0855774CB13BB3E4B0A6847E7154F6__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="L", Tooltip, OverrideNativeName="L_8_DFEBB8584D28F158D2562CA60EB07B6D"))
	float bpv__L_8_DFEBB8584D28F158D2562CA60EB07B6D__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="R", Tooltip, OverrideNativeName="R_9_79E6E09B4A52B442B9FE6DB7192CFBEE"))
	float bpv__R_9_79E6E09B4A52B442B9FE6DB7192CFBEE__pf;
	FVelocityBlend__pf628265638();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FVelocityBlend__pf628265638& __Other) const
	{
		return FVelocityBlend__pf628265638::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FVelocityBlend__pf628265638& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FVelocityBlend__pf628265638::StaticStruct()); }
};
