#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "BPI_Mei_Floor__pf685842786.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Floor.BPI_Mei_Floor_C", OverrideNativeName="BPI_Mei_Floor_C"))
class UBPI_Mei_Floor_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Mei_Floor_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Floor", Tooltip="Set current floor number of object.", OverrideNativeName="SetFloorNumber_BPI"))
	void bpf__SetFloorNumber_BPI__pf(int32 bpp__FloorNumber__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Floor", Tooltip="Returns current floor number of object.", OverrideNativeName="GetFloorNumber_BPI"))
	void bpf__GetFloorNumber_BPI__pf(/*out*/ int32& bpp__FloorNumber__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Floor", Tooltip="Set actor hidden in floor system.", OverrideNativeName="SetFloorActorHidden_BPI"))
	void bpf__SetFloorActorHidden_BPI__pf(bool bpp__NewHidden__pf, /*out*/ bool& bpp__Success__pf);
public:
};
