#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "E_Mei_BuildingMode__pf424568635.h"
#include "STR_Mei_Resource__pf4030501756.h"
class UObject;
class ABP_Mei_Building_BaseObject_C__pf2826203124;
#include "BPI_Mei_Player__pf685842786.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_Player.BPI_Mei_Player_C", OverrideNativeName="BPI_Mei_Player_C"))
class UBPI_Mei_Player_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Mei_Player_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Returns true if target requirements complete successfully for the player..", OverrideNativeName="CheckRequirements_BPI"))
	void bpf__CheckRequirements_BPI__pf(FDataTableRowHandle bpp__Handle__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Complete target requirements for the player.", OverrideNativeName="CompleteRequirements_BPI"))
	void bpf__CompleteRequirements_BPI__pf(FDataTableRowHandle bpp__Handle__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Try to start object by target handle.", OverrideNativeName="TryStartBuildObject_BPI"))
	void bpf__TryStartBuildObject_BPI__pf(FDataTableRowHandle bpp__BuildingObjectHandle__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Set new building mode for the player.", OverrideNativeName="SetBuildingMode_BPI"))
	void bpf__SetBuildingMode_BPI__pf(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Update building list for building widget.", OverrideNativeName="UpdateBuildingList_BPI"))
	void bpf__UpdateBuildingList_BPI__pf(FDataTableRowHandle bpp__BuildingListHandle__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Start interaction with codelock object for the player.", OverrideNativeName="OpenCodeLock_BPI"))
	void bpf__OpenCodeLock_BPI__pf(UObject* bpp__CodeLock__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="End interaction with codelock object for the player.", OverrideNativeName="CloseCodeLock_BPI"))
	void bpf__CloseCodeLock_BPI__pf(UObject* bpp__CodeLock__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Update codelock widget for the player.", OverrideNativeName="UpdateCodeLock_BPI"))
	void bpf__UpdateCodeLock_BPI__pf(UObject* bpp__CodeLock__pf, bool bpp__IsLocked__pf, bool bpp__IsAuthorized__pf, const FString& bpp__Password__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Show codelock widget for the player.", OverrideNativeName="ShowCodeLockWidget_BPI"))
	void bpf__ShowCodeLockWidget_BPI__pf(UObject* bpp__CodeLock__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Hide codelock widget for the player.", OverrideNativeName="HideCodeLockWidget_BPI"))
	void bpf__HideCodeLockWidget_BPI__pf(UObject* bpp__CodeLock__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Try to set password for target codelock object for the player..", OverrideNativeName="TryToSetCodeLockPassword_BPI"))
	void bpf__TryToSetCodeLockPassword_BPI__pf(UObject* bpp__CodeLock__pf, const FString& bpp__Password__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Add resource for the player..", OverrideNativeName="AddResource_BPI"))
	void bpf__AddResource_BPI__pf(FSTR_Mei_Resource__pf4030501756 bpp__Resource__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Add resources for the player.", OverrideNativeName="AddResources_BPI"))
	void bpf__AddResources_BPI__pf(TArray<FSTR_Mei_Resource__pf4030501756> const& bpp__Resources__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Returns resources information of the player.", OverrideNativeName="GetResources_BPI"))
	void bpf__GetResources_BPI__pf(/*out*/ TArray<FSTR_Mei_Resource__pf4030501756>& bpp__Resources__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Returns true if the player has the required resources.", OverrideNativeName="CheckResources_BPI"))
	void bpf__CheckResources_BPI__pf(/*out*/ TArray<FSTR_Mei_Resource__pf4030501756>& bpp__Resources__pf, /*out*/ bool& bpp__Result__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Remove required resources from the player.", OverrideNativeName="RemoveResources_BPI"))
	void bpf__RemoveResources_BPI__pf(TArray<FSTR_Mei_Resource__pf4030501756> const& bpp__Resources__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", Tooltip="Set resources for the player.", OverrideNativeName="SetResources_BPI"))
	void bpf__SetResources_BPI__pf(TArray<FSTR_Mei_Resource__pf4030501756> const& bpp__Resources__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", OverrideNativeName="TryRotate_BPI"))
	void bpf__TryRotate_BPI__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", OverrideNativeName="TryRepair_BPI"))
	void bpf__TryRepair_BPI__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", OverrideNativeName="TryUpgrade_BPI"))
	void bpf__TryUpgrade_BPI__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", OverrideNativeName="TryRemove_BPI"))
	void bpf__TryRemove_BPI__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Player", OverrideNativeName="TryDestruct_BPI"))
	void bpf__TryDestruct_BPI__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf);
public:
};
