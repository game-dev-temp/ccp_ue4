#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "STR_Mei_SaveData_Actor__pf2864127960.h"
#include "STR_Mei_SaveData_BuildingObject__pf2864127960.h"
#include "STR_Mei_SaveData_Level__pf2864127960.h"
class AActor;
#include "BPI_Mei_SaveGame__pf685842786.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/BuildingSystem/BPI_Mei_SaveGame.BPI_Mei_SaveGame_C", OverrideNativeName="BPI_Mei_SaveGame_C"))
class UBPI_Mei_SaveGame_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IBPI_Mei_SaveGame_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Init target actor for save / load process.", OverrideNativeName="InitActor_BPI"))
	void bpf__InitActor_BPI__pf(AActor* bpp__Actor__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Set save data for actor by save ID.", OverrideNativeName="SetActorSaveData_BPI"))
	void bpf__SetActorSaveData_BPI__pf(int32 bpp__SaveID__pf, FSTR_Mei_SaveData_Actor__pf2864127960 bpp__SaveData__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Set save data for building object by save ID.", OverrideNativeName="SetBuildingSaveData_BPI"))
	void bpf__SetBuildingSaveData_BPI__pf(int32 bpp__SaveID__pf, FSTR_Mei_SaveData_BuildingObject__pf2864127960 bpp__SaveData__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Returns save data of actor by save ID.", OverrideNativeName="GetActorSaveData_BPI"))
	void bpf__GetActorSaveData_BPI__pf(int32 bpp__SaveID__pf, /*out*/ bool& bpp__Success__pf, /*out*/ FSTR_Mei_SaveData_Actor__pf2864127960& bpp__SaveData__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Returns save data of building object by save ID.", OverrideNativeName="GetBuildingSaveData_BPI"))
	void bpf__GetBuildingSaveData_BPI__pf(int32 bpp__SaveID__pf, /*out*/ bool& bpp__Success__pf, /*out*/ FSTR_Mei_SaveData_BuildingObject__pf2864127960& bpp__SaveData__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Clear temporary save data for save / load process.", OverrideNativeName="ClearTemporaryData_BPI"))
	void bpf__ClearTemporaryData_BPI__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Load temporary level save data of objects for save / load process.", OverrideNativeName="LoadTemporaryData_BPI"))
	void bpf__LoadTemporaryData_BPI__pf(FSTR_Mei_SaveData_Level__pf2864127960 bpp__LevelData__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Save data in current save slot name.", OverrideNativeName="SaveGame_BPI"))
	void bpf__SaveGame_BPI__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Save level data in target level name slot.", OverrideNativeName="SaveLevelData_BPI"))
	void bpf__SaveLevelData_BPI__pf(FName bpp__LevelName__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Load level data by target level name slot.", OverrideNativeName="LoadLevelData_BPI"))
	void bpf__LoadLevelData_BPI__pf(FName bpp__LevelName__pf, /*out*/ bool& bpp__Success__pf, /*out*/ FSTR_Mei_SaveData_Level__pf2864127960& bpp__LevelData__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Save data to target save slot name.", OverrideNativeName="SaveGameToSlot_BPI"))
	void bpf__SaveGameToSlot_BPI__pf(const FString& bpp__SlotName__pf__const, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Returns actor reference by save ID.", OverrideNativeName="GetSavedActor_BPI"))
	void bpf__GetSavedActor_BPI__pf(int32 bpp__SaveID__pf, /*out*/ bool& bpp__Success__pf, /*out*/ AActor*& bpp__Actor__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="BPI Mei Save Game", Tooltip="Init target actor for save / load process with specific save ID.", OverrideNativeName="InitActorWithSaveID_BPI"))
	void bpf__InitActorWithSaveID_BPI__pf(AActor* bpp__Actor__pf, int32 bpp__SaveID__pf, /*out*/ bool& bpp__Success__pf);
public:
};
