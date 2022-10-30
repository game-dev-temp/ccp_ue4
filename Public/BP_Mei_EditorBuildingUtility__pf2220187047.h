#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class UBillboardComponent;
class UBoxComponent;
class UTextRenderComponent;
class ABP_Mei_Building_BaseObject_C__pf2826203124;
#include "BP_Mei_EditorBuildingUtility__pf2220187047.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/BuildingObject/Utilities/BP_Mei_EditorBuildingUtility.BP_Mei_EditorBuildingUtility_C", OverrideNativeName="BP_Mei_EditorBuildingUtility_C"))
class ABP_Mei_EditorBuildingUtility_C__pf2220187047 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Billboard"))
	UBillboardComponent* bpv__Billboard__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MoveCollision"))
	UBoxComponent* bpv__MoveCollision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TextRender"))
	UTextRenderComponent* bpv__TextRender__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Select Collision Extent", Category="Selection", OverrideNativeName="SelectCollisionExtent"))
	FVector bpv__SelectCollisionExtent__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Selected Objects", Category="Selection", OverrideNativeName="SelectedObjects"))
	TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*> bpv__SelectedObjects__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Ready for the Consequences", Category="Dangerous Functions", OverrideNativeName="ReadyForTheConsequences"))
	bool bpv__ReadyForTheConsequences__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Save Slot Name", Category="Dangerous Functions|Save and Load", OverrideNativeName="SaveSlotName"))
	FString bpv__SaveSlotName__pf;
	ABP_Mei_EditorBuildingUtility_C__pf2220187047(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Selection", Tooltip="Add selected building objects to the array.", CallInEditor="true", OverrideNativeName="AddSelectedObjects"))
	virtual void bpf__AddSelectedObjects__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Selection", CallInEditor="true", OverrideNativeName="CopySelectedObjects"))
	virtual void bpf__CopySelectedObjects__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Selection", Tooltip="Destroy selected building objects.", CallInEditor="true", OverrideNativeName="DestroySelectedObjects"))
	virtual void bpf__DestroySelectedObjects__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Move and Rotate", Tooltip="Attach selected building objects.", CallInEditor="true", OverrideNativeName="AttachSelectedObjects"))
	virtual void bpf__AttachSelectedObjects__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Move And Rotate", Tooltip="Detach selected building objects.", CallInEditor="true", OverrideNativeName="DetachSelectedObjects"))
	virtual void bpf__DetachSelectedObjects__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Dangerous Functions", Tooltip="WARNING! Remove building objects from the level. Check the Ready variable to use it.", CallInEditor="true", OverrideNativeName="ClearBuildingObjects"))
	virtual void bpf__ClearBuildingObjects__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Dangerous Functions", Tooltip="Save building objects to the save slot name.", CallInEditor="true", OverrideNativeName="SaveBuildingObjects"))
	virtual void bpf__SaveBuildingObjects__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Dangerous Functions", Tooltip="Try to load building objects from target save slot. Also select and attach loaded objects. Check the Ready variable to use it.", CallInEditor="true", OverrideNativeName="LoadBuildingObjects"))
	virtual void bpf__LoadBuildingObjects__pf();
public:
};
