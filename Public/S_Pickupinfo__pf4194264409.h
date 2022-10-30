#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "E_PickupTypes__pf4194264409.h"
class UTexture2D;
#include "S_Pickupinfo__pf4194264409.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/Pickup/S_Pickupinfo.S_Pickupinfo", OverrideNativeName="S_Pickupinfo"))
struct FS_Pickupinfo__pf4194264409
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PickupName", Tooltip, OverrideNativeName="PickupName_7_9C6C5E9D41EB7A429D43D0B4D16782C9"))
	FText bpv__PickupName_7_9C6C5E9D41EB7A429D43D0B4D16782C9__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PickupType", Tooltip, OverrideNativeName="PickupType_22_E0AB3CDB4F696F48808D34A3993ED85B"))
	E__E_PickupTypes__pf bpv__PickupType_22_E0AB3CDB4F696F48808D34A3993ED85B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="PickupImage", Tooltip, OverrideNativeName="PickupImage_10_A4EA764045786AD9A812969E2837BF03"))
	UTexture2D* bpv__PickupImage_10_A4EA764045786AD9A812969E2837BF03__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="LightDamage", Tooltip, OverrideNativeName="LightDamage_25_909D8F7345520B6C716F7CAA487B865B"))
	float bpv__LightDamage_25_909D8F7345520B6C716F7CAA487B865B__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="HeavyDamage", Tooltip, OverrideNativeName="HeavyDamage_26_53D2251648CCE8FC8CBBF5B4A5D35124"))
	float bpv__HeavyDamage_26_53D2251648CCE8FC8CBBF5B4A5D35124__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Armor", Tooltip, OverrideNativeName="Armor_17_6502631540B865EBC6572FB44963FEE2"))
	float bpv__Armor_17_6502631540B865EBC6572FB44963FEE2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BlockValue", Tooltip, OverrideNativeName="BlockValue_18_E2EC433F4C3FD78E0296FB994804CF01"))
	float bpv__BlockValue_18_E2EC433F4C3FD78E0296FB994804CF01__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="BlendspaceInt", Tooltip, OverrideNativeName="BlendspaceInt_19_392162DB48797DE15D20508292F9585D"))
	int32 bpv__BlendspaceInt_19_392162DB48797DE15D20508292F9585D__pf;
	FS_Pickupinfo__pf4194264409();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_Pickupinfo__pf4194264409& __Other) const
	{
		return FS_Pickupinfo__pf4194264409::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
