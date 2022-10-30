#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "S_EquippedItems__pf4244024795.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/Character/S_EquippedItems.S_EquippedItems", OverrideNativeName="S_EquippedItems"))
struct FS_EquippedItems__pf4244024795
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="EquippedWeapon", Tooltip, OverrideNativeName="EquippedWeapon_3_2AEADD3C4CED507C2F25B7B821C8A7A4"))
	bool bpv__EquippedWeapon_3_2AEADD3C4CED507C2F25B7B821C8A7A4__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="EquippedShield", Tooltip, OverrideNativeName="EquippedShield_5_0609C5CD44C254686A858AB0ECD355AF"))
	bool bpv__EquippedShield_5_0609C5CD44C254686A858AB0ECD355AF__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="EquippedLight", Tooltip, OverrideNativeName="EquippedLight_6_05598BE34059841F652C64B36AE9E36C"))
	bool bpv__EquippedLight_6_05598BE34059841F652C64B36AE9E36C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="EquippedStaff", Tooltip, OverrideNativeName="EquippedStaff_8_2F1945F749BA6AF922ED16B05891C3EC"))
	bool bpv__EquippedStaff_8_2F1945F749BA6AF922ED16B05891C3EC__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="EquippedConsumable", Tooltip, OverrideNativeName="EquippedConsumable_10_719331B64D895A8CAD0490BA2F3AE114"))
	bool bpv__EquippedConsumable_10_719331B64D895A8CAD0490BA2F3AE114__pf;
	FS_EquippedItems__pf4244024795();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_EquippedItems__pf4244024795& __Other) const
	{
		return FS_EquippedItems__pf4244024795::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FS_EquippedItems__pf4244024795& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FS_EquippedItems__pf4244024795::StaticStruct()); }
};
