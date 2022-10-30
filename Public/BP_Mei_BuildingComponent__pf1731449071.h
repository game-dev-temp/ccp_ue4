#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_Mei_BuildingMode__pf424568635.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "E_Mei_ChangeVariableOperation__pf424568635.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
class APlayerController;
class ABP_Mei_Building_BaseObject_C__pf2826203124;
class AActor;
class UClass;
class UMaterialInterface;
class UUserWidget;
#include "BP_Mei_BuildingComponent__pf1731449071.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Components/BP_Mei_BuildingComponent.BP_Mei_BuildingComponent_C", OverrideNativeName="BP_Mei_BuildingComponent_C"))
class UBP_Mei_BuildingComponent_C__pf1731449071 : public UActorComponent
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnBuildingModeChanged__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBuildingModeChanged__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate , E__E_Mei_BuildingMode__pf , bpp__NewBuildingMode__pf, E__E_Mei_BuildingMode__pf , bpp__PrevBuildingMode__pf);
	UDELEGATE(meta=(OverrideNativeName="OnBuildingMessageReceived__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnBuildingMessageReceived__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate , E__E_Mei_BuildingMode__pf , bpp__BuildingMode__pf, bool , bpp__InteractionResult__pf, const FText& , bpp__Message__pf);
	UDELEGATE(meta=(OverrideNativeName="OnBuildingInteractionCompleted__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBuildingInteractionCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate , E__E_Mei_BuildingMode__pf , bpp__BuildingMode__pf, ABP_Mei_Building_BaseObject_C__pf2826203124* , bpp__BuildingObject__pf);
	UDELEGATE(meta=(OverrideNativeName="OnBuildingCompleted__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBuildingCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate , ABP_Mei_Building_BaseObject_C__pf2826203124* , bpp__BuildingObject__pf, AActor* , bpp__TargetActor__pf);
	UDELEGATE(meta=(OverrideNativeName="OnRemovingCompleted__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemovingCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate , ABP_Mei_Building_BaseObject_C__pf2826203124* , bpp__BuildingObject__pf);
	UDELEGATE(meta=(OverrideNativeName="OnDestructionCompleted__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDestructionCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate , ABP_Mei_Building_BaseObject_C__pf2826203124* , bpp__BuildingObject__pf);
	UDELEGATE(meta=(OverrideNativeName="OnRepairingCompleted__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRepairingCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate , ABP_Mei_Building_BaseObject_C__pf2826203124* , bpp__BuildingObject__pf);
	UDELEGATE(meta=(OverrideNativeName="OnUpgradingCompleted__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpgradingCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate , ABP_Mei_Building_BaseObject_C__pf2826203124* , bpp__BuildingObject__pf);
	UDELEGATE(meta=(OverrideNativeName="OnRotationCompleted__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRotationCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate , ABP_Mei_Building_BaseObject_C__pf2826203124* , bpp__BuildingObject__pf);
	UDELEGATE(meta=(OverrideNativeName="OnTargetActorChanged__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetActorChanged__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate , AActor* , bpp__TargetActor__pf);
	UDELEGATE(meta=(OverrideNativeName="OnTargetBuildingObjectChanged__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetBuildingObjectChanged__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate , ABP_Mei_Building_BaseObject_C__pf2826203124* , bpp__TargetBuildingObject__pf);
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Controller", Category="State", BlueprintPrivate="true", tooltip="Reference to the controller of the player controlling the component.", OverrideNativeName="PlayerController"))
	APlayerController* bpv__PlayerController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Local Player", Category="State", BlueprintPrivate="true", tooltip="Local player identifier. Used to update the building process only on the client machine.", OverrideNativeName="IsLocalPlayer"))
	bool bpv__IsLocalPlayer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Input Building Rotation Z", Category="State", BlueprintPrivate="true", tooltip="The input value of the building rotation in the building mode. Dynamically changed by the player.", OverrideNativeName="InputBuildingRotationZ"))
	float bpv__InputBuildingRotationZ__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Input Building Offset Z", Category="State", BlueprintPrivate="true", tooltip="Input value of the building\'s Z-axis offset in the building mode. Dynamically changed by the player.", OverrideNativeName="InputBuildingOffsetZ"))
	float bpv__InputBuildingOffsetZ__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Mode", Category="State", BlueprintPrivate="true", tooltip="Current building mode.", OverrideNativeName="BuildingMode"))
	E__E_Mei_BuildingMode__pf bpv__BuildingMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Object", Category="State", BlueprintPrivate="true", tooltip="Reference to the current building object.", OverrideNativeName="BuildingObject"))
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpv__BuildingObject__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Build Transform", Category="State", BlueprintPrivate="true", tooltip="The current position for the location of the building object.", OverrideNativeName="BuildTransform"))
	FTransform bpv__BuildTransform__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Actor", Category="State", BlueprintPrivate="true", tooltip="Reference to the target actor after the trace.", OverrideNativeName="TargetActor"))
	AActor* bpv__TargetActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Building Object", Category="State", BlueprintPrivate="true", tooltip="Reference to the target building object after the trace.", OverrideNativeName="TargetBuildingObject"))
	ABP_Mei_Building_BaseObject_C__pf2826203124* bpv__TargetBuildingObject__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can be Built", Category="State", BlueprintPrivate="true", tooltip="Identifier that the building object can be placed in the current position.", OverrideNativeName="CanBeBuilt"))
	bool bpv__CanBeBuilt__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Displayed Floor", Category="State", BlueprintPrivate="true", tooltip="Current displayed floor in top view mode.", OverrideNativeName="DisplayedFloor"))
	int32 bpv__DisplayedFloor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Last Building Object Class", Category="State", BlueprintPrivate="true", tooltip="Class of the last placed building object. Used in automatic building start mode.", OverrideNativeName="LastBuildingObjectClass"))
	UClass* bpv__LastBuildingObjectClass__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Last Building Object Handle", Category="State", BlueprintPrivate="true", tooltip="Identifier of the last placed building object. Used in the automatic building start mode.", OverrideNativeName="LastBuildingObjectHandle"))
	FDataTableRowHandle bpv__LastBuildingObjectHandle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Manual Init", Category="Settings", tooltip="If true, the component is not initialized automatically and must be initialized manually.", OverrideNativeName="ManualInit"))
	bool bpv__ManualInit__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Trace to Mouse Mode", Category="Settings", tooltip="If true, the target point or object will be searched for by trace from the player\'s camera to the mouse position on the screen. Otherwise, the trace is made to the center of the screen.", OverrideNativeName="TraceToMouseMode"))
	bool bpv__TraceToMouseMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Trace Distance", Category="Settings", tooltip="Trace distance to find the target point or object.", OverrideNativeName="TraceDistance"))
	float bpv__TraceDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Min Trace Distance", Category="Settings", tooltip="The minimum value limiting the dynamic variation of the variable trace distance.", OverrideNativeName="MinTraceDistance"))
	float bpv__MinTraceDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Trace Distance", Category="Settings", tooltip="The maximum value limiting the dynamic variation of the variable trace distance.", OverrideNativeName="MaxTraceDistance"))
	float bpv__MaxTraceDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Top Down View Mode", Category="Settings", tooltip="Enables top view mode.", OverrideNativeName="TopDownViewMode"))
	bool bpv__TopDownViewMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Top Down Trace Distance", Category="Settings", tooltip="Trace distance to find the target point or object in the top view mode.", OverrideNativeName="TopDownTraceDistance"))
	float bpv__TopDownTraceDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Near Snapping Mode", Category="Settings", tooltip="If true, then when snapping objects to each other, the socket closest to the camera will be selected. Otherwise, you can select the desired socket by rotating, which is done with the mouse wheel.", OverrideNativeName="NearSnappingMode"))
	bool bpv__NearSnappingMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Auto Start Build Mode", Category="Settings", tooltip="If true, then after the successful placement of an object, the process of placing such an object will automatically start.", OverrideNativeName="AutoStartBuildMode"))
	bool bpv__AutoStartBuildMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Destruct Chunks Life Time", Category="Global Settings", BlueprintPrivate="true", tooltip="The time of life of parts of objects when they are destroyed.", OverrideNativeName="DestructChunksLifeTime"))
	float bpv__DestructChunksLifeTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid Mode", Category="Settings", tooltip="Enables grid-based building mode.", OverrideNativeName="GridMode"))
	bool bpv__GridMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid Mode for Props", Category="Settings", tooltip="Enables grid-based building mode for floor objects.", OverrideNativeName="GridModeForProps"))
	bool bpv__GridModeForProps__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid Foundation Offset", Category="Global Settings", BlueprintPrivate="true", tooltip="Grid offset distance for foundations.", OverrideNativeName="GridFoundationOffset"))
	float bpv__GridFoundationOffset__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid Foundation Offset Z", Category="Global Settings", BlueprintPrivate="true", tooltip="Grid offset distance along the Z-axis for the foundation.", OverrideNativeName="GridFoundationOffsetZ"))
	float bpv__GridFoundationOffsetZ__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid Props Offset", Category="Global Settings", BlueprintPrivate="true", tooltip="Grid offset distance for floor objects.", OverrideNativeName="GridPropsOffset"))
	float bpv__GridPropsOffset__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Grid Correct Offset", Category="Global Settings", BlueprintPrivate="true", tooltip="Corrective offset of the grid relative to the world.", OverrideNativeName="GridCorrectOffset"))
	float bpv__GridCorrectOffset__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Rotation Step Z", Category="Global Settings", BlueprintPrivate="true", tooltip="The step for changing the InputBuildingRotationZ variable. Also used in the socket system.", OverrideNativeName="BuildingRotationStepZ"))
	float bpv__BuildingRotationStepZ__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Offset Step Z", Category="Global Settings", BlueprintPrivate="true", tooltip="The step for changing the InputBuildingOffsetZ variable.", OverrideNativeName="BuildingOffsetStepZ"))
	float bpv__BuildingOffsetStepZ__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Floor Number Limit", Category="Global Settings", BlueprintPrivate="true", tooltip="Maximum floor for the placement of objects. If the value is less than 1, there are no restrictions.", OverrideNativeName="FloorNumberLimit"))
	int32 bpv__FloorNumberLimit__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Build Material", Category="Global Settings", BlueprintPrivate="true", tooltip="The material of the building object, when placement is possible.", OverrideNativeName="CanBuildMaterial"))
	UMaterialInterface* bpv__CanBuildMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cannot Build Material", Category="Global Settings", BlueprintPrivate="true", tooltip="The material of the building object, when placement is not possible.", OverrideNativeName="CannotBuildMaterial"))
	UMaterialInterface* bpv__CannotBuildMaterial__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Min Building Offset Z", Category="Settings", tooltip="Lower limit for object height offset during the placement process.", OverrideNativeName="MinBuildingOffsetZ"))
	float bpv__MinBuildingOffsetZ__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Building Offset Z", Category="Settings", tooltip="Upper limit for object height offset during the placement process.", OverrideNativeName="MaxBuildingOffsetZ"))
	float bpv__MaxBuildingOffsetZ__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Widget Class", Category="Settings", tooltip="A widget class that is created or located and bound to the building component when the component is initialized.", OverrideNativeName="BuildingWidgetClass"))
	UClass* bpv__BuildingWidgetClass__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Building Widget", Category="State", BlueprintPrivate="true", tooltip="Reference to building widget.", OverrideNativeName="BuildingWidget"))
	UUserWidget* bpv__BuildingWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Building Mode Changed", Category="Default", tooltip="Calls when building mode was changed on client.", OverrideNativeName="OnBuildingModeChanged"))
	FOnBuildingModeChanged__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate bpv__OnBuildingModeChanged__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Building Message Received", Category="Default", tooltip="Calls when building message was received on the client.", OverrideNativeName="OnBuildingMessageReceived"))
	FOnBuildingMessageReceived__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate bpv__OnBuildingMessageReceived__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Building Interaction Completed", Category="Default", tooltip="Calls when building interaction was completed on the server.", OverrideNativeName="OnBuildingInteractionCompleted"))
	FOnBuildingInteractionCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate bpv__OnBuildingInteractionCompleted__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Building Completed", Category="Default", tooltip="Call when building was completed on the server.", OverrideNativeName="OnBuildingCompleted"))
	FOnBuildingCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate bpv__OnBuildingCompleted__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Removing Completed", Category="Default", tooltip="Calls when removing was completed on the server.", OverrideNativeName="OnRemovingCompleted"))
	FOnRemovingCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate bpv__OnRemovingCompleted__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Destruction Completed", Category="Default", tooltip="Calls when destruction was completed on the server.", OverrideNativeName="OnDestructionCompleted"))
	FOnDestructionCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate bpv__OnDestructionCompleted__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Repairing Completed", Category="Default", tooltip="Calls when repairing was completed on the server.", OverrideNativeName="OnRepairingCompleted"))
	FOnRepairingCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate bpv__OnRepairingCompleted__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Upgrading Completed", Category="Default", tooltip="Calls when upgrading was completed on the server.", OverrideNativeName="OnUpgradingCompleted"))
	FOnUpgradingCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate bpv__OnUpgradingCompleted__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Rotation Completed", Category="Default", tooltip="Calls when rotation was completed on the server.", OverrideNativeName="OnRotationCompleted"))
	FOnRotationCompleted__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate bpv__OnRotationCompleted__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Target Actor Changed", Category="Default", tooltip="Calls when the target actor was changed on the client.", OverrideNativeName="OnTargetActorChanged"))
	FOnTargetActorChanged__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate bpv__OnTargetActorChanged__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Target Building Object Changed", Category="Default", tooltip="Calls when the target building object was changed on the client.", OverrideNativeName="OnTargetBuildingObjectChanged"))
	FOnTargetBuildingObjectChanged__pf__BP_Mei_BuildingComponent_C__pf__MulticastDelegate bpv__OnTargetBuildingObjectChanged__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Starting Building List", Category="Settings", tooltip="The list of building objects that are loaded in the menu of the building widget when the component is initialized. By default, the list of the widget itself is loaded.", OverrideNativeName="StartingBuildingList"))
	FDataTableRowHandle bpv__StartingBuildingList__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Debug Mode", Category="Settings", tooltip="Enables the debug mode, which outputs the necessary information for debugging.", OverrideNativeName="DebugMode"))
	bool bpv__DebugMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Debug Information", Category="State", BlueprintPrivate="true", tooltip="Debugging information, which is formed in the debug mode of the component.", OverrideNativeName="DebugInformation"))
	FText bpv__DebugInformation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BuildingObjectClass"))
	UClass* b0l__K2Node_CustomEvent_BuildingObjectClass__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BuildingObjectHandle_2"))
	FDataTableRowHandle b0l__K2Node_CustomEvent_BuildingObjectHandle_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BuildingTransform"))
	FTransform b0l__K2Node_CustomEvent_BuildingTransform__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_TargetActor"))
	AActor* b0l__K2Node_CustomEvent_TargetActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsPlayer_Controller"))
	APlayerController* b0l__K2Node_DynamicCast_AsPlayer_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FinishBuild_Success"))
	bool b0l__CallFunc_FinishBuild_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_TargetObject_4"))
	ABP_Mei_Building_BaseObject_C__pf2826203124* b0l__K2Node_CustomEvent_TargetObject_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TryRemove_Success"))
	bool b0l__CallFunc_TryRemove_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_TargetObject_3"))
	ABP_Mei_Building_BaseObject_C__pf2826203124* b0l__K2Node_CustomEvent_TargetObject_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TryDestruct_Success"))
	bool b0l__CallFunc_TryDestruct_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_TargetObject_2"))
	ABP_Mei_Building_BaseObject_C__pf2826203124* b0l__K2Node_CustomEvent_TargetObject_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TryUpgrade_Success"))
	bool b0l__CallFunc_TryUpgrade_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TryUpgrade_Message"))
	FText b0l__CallFunc_TryUpgrade_Message__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_TargetObject_1"))
	ABP_Mei_Building_BaseObject_C__pf2826203124* b0l__K2Node_CustomEvent_TargetObject_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TryRotate_Success"))
	bool b0l__CallFunc_TryRotate_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TryBuild_Success"))
	bool b0l__CallFunc_TryBuild_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_TargetObject"))
	ABP_Mei_Building_BaseObject_C__pf2826203124* b0l__K2Node_CustomEvent_TargetObject__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TryRepair_Success"))
	bool b0l__CallFunc_TryRepair_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateProcess_Success"))
	bool b0l__CallFunc_UpdateProcess_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ShowBuildingMenu_Success"))
	bool b0l__CallFunc_ShowBuildingMenu_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_HideBuildingMenu_Success"))
	bool b0l__CallFunc_HideBuildingMenu_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BuildingListHandle"))
	FDataTableRowHandle b0l__K2Node_CustomEvent_BuildingListHandle__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BuildingMode_1"))
	E__E_Mei_BuildingMode__pf b0l__K2Node_CustomEvent_BuildingMode_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateBuildingList_Success"))
	bool b0l__CallFunc_UpdateBuildingList_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ChangeBuildingMode_Success"))
	bool b0l__CallFunc_ChangeBuildingMode_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BuildingMode"))
	E__E_Mei_BuildingMode__pf b0l__K2Node_CustomEvent_BuildingMode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_InteractionResult"))
	bool b0l__K2Node_CustomEvent_InteractionResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Message"))
	FText b0l__K2Node_CustomEvent_Message__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SendBuildingMessage_Success"))
	bool b0l__CallFunc_SendBuildingMessage_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CancelBuild_Success"))
	bool b0l__CallFunc_CancelBuild_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BuildingObjectHandle_1"))
	FDataTableRowHandle b0l__K2Node_CustomEvent_BuildingObjectHandle_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BuildingObjectHandle"))
	FDataTableRowHandle b0l__K2Node_CustomEvent_BuildingObjectHandle__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_StartBuildObject_Success"))
	bool b0l__CallFunc_StartBuildObject_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_TryStartBuildObject_Success"))
	bool b0l__CallFunc_TryStartBuildObject_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BuildingWidgetClass"))
	UClass* b0l__K2Node_CustomEvent_BuildingWidgetClass__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ChangeBuildingWidget_Success"))
	bool b0l__CallFunc_ChangeBuildingWidget_Success__pf;
	UBP_Mei_BuildingComponent_C__pf1731449071(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_21(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_22(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_BuildingComponent__pf_23(int32 bpp__EntryPoint__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="ChangeBuildingWidget (Client)"))
	virtual void bpf__ChangeBuildingWidgetxxClientx__pfTLK(UClass* bpp__BuildingWidgetClass__pf);
	UFUNCTION(meta=(Comment="/** \t * Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlay\t * or when the component is dynamically created if the Actor has already BegunPlay. \t */", DisplayName="Begin Play", ToolTip="Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlayor when the component is dynamically created if the Actor has already BegunPlay.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame if tick is enabled */", DisplayName="Tick", ToolTip="Event called every frame if tick is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryStartBuildObject (Server)"))
	virtual void bpf__TryStartBuildObjectxxServerx__pfTLK(FDataTableRowHandle bpp__BuildingObjectHandle__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="StartBuildObject (Client)"))
	virtual void bpf__StartBuildObjectxxClientx__pfTLK(FDataTableRowHandle bpp__BuildingObjectHandle__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryCancelBuild (Server)"))
	virtual void bpf__TryCancelBuildxxServerx__pfTLK();
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="CancelBuild (Client)"))
	virtual void bpf__CancelBuildxxClientx__pfTLK();
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryQuickBuild (Client)"))
	virtual void bpf__TryQuickBuildxxClientx__pfTLK();
	UFUNCTION(Client, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="SendBuildingMessage (Client)"))
	virtual void bpf__SendBuildingMessagexxClientx__pfTLK(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, bool bpp__InteractionResult__pf, const FText& bpp__Message__pf__const);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="SetBuildingMode (Client)"))
	virtual void bpf__SetBuildingModexxClientx__pfTLK(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="UpdateBuildingList (Client)"))
	virtual void bpf__UpdateBuildingListxxClientx__pfTLK(FDataTableRowHandle bpp__BuildingListHandle__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="HideBuildingMenu (Client)"))
	virtual void bpf__HideBuildingMenuxxClientx__pfTLK();
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="ShowBuildingMenu (Client)"))
	virtual void bpf__ShowBuildingMenuxxClientx__pfTLK();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryRepair (Server)"))
	virtual void bpf__TryRepairxxServerx__pfTLK(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryQuickRepair (Client)"))
	virtual void bpf__TryQuickRepairxxClientx__pfTLK();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryRotate (Server)"))
	virtual void bpf__TryRotatexxServerx__pfTLK(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryQuickRotate (Client)"))
	virtual void bpf__TryQuickRotatexxClientx__pfTLK();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryUpgrade (Server)"))
	virtual void bpf__TryUpgradexxServerx__pfTLK(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryQuickUpgrade (Client)"))
	virtual void bpf__TryQuickUpgradexxClientx__pfTLK();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryDestruct (Server)"))
	virtual void bpf__TryDestructxxServerx__pfTLK(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryQuickDestruct (Client)"))
	virtual void bpf__TryQuickDestructxxClientx__pfTLK();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryRemove (Server)"))
	virtual void bpf__TryRemovexxServerx__pfTLK(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryQuickRemove (Client)"))
	virtual void bpf__TryQuickRemovexxClientx__pfTLK();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="FinishBuild (Server)"))
	virtual void bpf__FinishBuildxxServerx__pfTLK(UClass* bpp__BuildingObjectClass__pf, FDataTableRowHandle bpp__BuildingObjectHandle__pf, FTransform bpp__BuildingTransform__pf, AActor* bpp__TargetActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Init Component", Tooltip="Try to init component and set references.", OverrideNativeName="InitComponent"))
	virtual void bpf__InitComponent__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Inputs", Tooltip="Change input building rotation Z value for building process. It can be in range 0 - 360.", OverrideNativeName="ChangeBuildingRotationZ"))
	virtual void bpf__ChangeBuildingRotationZ__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Inputs", Tooltip="Change input building offset Z value for building process. It can be in range MinBuildingOffsetZ - MaxBuildingOffsetZ.", OverrideNativeName="ChangeBuildingOffsetZ"))
	virtual void bpf__ChangeBuildingOffsetZ__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Inputs", Tooltip="Change min building offset Z value for building process.", OverrideNativeName="ChangeMinBuildingOffsetZ"))
	virtual void bpf__ChangeMinBuildingOffsetZ__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Inputs", Tooltip="Change max building offset Z value for building process.", OverrideNativeName="ChangeMaxBuildingOffsetZ"))
	virtual void bpf__ChangeMaxBuildingOffsetZ__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Inputs", Tooltip="Change trace distance value for building process. It can be in range MinTraceDistance - MaxTraceDistance.", OverrideNativeName="ChangeTraceDistance"))
	virtual void bpf__ChangeTraceDistance__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Inputs", Tooltip="Change max trace distance value for building process.", OverrideNativeName="ChangeMaxTraceDistance"))
	virtual void bpf__ChangeMaxTraceDistance__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, float bpp__Value__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Inputs", Tooltip="Change displayed floor value and hide building actors if their floor number greater than displayed floor.", OverrideNativeName="ChangeDisplayedFloor"))
	virtual void bpf__ChangeDisplayedFloor__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, int32 bpp__Value__pf, bool bpp__UpdateVisibility__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Inputs", Tooltip="Change top down view mode for building process.", OverrideNativeName="ChangeTopDownViewMode"))
	virtual void bpf__ChangeTopDownViewMode__pf(bool bpp__TopDownViewMode__pf, bool bpp__TraceToMouseMode__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Inputs", Tooltip="Change grid mode for building process.", OverrideNativeName="ChangeGridMode"))
	virtual void bpf__ChangeGridMode__pf(bool bpp__GridMode__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Inputs", Tooltip="Change near snapping mode for building process.", OverrideNativeName="ChangeNearSnappingMode"))
	virtual void bpf__ChangeNearSnappingMode__pf(bool bpp__NearSnappingMode__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Inputs", Tooltip="Change building mode for building process.", OverrideNativeName="ChangeBuildingMode"))
	virtual void bpf__ChangeBuildingMode__pf(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Interactions", Tooltip="Start to build object by building handle and activate building mode.", OverrideNativeName="StartBuildObject"))
	virtual void bpf__StartBuildObject__pf(FDataTableRowHandle bpp__BuildingObjectHandle__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Interactions", Tooltip="Cancel build and reset building mode.", OverrideNativeName="CancelBuild"))
	virtual void bpf__CancelBuild__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Interactions", Tooltip="Try to complete build the object if it can be built.", OverrideNativeName="TryBuild"))
	virtual void bpf__TryBuild__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Other", Tooltip="Destroy building object and clear variable.", OverrideNativeName="DestroyBuildingObject"))
	virtual void bpf__DestroyBuildingObject__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Interactions", Tooltip="Try to remove the target building object.", OverrideNativeName="TryRemove"))
	virtual void bpf__TryRemove__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Interactions", Tooltip="Try to destruct the target building object.", OverrideNativeName="TryDestruct"))
	virtual void bpf__TryDestruct__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Interactions", Tooltip="Try to repair the target building object.", OverrideNativeName="TryRepair"))
	virtual void bpf__TryRepair__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Interactions", Tooltip="Try to upgrade the target building object.", OverrideNativeName="TryUpgrade"))
	virtual void bpf__TryUpgrade__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf, /*out*/ bool& bpp__Success__pf, /*out*/ FText& bpp__Message__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Interactions", Tooltip="Try to rotate the target building object.", OverrideNativeName="TryRotate"))
	virtual void bpf__TryRotate__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__TargetObject__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Interactions", Tooltip="Finish build and spawn building object on the server.", OverrideNativeName="FinishBuild"))
	virtual void bpf__FinishBuild__pf(UClass* bpp__BuildingObjectClass__pf, FDataTableRowHandle bpp__BuildingObjectHandle__pf, FTransform bpp__BuildingTransform__pf, AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Other", Tooltip="Returns true if building requirements are complete.", OverrideNativeName="CheckBuildingRequirements"))
	virtual void bpf__CheckBuildingRequirements__pf(FDataTableRowHandle bpp__BuildingObjectHandle__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Other", Tooltip="Complete building requirements.", OverrideNativeName="CompleteBuildingRequirements"))
	virtual void bpf__CompleteBuildingRequirements__pf(FDataTableRowHandle bpp__BuildingObjectHandle__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Update building process for local player.", OverrideNativeName="UpdateProcess"))
	virtual void bpf__UpdateProcess__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Update position of the current building object.", OverrideNativeName="UpdateBuildingPosition"))
	virtual void bpf__UpdateBuildingPosition__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Update target actor and target building object.", OverrideNativeName="UpdateTargetActor"))
	virtual void bpf__UpdateTargetActor__pf(FHitResult const& bpp__HitResult__pf__const, /*out*/ bool& bpp__Success__pf, /*out*/ AActor*& bpp__TargetActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Returns hit result after line trace.", OverrideNativeName="GetTraceHitResult"))
	virtual void bpf__GetTraceHitResult__pf(/*out*/ FHitResult& bpp__HitResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Set building object transform. Returns true if transform was changed.", OverrideNativeName="SetBuildingObjectTransform"))
	virtual void bpf__SetBuildingObjectTransform__pf(FTransform bpp__NewTransform__pf, /*out*/ bool& bpp__TransformChanged__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Set building object materials.", OverrideNativeName="SetBuildingObjectMaterials"))
	virtual void bpf__SetBuildingObjectMaterials__pf(bool bpp__CanBeBuilt__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Set build status variable and update building object materials.", OverrideNativeName="SetCanBeBuilt"))
	virtual void bpf__SetCanBeBuilt__pf(bool bpp__CanBeBuilt__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Update build status for building process.", OverrideNativeName="UpdateBuildStatus"))
	virtual void bpf__UpdateBuildStatus__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Returns actors whose floor number is higher than the target floor number.", OverrideNativeName="GetFloorIgnoringActors"))
	virtual void bpf__GetFloorIgnoringActors__pf(int32 bpp__TargetFloor__pf, /*out*/ TArray<AActor*>& bpp__IgnoringActors__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Returns correct transform for placing foundations depending on hit location and current building modes.", OverrideNativeName="GetFoundationTransform"))
	virtual void bpf__GetFoundationTransform__pf(FVector bpp__HitLocation__pf, /*out*/ FTransform& bpp__Transform__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Returns correct transform for placing props depending on hit location and current building modes.", OverrideNativeName="GetPropTransform"))
	virtual void bpf__GetPropTransform__pf(FVector bpp__HitLocation__pf, /*out*/ FTransform& bpp__Transform__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Process|Update Process", Tooltip="Returns correct hit location for building process with building Z offset.", OverrideNativeName="GetCorrectHitLocation"))
	virtual void bpf__GetCorrectHitLocation__pf(FVector bpp__HitLocation__pf, /*out*/ FVector& bpp__ReturnLocation__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Process|Update Process", Tooltip="Returns correct building rotation for building process in the current view mode.", OverrideNativeName="GetCorrectBuildingRotation"))
	virtual void bpf__GetCorrectBuildingRotation__pf(/*out*/ FRotator& bpp__Rotation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Interactions", Tooltip="Try to do interaction depending on current building mode.", OverrideNativeName="TryQuickInteraction"))
	virtual void bpf__TryQuickInteraction__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Widget", Tooltip="Try to create building widget and add it to the viewport.", OverrideNativeName="TryToCreateBuildingWidget"))
	virtual void bpf__TryToCreateBuildingWidget__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Widget", Tooltip="Show building menu from building widget.", OverrideNativeName="ShowBuildingMenu"))
	virtual void bpf__ShowBuildingMenu__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Widget", Tooltip="Hide building menu from building widget.", OverrideNativeName="HideBuildingMenu"))
	virtual void bpf__HideBuildingMenu__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Widget", Tooltip="Update building list in the building widget.", OverrideNativeName="UpdateBuildingList"))
	virtual void bpf__UpdateBuildingList__pf(FDataTableRowHandle bpp__BuildingListHandle__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Widget", Tooltip="Set building widget reference.", OverrideNativeName="SetBuildingWidget"))
	virtual void bpf__SetBuildingWidget__pf(UUserWidget* bpp__BuildingWidget__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Other", Tooltip="Send building message for player.", OverrideNativeName="SendBuildingMessage"))
	virtual void bpf__SendBuildingMessage__pf(E__E_Mei_BuildingMode__pf bpp__BuildingMode__pf, bool bpp__InteractionResult__pf, const FText& bpp__Message__pf__const, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Interactions", Tooltip="Check building requirements on the server and start build object.", OverrideNativeName="TryStartBuildObject"))
	virtual void bpf__TryStartBuildObject__pf(FDataTableRowHandle bpp__BuildingObjectHandle__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Init Component", Tooltip="Check and init component if manual init variable is disabled.", OverrideNativeName="AutoInitComponent"))
	virtual void bpf__AutoInitComponent__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Set target actor reference.", OverrideNativeName="SetTargetActor"))
	virtual void bpf__SetTargetActor__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Set target building object reference.", OverrideNativeName="SetTargetBuildingObject"))
	virtual void bpf__SetTargetBuildingObject__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Process|Other", Tooltip="Returns current building mode.", OverrideNativeName="GetBuildingMode"))
	virtual void bpf__GetBuildingMode__pf(/*out*/ E__E_Mei_BuildingMode__pf& bpp__BuildingMode__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Process|Other", Tooltip="Returns current building status and references.", OverrideNativeName="GetBuildingStatus"))
	virtual void bpf__GetBuildingStatus__pf(/*out*/ bool& bpp__CanBeBuild__pf, /*out*/ ABP_Mei_Building_BaseObject_C__pf2826203124*& bpp__BuildingObject__pf, /*out*/ AActor*& bpp__TargetActor__pf, /*out*/ ABP_Mei_Building_BaseObject_C__pf2826203124*& bpp__TargetBuildingObject__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Process|Other", Tooltip="Returns current interaction mode and references.", OverrideNativeName="GetInteractionStatus"))
	virtual void bpf__GetInteractionStatus__pf(/*out*/ E__E_Mei_BuildingMode__pf& bpp__BuildingMode__pf, /*out*/ AActor*& bpp__TargetActor__pf, /*out*/ ABP_Mei_Building_BaseObject_C__pf2826203124*& bpp__TargetBuildingObject__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Other", Tooltip="Print debug information depending on current building mode.", OverrideNativeName="PrintDebugInformation"))
	virtual void bpf__PrintDebugInformation__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Inputs", Tooltip="Change debug mode for building process.", OverrideNativeName="ChangeDebugMode"))
	virtual void bpf__ChangeDebugMode__pf(bool bpp__DebugMode__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Update Process", Tooltip="Update floor number for building object and check floor number limit.", OverrideNativeName="CheckFloorNumber"))
	virtual void bpf__CheckFloorNumber__pf(/*out*/ bool& bpp__Result__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Other", Tooltip="Hide floor actors if their floor number is greater then displayed floor number.", OverrideNativeName="UpdateFloorActorsVisibility"))
	virtual void bpf__UpdateFloorActorsVisibility__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Process|Other", Tooltip="Reset floor number visibility.", OverrideNativeName="ResetFloorActorsVisibility"))
	virtual void bpf__ResetFloorActorsVisibility__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Init Component", Tooltip="Init component and check references. Repeat again if references are not valid.", OverrideNativeName="CheckInitReferences"))
	virtual void bpf__CheckInitReferences__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Building Widget", Tooltip="Show mallet menu from building widget.", OverrideNativeName="ShowMalletMenu"))
	virtual void bpf__ShowMalletMenu__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Widget", Tooltip="Hide mallet menu from building widget.", OverrideNativeName="HideMalletMenu"))
	virtual void bpf__HideMalletMenu__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Widget", Tooltip="Change building widget class and create it for player.", OverrideNativeName="ChangeBuildingWidget"))
	virtual void bpf__ChangeBuildingWidget__pf(UClass* bpp__BuildingWidgetClass__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Process|Other", Tooltip="Returns debug information.", OverrideNativeName="GetDebugInformation"))
	virtual void bpf__GetDebugInformation__pf(/*out*/ FText& bpp__DebugInformation__pf);
public:
};
