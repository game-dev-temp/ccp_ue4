#pragma once
#include "Blueprint/BlueprintSupport.h"
class UObject;
#include "BPI_Mei_CodeLockWidget__pf685842786.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_CodeLockWidget.BPI_Mei_CodeLockWidget_C", OverrideNativeName="BPI_Mei_CodeLockWidget_C"))
class UBPI_Mei_CodeLockWidget_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Mei_CodeLockWidget_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI EBS Code Lock Widget", Tooltip="Set codelock reference for codelock widget..", OverrideNativeName="SetCodeLockReference_BPI"))
	void bpf__SetCodeLockReference_BPI__pf(UObject* bpp__CodeLock__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI EBS Code Lock Widget", Tooltip="Show codelock widget and focus it for owning player.", OverrideNativeName="ShowCodeLock_BPI"))
	void bpf__ShowCodeLock_BPI__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI EBS Code Lock Widget", Tooltip="Hide codelock widget for owning player.", OverrideNativeName="HideCodeLock_BPI"))
	void bpf__HideCodeLock_BPI__pf();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI EBS Code Lock Widget", Tooltip="Update codelock widget.", OverrideNativeName="UpdateCodeLock_BPI"))
	void bpf__UpdateCodeLock_BPI__pf(bool bpp__IsLocked__pf, bool bpp__IsAuthorized__pf, const FString& bpp__Password__pf__const);
public:
};
