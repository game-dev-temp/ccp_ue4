#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "S_PlayerStats__pf4244024795.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/Character/S_PlayerStats.S_PlayerStats", OverrideNativeName="S_PlayerStats"))
struct FS_PlayerStats__pf4244024795
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CurrentHealth", Tooltip, OverrideNativeName="CurrentHealth_3_1E66A4DA44A2F7EAB6B277BD7D825224"))
	float bpv__CurrentHealth_3_1E66A4DA44A2F7EAB6B277BD7D825224__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MaxHealth", Tooltip, OverrideNativeName="MaxHealth_5_E64C5A5A494BA87CC3114CB325EAB047"))
	float bpv__MaxHealth_5_E64C5A5A494BA87CC3114CB325EAB047__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CurrentStamina", Tooltip, OverrideNativeName="CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21"))
	float bpv__CurrentStamina_8_6D7C5143496B343F1FE89AA0C2D60E21__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MaxStamina", Tooltip, OverrideNativeName="MaxStamina_9_673463104FFD0F393D82E48AA88F409E"))
	float bpv__MaxStamina_9_673463104FFD0F393D82E48AA88F409E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="CurrentMana", Tooltip, OverrideNativeName="CurrentMana_12_B816CBB64B019D056822B1A87DD0A652"))
	float bpv__CurrentMana_12_B816CBB64B019D056822B1A87DD0A652__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="MaxMana", Tooltip, OverrideNativeName="MaxMana_20_D2377E564CA3E00F0EC1EAA10239904D"))
	float bpv__MaxMana_20_D2377E564CA3E00F0EC1EAA10239904D__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ArmorValue", Tooltip, OverrideNativeName="ArmorValue_14_872817194819E8CF9509179528FF0DBB"))
	float bpv__ArmorValue_14_872817194819E8CF9509179528FF0DBB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="SoulsCollected", Tooltip, OverrideNativeName="SoulsCollected_17_42D7C17A4D6F9590461E41B199396162"))
	int32 bpv__SoulsCollected_17_42D7C17A4D6F9590461E41B199396162__pf;
	FS_PlayerStats__pf4244024795();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FS_PlayerStats__pf4244024795& __Other) const
	{
		return FS_PlayerStats__pf4244024795::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FS_PlayerStats__pf4244024795& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FS_PlayerStats__pf4244024795::StaticStruct()); }
};
