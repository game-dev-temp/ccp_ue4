#pragma once
#include "Blueprint/BlueprintSupport.h"
class USaveGame;
#include "BPI_Mei_SaveObject__pf685842786.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_SaveObject.BPI_Mei_SaveObject_C", OverrideNativeName="BPI_Mei_SaveObject_C"))
class UBPI_Mei_SaveObject_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Mei_SaveObject_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Save Object", OverrideNativeName="InitSaveID_BPI"))
	void bpf__InitSaveID_BPI__pf(USaveGame* bpp__SaveGame__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Save Object", OverrideNativeName="GetSaveID_BPI"))
	void bpf__GetSaveID_BPI__pf(/*out*/ int32& bpp__SaveID__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Save Object", OverrideNativeName="SetSaveID_BPI"))
	void bpf__SetSaveID_BPI__pf(int32 bpp__SaveID__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Save Object", OverrideNativeName="SaveData_BPI"))
	void bpf__SaveData_BPI__pf(USaveGame* bpp__SaveGame__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Save Object", OverrideNativeName="LoadData_BPI"))
	void bpf__LoadData_BPI__pf(USaveGame* bpp__SaveGame__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Interfaces|BPI Mei Save Object", OverrideNativeName="GetFormatedVariables_BPI"))
	void bpf__GetFormatedVariables_BPI__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf);
public:
};
