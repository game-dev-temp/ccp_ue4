#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
class APlayerController;
#include "BPI_Mei_InteractionObject__pf685842786.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_InteractionObject.BPI_Mei_InteractionObject_C", OverrideNativeName="BPI_Mei_InteractionObject_C"))
class UBPI_Mei_InteractionObject_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Mei_InteractionObject_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Interaction Object", Tooltip="Returns true if player can interact with object using specific interaction key.", OverrideNativeName="IsCanInteract_BPI"))
	void bpf__IsCanInteract_BPI__pf(FKey bpp__InteractionKey__pf, APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Result__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Interaction Object", Tooltip="Returns interaction object name.", OverrideNativeName="GetInteractionObjectName_BPI"))
	void bpf__GetInteractionObjectName_BPI__pf(/*out*/ FText& bpp__Name__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Interaction Object", Tooltip="Returns interaction text depending on player state and interaction key.", OverrideNativeName="GetInteractionText_BPI"))
	void bpf__GetInteractionText_BPI__pf(FKey bpp__InteractionKey__pf, APlayerController* bpp__PlayerController__pf, /*out*/ FText& bpp__InteractionText__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Interaction Object", Tooltip="Try to interact with the object for the player using a specific interaction key.", OverrideNativeName="TryInteract_BPI"))
	void bpf__TryInteract_BPI__pf(bool bpp__Released__pf, FKey bpp__InteractionKey__pf, APlayerController* bpp__PlayerController__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Interaction Object", Tooltip="Complete interaction notify by name.", OverrideNativeName="CompleteInteractionNotify_BPI"))
	void bpf__CompleteInteractionNotify_BPI__pf(APlayerController* bpp__PlayerController__pf, FName bpp__NotifyName__pf);
public:
};
