#pragma once
#include "Blueprint/BlueprintSupport.h"
class APlayerController;
#include "BPI_Mei_Ownership__pf685842786.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Ownership.BPI_Mei_Ownership_C", OverrideNativeName="BPI_Mei_Ownership_C"))
class UBPI_Mei_Ownership_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Mei_Ownership_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Ownership", Tooltip="Returns owner names array of object.", OverrideNativeName="GetOwners_BPI"))
	void bpf__GetOwners_BPI__pf(/*out*/ TArray<FString>& bpp__OwnerNames__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Ownership", Tooltip="Returns true if target player is owner of target object.", OverrideNativeName="CheckPlayerIsOwner_BPI"))
	void bpf__CheckPlayerIsOwner_BPI__pf(const APlayerController* bpp__PlayerController__pf__const, /*out*/ bool& bpp__IsOwner__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Ownership", Tooltip="Add owner player to object.", OverrideNativeName="AddOwner_BPI"))
	void bpf__AddOwner_BPI__pf(APlayerController* bpp__PlayerController__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Ownership", Tooltip="Remove owner player of object.", OverrideNativeName="RemoveOwner_BPI"))
	void bpf__RemoveOwner_BPI__pf(APlayerController* bpp__PlayerController__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Ownership", Tooltip="Returns overall ownership information.", OverrideNativeName="GetOwnershipInfo_BPI"))
	void bpf__GetOwnershipInfo_BPI__pf(/*out*/ bool& bpp__IsOwned__pf, /*out*/ TArray<FString>& bpp__OwnerNames__pf, /*out*/ float& bpp__OwnershipDistance__pf);
public:
};
