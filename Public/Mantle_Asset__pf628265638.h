#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UAnimMontage;
class UCurveVector;
#include "Mantle_Asset__pf628265638.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Structs/Mantle_Asset.Mantle_Asset", OverrideNativeName="Mantle_Asset"))
struct FMantle_Asset__pf628265638
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="AnimMontage", Tooltip, OverrideNativeName="AnimMontage_42_63D6D9044A5DAB0EFBDC858CD9E37736"))
	UAnimMontage* bpv__AnimMontage_42_63D6D9044A5DAB0EFBDC858CD9E37736__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Position/Correction Curve", Tooltip, OverrideNativeName="PositionCorrectionCurve_43_0A4924AE48051202994680A7CE2D2C3A"))
	UCurveVector* bpv__PositionCorrectionCurve_43_0A4924AE48051202994680A7CE2D2C3A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="StartingOffset", Tooltip, OverrideNativeName="StartingOffset_30_FA0FF9D34F3BA3C50CF7C3928E516172"))
	FVector bpv__StartingOffset_30_FA0FF9D34F3BA3C50CF7C3928E516172__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LowHeight", Tooltip, OverrideNativeName="LowHeight_21_5CC2462A4191A12ECA9BDE85FA26C424"))
	float bpv__LowHeight_21_5CC2462A4191A12ECA9BDE85FA26C424__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LowPlayRate", Tooltip, OverrideNativeName="LowPlayRate_37_391A50444B0AD0F7DD66A9BE9C6C65CA"))
	float bpv__LowPlayRate_37_391A50444B0AD0F7DD66A9BE9C6C65CA__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LowStartPosition", Tooltip, OverrideNativeName="LowStartPosition_22_17AF0D8346D9E966FE520FB93F149B66"))
	float bpv__LowStartPosition_22_17AF0D8346D9E966FE520FB93F149B66__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="HighHeight", Tooltip, OverrideNativeName="HighHeight_23_8A8982FC42C3B6CDF79429B8675C86D9"))
	float bpv__HighHeight_23_8A8982FC42C3B6CDF79429B8675C86D9__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="HighPlayRate", Tooltip, OverrideNativeName="HighPlayRate_39_7ABB38D5459C2FE20D6A24AB7820B2FD"))
	float bpv__HighPlayRate_39_7ABB38D5459C2FE20D6A24AB7820B2FD__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="HighStartPosition", Tooltip, OverrideNativeName="HighStartPosition_24_D005813041B0EAEEB90490A469911497"))
	float bpv__HighStartPosition_24_D005813041B0EAEEB90490A469911497__pf;
	FMantle_Asset__pf628265638();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FMantle_Asset__pf628265638& __Other) const
	{
		return FMantle_Asset__pf628265638::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FMantle_Asset__pf628265638& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FMantle_Asset__pf628265638::StaticStruct()); }
};
