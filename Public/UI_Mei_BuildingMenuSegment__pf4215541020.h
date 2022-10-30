#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "STR_Mei_BuildingObjectSettings__pf4030501756.h"
#include "UI_Mei_MenuSegment__pf4215541020.h"
#include "UI_Mei_BuildingMenuSegment__pf4215541020.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/UI/BuildingSystem/UI_Mei_BuildingMenuSegment.UI_Mei_BuildingMenuSegment_C", OverrideNativeName="UI_Mei_BuildingMenuSegment_C"))
class UUI_Mei_BuildingMenuSegment_C__pf4215541020 : public UUI_Mei_MenuSegment_C__pf4215541020
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Building Object Handle", Category="Default", ExposeOnSpawn="true", OverrideNativeName="BuildingObjectHandle"))
	FDataTableRowHandle bpv__BuildingObjectHandle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Object Settings", Category="Default", OverrideNativeName="BuildingObjectSettings"))
	FSTR_Mei_BuildingObjectSettings__pf4030501756 bpv__BuildingObjectSettings__pf;
	UUI_Mei_BuildingMenuSegment_C__pf4215541020(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	virtual void bpf__UpdateWidget__pf(/*out*/ bool& bpp__Success__pf) override;
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
