#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_Mei_ChangeVariableOperation__pf424568635.h"
#include "BPI_Mei_Durability__pf685842786.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Durability.BPI_Mei_Durability_C", OverrideNativeName="BPI_Mei_Durability_C"))
class UBPI_Mei_Durability_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Mei_Durability_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Durability", Tooltip="Change durability value depending on operation type.", OverrideNativeName="ChangeDurability_BPI"))
	void bpf__ChangeDurability_BPI__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Durability", Tooltip="Set max value of durability.", OverrideNativeName="SetMaxDurability_BPI"))
	void bpf__SetMaxDurability_BPI__pf(float bpp__Value__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Durability", Tooltip="Returns current and max values of durability.", OverrideNativeName="GetDurability_BPI"))
	void bpf__GetDurability_BPI__pf(/*out*/ float& bpp__CurrentValue__pf, /*out*/ float& bpp__MaxValue__pf);
public:
};
