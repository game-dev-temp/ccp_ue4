#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UAnimSequenceBase;
#include "DynamicMontageParams__pf628265638.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Structs/DynamicMontageParams.DynamicMontageParams", OverrideNativeName="DynamicMontageParams"))
struct FDynamicMontageParams__pf628265638
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Animation", Tooltip, OverrideNativeName="Animation_2_5E5C122A46BA0311400556A423FC05D0"))
	UAnimSequenceBase* bpv__Animation_2_5E5C122A46BA0311400556A423FC05D0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BlendInTime", Tooltip, OverrideNativeName="BlendInTime_10_1C5E8446412E51FFA0B03AB8BD32E6E8"))
	float bpv__BlendInTime_10_1C5E8446412E51FFA0B03AB8BD32E6E8__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BlendOutTime", Tooltip, OverrideNativeName="BlendOutTime_12_79DFD9804491A7DF0813EFA923002F9C"))
	float bpv__BlendOutTime_12_79DFD9804491A7DF0813EFA923002F9C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PlayRate", Tooltip, OverrideNativeName="PlayRate_5_4724216C43D83EADF735F0AFEE9947EB"))
	float bpv__PlayRate_5_4724216C43D83EADF735F0AFEE9947EB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="StartTime", Tooltip, OverrideNativeName="StartTime_7_3C5D7A3849D194E10AB51CA0344EBC8D"))
	float bpv__StartTime_7_3C5D7A3849D194E10AB51CA0344EBC8D__pf;
	FDynamicMontageParams__pf628265638();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FDynamicMontageParams__pf628265638& __Other) const
	{
		return FDynamicMontageParams__pf628265638::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FDynamicMontageParams__pf628265638& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FDynamicMontageParams__pf628265638::StaticStruct()); }
};
