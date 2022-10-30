#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "E_Mei_BuildingType__pf424568635.h"
#include "STR_Mei_BuildingObjectSettings__pf4030501756.h"
#include "STR_Mei_SnapSettings__pf4030501756.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "E_Mei_ChangeVariableOperation__pf424568635.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "BPI_Mei_Durability__pf685842786.h"
#include "BPI_Mei_Floor__pf685842786.h"
#include "BPI_Mei_SaveObject__pf685842786.h"
#include "STR_Mei_SocketTransforms__pf4030501756.h"
class UStaticMeshComponent;
class USceneComponent;
class UTimelineComponent;
class ABP_Mei_Building_BaseObject_C__pf2826203124;
class USoundBase;
class UMaterialInstanceDynamic;
class UDamageType;
class AController;
class AActor;
class APlayerController;
class UPrimitiveComponent;
class USaveGame;
#include "BP_Mei_Building_BaseObject__pf2826203124.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/BuildingObject/Base/BP_Mei_Building_BaseObject.BP_Mei_Building_BaseObject_C", OverrideNativeName="BP_Mei_Building_BaseObject_C"))
class ABP_Mei_Building_BaseObject_C__pf2826203124 : public AActor, public IBPI_Mei_Durability_C, public IBPI_Mei_Floor_C, public IBPI_Mei_SaveObject_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="StaticMesh"))
	UStaticMeshComponent* bpv__StaticMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1_NewTrack_0_2AF244574D17473D92C97A8C975F6F65"))
	float bpv__Timeline_1_NewTrack_0_2AF244574D17473D92C97A8C975F6F65__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1__Direction_2AF244574D17473D92C97A8C975F6F65"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_1__Direction_2AF244574D17473D92C97A8C975F6F65__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BP_Mei_Building_BaseObject", OverrideNativeName="Timeline_1"))
	UTimelineComponent* bpv__Timeline_1__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_NewTrack_0_E54F04AF4B11108681AFECBEF759C364"))
	float bpv__Timeline_0_NewTrack_0_E54F04AF4B11108681AFECBEF759C364__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_E54F04AF4B11108681AFECBEF759C364"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_E54F04AF4B11108681AFECBEF759C364__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BP_Mei_Building_BaseObject", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing="OnRep_BuildingObjectHandle", meta=(DisplayName="Building Object Handle", Category="Spawn", ExposeOnSpawn="true", tooltip="Handle for loading object settings from the data table. If not specified, the default object settings from the building object class are used.", OverrideNativeName="BuildingObjectHandle"))
	FDataTableRowHandle bpv__BuildingObjectHandle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Type", Category="Settings|Base", tooltip="Type of building object. It is used in functions of snapping with other objects.", OverrideNativeName="BuildingType"))
	E__E_Mei_BuildingType__pf bpv__BuildingType__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Object Settings", Category="State", tooltip="The settings of the building object. Includes name, description, icon, mesh and other important settings. Automatically loaded from the data table by the object\'s handle. Calls the OnRep_BuildingObjectHandle function when the value changes.", OverrideNativeName="BuildingObjectSettings"))
	FSTR_Mei_BuildingObjectSettings__pf4030501756 bpv__BuildingObjectSettings__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Built", Category="Spawn", ExposeOnSpawn="true", tooltip="Identifier that the object is already built. Must be true if the building object is placed in the editor.", OverrideNativeName="Built"))
	bool bpv__Built__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Placed on Landscape", Category="Settings|Base", tooltip="If true, the building object can be placed on the landscape or on static meshes, if they are landscapes. Otherwise, the object can only snap to other objects.", OverrideNativeName="PlacedOnLandscape"))
	bool bpv__PlacedOnLandscape__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Floor", Category="Settings|Base", tooltip="If true, then the object is a floor and you can build objects on it that can be placed on the floor.", OverrideNativeName="IsFloor"))
	bool bpv__IsFloor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Socket Name", Category="Settings|Socket System", tooltip="Object identifier for the socket system. Used in snapping functions with other objects.", OverrideNativeName="SocketName"))
	FName bpv__SocketName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotate Angle", Category="Settings|Base", tooltip="Is the angle by which the object can be rotated around the Z-axis. If the rotation angle is 0, the object cannot be rotated in the object rotation mode.", OverrideNativeName="RotateAngle"))
	float bpv__RotateAngle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Durability", Category="State", tooltip="The current durability of the object.", OverrideNativeName="Durability"))
	float bpv__Durability__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Max Durability", Category="State", tooltip="Maximum durability of the object.", OverrideNativeName="MaxDurability"))
	float bpv__MaxDurability__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Floor Number", Category="State", tooltip="Current number of the floor on which the object is placed.", OverrideNativeName="FloorNumber"))
	int32 bpv__FloorNumber__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Socket Transforms", Category="State", tooltip="Data about socket positions. Generated automatically when the object is initialized.", OverrideNativeName="SocketTransforms"))
	TMap<FName,FSTR_Mei_SocketTransforms__pf4030501756> bpv__SocketTransforms__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Save ID", Category="State", tooltip="Object identifier for the save and load system.", OverrideNativeName="SaveID"))
	int32 bpv__SaveID__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Manual Build Target", Category="Manual Build", tooltip="Target object, with which you should snap this object in the manual building mode in the editor.", OverrideNativeName="ManualBuildTarget"))
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpv__ManualBuildTarget__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Manual Input Rotation", Category="Manual Build", tooltip="Input rotation angle, relative to which the object position is determined when placing in the manual building mode in the editor.", OverrideNativeName="ManualInputRotation"))
	float bpv__ManualInputRotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Build Sound", Category="Settings|Sounds", tooltip="The sound that is played during the building of the object.", OverrideNativeName="BuildSound"))
	USoundBase* bpv__BuildSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Destruct Sound", Category="Settings|Sounds", tooltip="The sound that is played when an object is destroyed.", OverrideNativeName="DestructSound"))
	USoundBase* bpv__DestructSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Repair Sound", Category="Settings|Sounds", tooltip="The sound that is played during the repair of the object.", OverrideNativeName="RepairSound"))
	USoundBase* bpv__RepairSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Upgrade Sound", Category="Settings|Sounds", tooltip="The sound that is played when the object is upgraded.", OverrideNativeName="UpgradeSound"))
	USoundBase* bpv__UpgradeSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotate Sound", Category="Settings|Sounds", tooltip="The sound that plays when the object is rotated.", OverrideNativeName="RotateSound"))
	USoundBase* bpv__RotateSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Snap Settings", Category="Settings|Socket System", tooltip="Settings to snap other objects to this object using the socket system. A detailed description can be found in the corresponding section.", OverrideNativeName="SnapSettings"))
	TArray<FSTR_Mei_SnapSettings__pf4030501756> bpv__SnapSettings__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ignored Building Types", Category="Settings|Base", tooltip=" The types of building objects that will be ignored in the buildability check function if they overlap this object.", OverrideNativeName="IgnoredBuildingTypes"))
	TArray<E__E_Mei_BuildingType__pf> bpv__IgnoredBuildingTypes__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Material 1", Category="Default", MultiLine="true", tooltip="self ディゾルブ用", OverrideNativeName="Material1"))
	UMaterialInstanceDynamic* bpv__Material1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_DestroyBuildComponents_Success"))
	bool b0l__CallFunc_DestroyBuildComponents_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddActorWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddActorWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CompleteRemove_Success"))
	bool b0l__CallFunc_CompleteRemove_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateSocketTransforms_Success"))
	bool b0l__CallFunc_CreateSocketTransforms_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b0l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b0l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b0l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b0l__K2Node_Event_DamageCauser__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CheckAndAttachToTarget_Success"))
	bool b0l__CallFunc_CheckAndAttachToTarget_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetGlobalDestructChunksLifeTime_StepValue"))
	float b0l__CallFunc_GetGlobalDestructChunksLifeTime_StepValue__pf;
	ABP_Mei_Building_BaseObject_C__pf2826203124(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_Building_BaseObject__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", Comment="/** Event when this actor takes ANY damage */", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	virtual void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="CompleteRotate (Multicast)"))
	virtual void bpf__CompleteRotatexxMulticastx__pfTLK();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="CompleteUpgrade (Multicast)"))
	virtual void bpf__CompleteUpgradexxMulticastx__pfTLK();
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="CompleteRepair (Multicast)"))
	virtual void bpf__CompleteRepairxxMulticastx__pfTLK();
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="CompleteBuild (Multicast)"))
	virtual void bpf__CompleteBuildxxMulticastx__pfTLK();
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="CompleteDestruction (Multicast)"))
	virtual void bpf__CompleteDestructionxxMulticastx__pfTLK();
	UFUNCTION(meta=(OverrideNativeName="Timeline_1__UpdateFunc"))
	virtual void bpf__Timeline_1__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_1__FinishedFunc"))
	virtual void bpf__Timeline_1__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__UpdateFunc"))
	virtual void bpf__Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__FinishedFunc"))
	virtual void bpf__Timeline_0__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Check and attach to target actor if it is possible. Can be overridden in snap based child classes.", OverrideNativeName="CheckAndAttachToTarget"))
	virtual void bpf__CheckAndAttachToTarget__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Checks build status. Returns true if building is possible. Should be overridden in child classes.", OverrideNativeName="CheckBuildStatus"))
	virtual void bpf__CheckBuildStatus__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__CanBeBuilt__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Returns true if can be snapped with target actor. Should be overridden in snap based child classes.", OverrideNativeName="CheckSnap"))
	virtual void bpf__CheckSnap__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__CanBeSnapped__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Returns snap world transform with target actor. Can be overridden in snap based child classes.", OverrideNativeName="GetSnapTransform"))
	virtual void bpf__GetSnapTransform__pf(AActor* bpp__TargetActor__pf, float bpp__InputRotation__pf, FVector bpp__HitLocation__pf, bool bpp__GridMode__pf, bool bpp__SnapNear__pf, /*out*/ FTransform& bpp__ReturnTransform__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Base", Tooltip="Returns true if target actor does not overlap build collisions. Can be overridden in child classes.", OverrideNativeName="CheckBuildCollisions"))
	virtual void bpf__CheckBuildCollisions__pf(AActor* bpp__Actor__pf, /*out*/ bool& bpp__NotBlocked__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Base", Tooltip="Returns true if target actor don\'t blocked by target component.", OverrideNativeName="CheckActorCollisions"))
	virtual void bpf__CheckActorCollisions__pf(AActor* bpp__Actor__pf, UPrimitiveComponent* bpp__BuildCollision__pf, /*out*/ bool& bpp__NotBlocked__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Set collision response to overlap.", OverrideNativeName="SetStartBuildCollisionResponse"))
	virtual void bpf__SetStartBuildCollisionResponse__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Returns list of overlapping building objects.", OverrideNativeName="GetSnappedObjects"))
	virtual void bpf__GetSnappedObjects__pf(/*out*/ TArray<ABP_Mei_Building_BaseObject_C__pf2826203124*>& bpp__OverlappingObjects__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Returns true if building object has support. Can be overridden in child classes.", OverrideNativeName="CheckSupport"))
	virtual void bpf__CheckSupport__pf(/*out*/ bool& bpp__HasSupport__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Base", Tooltip="Returns nearest transform to target location.", OverrideNativeName="GetNearestTransform"))
	virtual void bpf__GetNearestTransform__pf(FVector bpp__Location__pf, /*out*/ TArray<FTransform>& bpp__Transforms__pf, /*out*/ FTransform& bpp__ResultTransform__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Base", Tooltip="Returns socket transform by name and index. Can be overridden in snap based child classes.", OverrideNativeName="GetSocketTransform"))
	virtual void bpf__GetSocketTransform__pf(FName bpp__SocketName__pf, int32 bpp__Index__pf, /*out*/ FTransform& bpp__Transform__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Base", Tooltip="Returns true if target object in one of the sockets. Can be overridden in child snap based classes.", OverrideNativeName="BuildingObjectInSocket"))
	virtual void bpf__BuildingObjectInSocket__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf, /*out*/ bool& bpp__InSocket__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Base", Tooltip="Returns world Z value of the floor. Can be overridden in floor based child classes.", OverrideNativeName="GetFloorWorldZ"))
	virtual void bpf__GetFloorWorldZ__pf(/*out*/ float& bpp__ValueZ__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Set the transform variables for the sockets. Can be overridden in snap based child classes.", OverrideNativeName="CreateSocketTransforms"))
	virtual void bpf__CreateSocketTransforms__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Remove unnecessary collisions and sockets. Can be overridden in child classes.", OverrideNativeName="DestroyBuildComponents"))
	virtual void bpf__DestroyBuildComponents__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Returns true if building object is not claimed or claimed by target player.", OverrideNativeName="CheckClaim"))
	virtual void bpf__CheckClaim__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Result__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Set floor number by target actor. Can be overridden in child classes.", OverrideNativeName="SetFloorNumberByTargetActor"))
	virtual void bpf__SetFloorNumberByTargetActor__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Returns true if building object owned by target player.", OverrideNativeName="CheckOwnership"))
	virtual void bpf__CheckOwnership__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Result__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Repair", Tooltip="Returns true if target player can repair the object.", OverrideNativeName="CheckRepair"))
	virtual void bpf__CheckRepair__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Result__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Repair", Tooltip="Returns true if repair requirements complete for the player.", OverrideNativeName="CheckRepairRequirements"))
	virtual void bpf__CheckRepairRequirements__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Result__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Repair", Tooltip="Repair building and complete repair requirements for player.", OverrideNativeName="CompleteRepair"))
	virtual void bpf__CompleteRepair__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Upgrade", Tooltip="Returns true if target player can upgrade the object.", OverrideNativeName="CheckUpgrade"))
	virtual void bpf__CheckUpgrade__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Upgrade", Tooltip="Returns true if upgrade requirements complete for the player.", OverrideNativeName="CheckUpgradeRequirements"))
	virtual void bpf__CheckUpgradeRequirements__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Upgrade", Tooltip="Upgrade building and complete upgrade requirements for player.", OverrideNativeName="CompleteUpgrade"))
	virtual void bpf__CompleteUpgrade__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Remove", Tooltip="Removes building object from the game. Checks snaped object\'s support and remove them if need. Destruct if flag is true.", OverrideNativeName="CompleteRemove"))
	virtual void bpf__CompleteRemove__pf(APlayerController* bpp__PlayerController__pf, bool bpp__Destruct__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Remove", Tooltip="Removes attached objects. For example: Door in DoorFrame. Overridden in child class.", OverrideNativeName="RemoveAttachedObjects"))
	virtual void bpf__RemoveAttachedObjects__pf(bool bpp__Destruct__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Remove", Tooltip="Check and destruct object on the server.", OverrideNativeName="CompleteDestruction"))
	virtual void bpf__CompleteDestruction__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Rotate", Tooltip="Returns true if target player can rotate the object.", OverrideNativeName="CheckRotate"))
	virtual void bpf__CheckRotate__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Rotate", Tooltip="Rotate building object on the server.", OverrideNativeName="CompleteRotate"))
	virtual void bpf__CompleteRotate__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Manual Build", Tooltip="Snap to target object manually.", CallInEditor="true", OverrideNativeName="ManualSnapToTarget"))
	virtual void bpf__ManualSnapToTarget__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Manual Build", Tooltip="Snap to target object with next rotation manually.", CallInEditor="true", OverrideNativeName="ManualSnapAndRotateNext"))
	virtual void bpf__ManualSnapAndRotateNext__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Manual Build", Tooltip="Snap to target object with prev rotation manually.", CallInEditor="true", OverrideNativeName="ManualSnapAndRotatePrev"))
	virtual void bpf__ManualSnapAndRotatePrev__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Manual Build", Tooltip="Rotate building object in place manually.", CallInEditor="true", OverrideNativeName="ManualRotate"))
	virtual void bpf__ManualRotate__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Base", Tooltip="Make socket transforms. Can be overridden in child classes.", OverrideNativeName="MakeSocketTransforms"))
	virtual void bpf__MakeSocketTransforms__pf(FName bpp__SocketName__pf, /*out*/ TArray<FTransform>& bpp__Transforms__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Base", Tooltip="Make socket transforms by primitive component. Can be overridden in child classes.", OverrideNativeName="MakeSocketTransformsPrimitive"))
	virtual void bpf__MakeSocketTransformsPrimitive__pf(UPrimitiveComponent* bpp__PrimitiveComponent__pf, FName bpp__SocketName__pf, int32 bpp__Amount__pf, /*out*/ TArray<FTransform>& bpp__Transforms__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Base", Tooltip="Returns socket transforms by name. Can be overridden in snap based child classes.", OverrideNativeName="GetSocketTransforms"))
	virtual void bpf__GetSocketTransforms__pf(FName bpp__SocketName__pf, /*out*/ TArray<FTransform>& bpp__SocketTransforms__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Base", Tooltip="Returns nearest socket transform to target location. Can be overridden in child classes.", OverrideNativeName="GetNearestSocketTransform"))
	virtual void bpf__GetNearestSocketTransform__pf(FVector bpp__Location__pf, FName bpp__SocketName__pf, /*out*/ FTransform& bpp__ResultTransform__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Base", Tooltip="Complete building for player.", OverrideNativeName="CompleteBuild"))
	virtual void bpf__CompleteBuild__pf(APlayerController* bpp__PlayerController__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_BuildingObjectHandle"))
	virtual void bpf__OnRep_BuildingObjectHandle__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Durability", Tooltip="Returns current and max values of durability.", CppFromBpEvent, OverrideNativeName="GetDurability_BPI"))
	virtual void bpf__GetDurability_BPI__pf(/*out*/ float& bpp__CurrentValue__pf, /*out*/ float& bpp__MaxValue__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Durability", Tooltip="Set max value of durability.", CppFromBpEvent, OverrideNativeName="SetMaxDurability_BPI"))
	virtual void bpf__SetMaxDurability_BPI__pf(float bpp__Value__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Durability", Tooltip="Change durability value depending on operation type.", CppFromBpEvent, OverrideNativeName="ChangeDurability_BPI"))
	virtual void bpf__ChangeDurability_BPI__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Floor", Tooltip="Set actor hidden in floor system.", CppFromBpEvent, OverrideNativeName="SetFloorActorHidden_BPI"))
	virtual void bpf__SetFloorActorHidden_BPI__pf(bool bpp__NewHidden__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Floor", Tooltip="Returns current floor number of object.", CppFromBpEvent, OverrideNativeName="GetFloorNumber_BPI"))
	virtual void bpf__GetFloorNumber_BPI__pf(/*out*/ int32& bpp__FloorNumber__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Floor", Tooltip="Set current floor number of object.", CppFromBpEvent, OverrideNativeName="SetFloorNumber_BPI"))
	virtual void bpf__SetFloorNumber_BPI__pf(int32 bpp__FloorNumber__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Save Object", CppFromBpEvent, OverrideNativeName="GetFormatedVariables_BPI"))
	virtual void bpf__GetFormatedVariables_BPI__pf(/*out*/ TArray<FString>& bpp__FormatedVariables__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Save Object", CppFromBpEvent, OverrideNativeName="LoadData_BPI"))
	virtual void bpf__LoadData_BPI__pf(USaveGame* bpp__SaveGame__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Save Object", CppFromBpEvent, OverrideNativeName="SaveData_BPI"))
	virtual void bpf__SaveData_BPI__pf(USaveGame* bpp__SaveGame__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Save Object", CppFromBpEvent, OverrideNativeName="SetSaveID_BPI"))
	virtual void bpf__SetSaveID_BPI__pf(int32 bpp__SaveID__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Save Object", CppFromBpEvent, OverrideNativeName="GetSaveID_BPI"))
	virtual void bpf__GetSaveID_BPI__pf(/*out*/ int32& bpp__SaveID__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interfaces|BPI Mei Save Object", CppFromBpEvent, OverrideNativeName="InitSaveID_BPI"))
	virtual void bpf__InitSaveID_BPI__pf(USaveGame* bpp__SaveGame__pf, /*out*/ bool& bpp__Success__pf);
public:
};
