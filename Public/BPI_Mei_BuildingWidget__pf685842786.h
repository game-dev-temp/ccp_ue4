#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
class UBP_Mei_BuildingComponent_C__pf1731449071;
class ABP_Mei_Building_BaseObject_C__pf2826203124;
#include "BPI_Mei_BuildingWidget__pf685842786.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_BuildingWidget.BPI_Mei_BuildingWidget_C", OverrideNativeName="BPI_Mei_BuildingWidget_C"))
class UBPI_Mei_BuildingWidget_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Mei_BuildingWidget_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Building Widget", Tooltip="Show building menu for player.", OverrideNativeName="ShowBuildingMenu_BPI"))
	void bpf__ShowBuildingMenu_BPI__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Building Widget", Tooltip="Hide building menu for player.", OverrideNativeName="HideBuildingMenu_BPI"))
	void bpf__HideBuildingMenu_BPI__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Building Widget", Tooltip="Update building list for building menu.", OverrideNativeName="UpdateBuildingList_BPI"))
	void bpf__UpdateBuildingList_BPI__pf(FDataTableRowHandle bpp__BuildingListHandle__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Building Widget", Tooltip="Set building component reference for building widget.", OverrideNativeName="SetBuildingComponentReference_BPI"))
	void bpf__SetBuildingComponentReference_BPI__pf(UBP_Mei_BuildingComponent_C__pf1731449071* bpp__BuildingComponent__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Building Widget", OverrideNativeName="ShowMalletMenu_BPI"))
	void bpf__ShowMalletMenu_BPI__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__BuildingObject__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Building Widget", OverrideNativeName="HideMalletMenu_BPI"))
	void bpf__HideMalletMenu_BPI__pf();
public:
};
