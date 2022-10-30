#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "../Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h"
#include "LocationEvent__pf1440155950.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Niagara/DefaultAssets/Structs/LocationEvent.LocationEvent", OverrideNativeName="LocationEvent"))
struct FLocationEvent__pf1440155950
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Position", Tooltip, OverrideNativeName="Position_2_53BB17B340F2F8CBDB00619E8ACA8A8F"))
	FVector bpv__Position_2_53BB17B340F2F8CBDB00619E8ACA8A8F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Velocity", Tooltip, OverrideNativeName="Velocity_4_6147F7B84D206402EBDD6CAEC72CB864"))
	FVector bpv__Velocity_4_6147F7B84D206402EBDD6CAEC72CB864__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Acceleration", Tooltip, OverrideNativeName="Acceleration_24_1A2DB79F440455DC0602B5A462D5F37F"))
	FVector bpv__Acceleration_24_1A2DB79F440455DC0602B5A462D5F37F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="RibbonID", Tooltip, OverrideNativeName="RibbonID_18_5946869544681B0D2B8C48BAD6380BBC"))
	FNiagaraID bpv__RibbonID_18_5946869544681B0D2B8C48BAD6380BBC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="NormalizedAge", Tooltip, OverrideNativeName="NormalizedAge_11_A3BB598447BD630CE9BE078C0CB3DCAC"))
	float bpv__NormalizedAge_11_A3BB598447BD630CE9BE078C0CB3DCAC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="RandomNormalizedFloat", Tooltip, OverrideNativeName="RandomNormalizedFloat_17_2CCDADFB4F6411E0CA2698A4EB43EB80"))
	float bpv__RandomNormalizedFloat_17_2CCDADFB4F6411E0CA2698A4EB43EB80__pf;
	FLocationEvent__pf1440155950();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FLocationEvent__pf1440155950& __Other) const
	{
		return FLocationEvent__pf1440155950::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FLocationEvent__pf1440155950& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FLocationEvent__pf1440155950::StaticStruct()); }
};
