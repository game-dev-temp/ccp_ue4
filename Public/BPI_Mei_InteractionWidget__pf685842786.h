#pragma once
#include "Blueprint/BlueprintSupport.h"
class UBP_Mei_InteractionComponent_C__pf1731449071;
#include "BPI_Mei_InteractionWidget__pf685842786.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_InteractionWidget.BPI_Mei_InteractionWidget_C", OverrideNativeName="BPI_Mei_InteractionWidget_C"))
class UBPI_Mei_InteractionWidget_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Mei_InteractionWidget_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Interaction Widget", Tooltip="Set interaction component reference for interaction widget.", OverrideNativeName="SetInteractionComponentReference_BPI"))
	void bpf__SetInteractionComponentReference_BPI__pf(UBP_Mei_InteractionComponent_C__pf1731449071* bpp__InteractionComponent__pf);
public:
};
