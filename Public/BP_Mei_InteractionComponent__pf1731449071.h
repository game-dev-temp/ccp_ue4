#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_Mei_InteractionType__pf424568635.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "BPI_Mei_InteractionObject__pf685842786.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "E_Mei_ChangeVariableOperation__pf424568635.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
class APlayerController;
class ACharacter;
class UUserWidget;
class UClass;
class AActor;
class UBP_Mei_InteractionComponent_C__pf1731449071;
class UAnimMontage;
#include "BP_Mei_InteractionComponent__pf1731449071.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Components/BP_Mei_InteractionComponent.BP_Mei_InteractionComponent_C", OverrideNativeName="BP_Mei_InteractionComponent_C"))
class UBP_Mei_InteractionComponent_C__pf1731449071 : public UActorComponent
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnInteractionActorChanged__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractionActorChanged__pf__BP_Mei_InteractionComponent_C__pf__MulticastDelegate , AActor* , bpp__InteractionActor__pf);
	UDELEGATE(meta=(OverrideNativeName="OnTargetActorChanged__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetActorChanged__pf__BP_Mei_InteractionComponent_C__pf__MulticastDelegate , AActor* , bpp__TargetActor__pf);
	UDELEGATE(meta=(OverrideNativeName="OnInteractionNotify__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInteractionNotify__pf__BP_Mei_InteractionComponent_C__pf__MulticastDelegate , ACharacter* , bpp__Character__pf, AActor* , bpp__InteractionActor__pf, FName , bpp__NotifyName__pf);
	UDELEGATE(meta=(OverrideNativeName="OnInteractionStanceChanged__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionStanceChanged__pf__BP_Mei_InteractionComponent_C__pf__MulticastDelegate , uint8 , bpp__NewInteractionStance__pf, uint8 , bpp__PrevInteractionStance__pf);
	UDELEGATE(meta=(OverrideNativeName="OnInteractionNotify__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnInteractionNotify__pf__BP_Mei_InteractionComponent_C__pf__SinglecastDelegate , ACharacter* , bpp__Character__pf, AActor* , bpp__InteractionActor__pf, FName , bpp__NotifyName__pf);
	UDELEGATE(meta=(OverrideNativeName="OnInteractionStanceChanged__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnInteractionStanceChanged__pf__BP_Mei_InteractionComponent_C__pf__SinglecastDelegate , uint8 , bpp__NewInteractionStance__pf, uint8 , bpp__PrevInteractionStance__pf);
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Controller", Category="State", BlueprintPrivate="true", tooltip="Player controller reference.", OverrideNativeName="PlayerController"))
	APlayerController* bpv__PlayerController__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Character", Category="State", BlueprintPrivate="true", tooltip="Player character reference.", OverrideNativeName="PlayerCharacter"))
	ACharacter* bpv__PlayerCharacter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Local Player", Category="State", BlueprintPrivate="true", tooltip="Local player identifier. Used to update the building process only on the client machine.", OverrideNativeName="IsLocalPlayer"))
	bool bpv__IsLocalPlayer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Manual Init", Category="Settings", tooltip="If true, then the component is not initialized automatically and will have to be initialized manually.", OverrideNativeName="ManualInit"))
	bool bpv__ManualInit__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Trace by Tick", Category="Settings", tooltip="Enables object search using Trace from Event Tick.", OverrideNativeName="TraceByTick"))
	bool bpv__TraceByTick__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Trace to Mouse Mode", Category="Settings", tooltip="If true, the target object will be searched for by trace from the player\'s camera to the mouse position on the screen. Otherwise, the trace is made to the center of the screen.", OverrideNativeName="TraceToMouseMode"))
	bool bpv__TraceToMouseMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Trace Distance", Category="Settings", tooltip="Trace distance to find the target object.", OverrideNativeName="TraceDistance"))
	float bpv__TraceDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Top Down View Mode", Category="Settings", tooltip="Enables top down view mode.", OverrideNativeName="TopDownViewMode"))
	bool bpv__TopDownViewMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Top Down Trace Distance", Category="Settings", tooltip="Trace distance to find the target object in the top view mode.", OverrideNativeName="TopDownTraceDistance"))
	float bpv__TopDownTraceDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Interaction Range", Category="Settings", tooltip="Distance to check the possibility of interaction during the search for the target.", OverrideNativeName="InteractionRange"))
	float bpv__InteractionRange__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Interaction Montages", Category="Settings", tooltip="Animation montages that will be played by the character when interacting with the object.", OverrideNativeName="InteractionMontages"))
	TMap<uint8,UAnimMontage*> bpv__InteractionMontages__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Interaction Widget Class", Category="Settings", tooltip="A widget class to display information about interaction with objects.", OverrideNativeName="InteractionWidgetClass"))
	UClass* bpv__InteractionWidgetClass__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Actor", Category="State", BlueprintPrivate="true", tooltip="Target object reference.", OverrideNativeName="TargetActor"))
	AActor* bpv__TargetActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Interaction Actor", Category="State", BlueprintPrivate="true", tooltip="Reference to the object that implements the interface BPI_Mei_InteractionObject, and with which you can interact.", OverrideNativeName="InteractionActor"))
	AActor* bpv__InteractionActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Interaction Actor Changed", Category="Default", tooltip="Calls when the interaction actor variable changed on the client.", OverrideNativeName="OnInteractionActorChanged"))
	FOnInteractionActorChanged__pf__BP_Mei_InteractionComponent_C__pf__MulticastDelegate bpv__OnInteractionActorChanged__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Target Actor Changed", Category="Default", tooltip="Calls when the target actor variable changed on the client.", OverrideNativeName="OnTargetActorChanged"))
	FOnTargetActorChanged__pf__BP_Mei_InteractionComponent_C__pf__MulticastDelegate bpv__OnTargetActorChanged__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Interaction Stance", Category="State", BlueprintPrivate="true", tooltip="The current stance for interacting with objects.", OverrideNativeName="InteractionStance"))
	E__E_Mei_InteractionType__pf bpv__InteractionStance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Interaction Actor", Category="State", BlueprintPrivate="true", tooltip="Reference to the object with which the character began to interact.", OverrideNativeName="CurrentInteractionActor"))
	AActor* bpv__CurrentInteractionActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Should Update Rotation", Category="State", BlueprintPrivate="true", tooltip="Indicator that the character rotates to the TargetRotation value on the tick.", OverrideNativeName="ShouldUpdateRotation"))
	bool bpv__ShouldUpdateRotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Rotation", Category="State", BlueprintPrivate="true", tooltip="The target rotation to which the character must rotate.", OverrideNativeName="TargetRotation"))
	FRotator bpv__TargetRotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Interaction Notify", Category="Default", tooltip="Calls when interaction notify is executed.", OverrideNativeName="OnInteractionNotify"))
	FOnInteractionNotify__pf__BP_Mei_InteractionComponent_C__pf__MulticastDelegate bpv__OnInteractionNotify__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Interaction Stance Changed", Category="Default", tooltip="Calls when the interaction stance variable changed on the server.", OverrideNativeName="OnInteractionStanceChanged"))
	FOnInteractionStanceChanged__pf__BP_Mei_InteractionComponent_C__pf__MulticastDelegate bpv__OnInteractionStanceChanged__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Displayed Floor", Category="State", BlueprintPrivate="true", tooltip="Current display floor.", OverrideNativeName="DisplayedFloor"))
	int32 bpv__DisplayedFloor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Character Interaction Component", Category="State", BlueprintPrivate="true", tooltip="Reference to the interaction component, which is in the game character. Used to synchronize events and variables when interacting with objects.", OverrideNativeName="CharacterInteractionComponent"))
	UBP_Mei_InteractionComponent_C__pf1731449071* bpv__CharacterInteractionComponent__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Interaction Widget", Category="State", BlueprintPrivate="true", tooltip="Reference to the widget that displays information about the interaction with objects.", OverrideNativeName="InteractionWidget"))
	UUserWidget* bpv__InteractionWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Debug Mode", Category="Settings", tooltip="Enables the debug mode, which outputs the necessary information for debugging.", OverrideNativeName="DebugMode"))
	bool bpv__DebugMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Debug Information", Category="State", BlueprintPrivate="true", tooltip="Debugging information, which is formed in the debug mode of the component.", OverrideNativeName="DebugInformation"))
	FText bpv__DebugInformation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateProcess_Success"))
	bool b0l__CallFunc_UpdateProcess_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Mei_Interaction_Object"))
	TScriptInterface<IBPI_Mei_InteractionObject_C> b0l__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Released"))
	bool b0l__K2Node_CustomEvent_Released__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_InteractionKey"))
	FKey b0l__K2Node_CustomEvent_InteractionKey__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_InteractionActor"))
	AActor* b0l__K2Node_CustomEvent_InteractionActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1"))
	TScriptInterface<IBPI_Mei_InteractionObject_C> b0l__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsCanInteract_BPI_Result"))
	bool b0l__CallFunc_IsCanInteract_BPI_Result__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_2"))
	TScriptInterface<IBPI_Mei_InteractionObject_C> b0l__K2Node_DynamicCast_AsBPI_Mei_Interaction_Object_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Released_1"))
	bool b0l__K2Node_CustomEvent_Released_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_InteractionKey_1"))
	FKey b0l__K2Node_CustomEvent_InteractionKey_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_AnimMontage"))
	UAnimMontage* b0l__K2Node_CustomEvent_AnimMontage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_TargetRotation"))
	FRotator b0l__K2Node_CustomEvent_TargetRotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_StartRotateCharacter_Success"))
	bool b0l__CallFunc_StartRotateCharacter_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_InteractionWidgetClass"))
	UClass* b0l__K2Node_CustomEvent_InteractionWidgetClass__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ChangeInteractionWidget_Success"))
	bool b0l__CallFunc_ChangeInteractionWidget_Success__pf;
	UBP_Mei_InteractionComponent_C__pf1731449071(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Mei_InteractionComponent__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_InteractionComponent__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_InteractionComponent__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_InteractionComponent__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_InteractionComponent__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_InteractionComponent__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Mei_InteractionComponent__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="ChangeInteractionWidget (Client)"))
	virtual void bpf__ChangeInteractionWidgetxxClientx__pfTLK(UClass* bpp__InteractionWidgetClass__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="StartRotateCharacter (Multicast)"))
	virtual void bpf__StartRotateCharacterxxMulticastx__pfTLK(FRotator bpp__TargetRotation__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="PlayInteractionMontage (Multicast)"))
	virtual void bpf__PlayInteractionMontagexxMulticastx__pfTLK(UAnimMontage* bpp__AnimMontage__pf);
	UFUNCTION(meta=(Comment="/** \t * Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlay\t * or when the component is dynamically created if the Actor has already BegunPlay. \t */", DisplayName="Begin Play", ToolTip="Blueprint implementable event for when the component is beginning play, called before its owning actor\'s BeginPlayor when the component is dynamically created if the Actor has already BegunPlay.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame if tick is enabled */", DisplayName="Tick", ToolTip="Event called every frame if tick is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryInteract (Server)"))
	virtual void bpf__TryInteractxxServerx__pfTLK(bool bpp__Released__pf, FKey bpp__InteractionKey__pf, AActor* bpp__InteractionActor__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="TryInteract (Client)"))
	virtual void bpf__TryInteractxxClientx__pfTLK(bool bpp__Released__pf, FKey bpp__InteractionKey__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Init Component", Tooltip="Try to init component and set references.", OverrideNativeName="InitComponent"))
	virtual void bpf__InitComponent__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Init Component", Tooltip="Check and init component if manual init variable is disabled.", OverrideNativeName="AutoInitComponent"))
	virtual void bpf__AutoInitComponent__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Widget", Tooltip="Try to create interaction widget and add it to the viewport.", OverrideNativeName="TryToCreateInteractionWidget"))
	virtual void bpf__TryToCreateInteractionWidget__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Update Process", Tooltip="Update target interaction actor.", OverrideNativeName="UpdateInteractionActor"))
	virtual void bpf__UpdateInteractionActor__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Update Process", Tooltip="Returns hit result after line trace.", OverrideNativeName="GetTraceHitResult"))
	virtual void bpf__GetTraceHitResult__pf(/*out*/ FHitResult& bpp__HitResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Update Process", Tooltip="Returns actors whose floor number is higher than the target floor number.", OverrideNativeName="GetFloorIgnoringActors"))
	virtual void bpf__GetFloorIgnoringActors__pf(int32 bpp__FloorNumber__pf, /*out*/ TArray<AActor*>& bpp__IgnoringActors__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Update Process", Tooltip="Set target interaction actor reference.", OverrideNativeName="SetInteractionActor"))
	virtual void bpf__SetInteractionActor__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Interaction Process|Other", Tooltip="Returns interaction actor reference.", OverrideNativeName="GetInteractionActor"))
	virtual void bpf__GetInteractionActor__pf(/*out*/ AActor*& bpp__InteractionActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Update Process", Tooltip="Set target actor reference.", OverrideNativeName="SetTargetActor"))
	virtual void bpf__SetTargetActor__pf(AActor* bpp__TargetActor__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Interaction Process|Other", Tooltip="Returns target actor reference.", OverrideNativeName="GetTargetActor"))
	virtual void bpf__GetTargetActor__pf(/*out*/ AActor*& bpp__TargetActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Interaction", Tooltip="Try to start interaction between character and target actor.", OverrideNativeName="TryStartInteractonWithActor"))
	virtual void bpf__TryStartInteractonWithActor__pf(AActor* bpp__TargetActor__pf, uint8 bpp__InteractionType__pf, bool bpp__RotateToTarget__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Interaction", Tooltip="Play anim montage by interaction type.", OverrideNativeName="PlayInteractionMontage"))
	virtual void bpf__PlayInteractionMontage__pf(uint8 bpp__InteractionType__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Interaction", Tooltip="Start rotate character to target rotation.", OverrideNativeName="StartRotateCharacter"))
	virtual void bpf__StartRotateCharacter__pf(FRotator bpp__TargetRotation__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Interaction", Tooltip="Update character rotation.", OverrideNativeName="UpdateCharacterRotation"))
	virtual void bpf__UpdateCharacterRotation__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Interaction", Tooltip="Complete interaction notify.", OverrideNativeName="CompleteInteractionNotify"))
	virtual void bpf__CompleteInteractionNotify__pf(FName bpp__NotifyName__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Interaction", Tooltip="Change interaction stance.", OverrideNativeName="ChangeInteractionStance"))
	virtual void bpf__ChangeInteractionStance__pf(E__E_Mei_InteractionType__pf bpp__NewInteractionStance__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Init Component", Tooltip="Init component and check references. Repeat again if references are not valid.", OverrideNativeName="CheckInitReferences"))
	virtual void bpf__CheckInitReferences__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Inputs", Tooltip="Change displayed floor value and hide actors if their floor number is greater than displayed floor.", OverrideNativeName="ChangeDisplayedFloor"))
	virtual void bpf__ChangeDisplayedFloor__pf(E__E_Mei_ChangeVariableOperation__pf bpp__Operation__pf, int32 bpp__Value__pf, bool bpp__UpdateVisibility__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Inputs", Tooltip="Change top down view mode for interaction component.", OverrideNativeName="ChangeTopDownView"))
	virtual void bpf__ChangeTopDownView__pf(bool bpp__TopDownViewMode__pf, bool bpp__TraceToMouseMode__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Other", Tooltip="Hide floor actors if their floor number is greater than displayed floor number.", OverrideNativeName="UpdateFloorActorsVisibility"))
	virtual void bpf__UpdateFloorActorsVisibility__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Other", Tooltip="Reset floor actors visibility.", OverrideNativeName="ResetFloorActorsVisibility"))
	virtual void bpf__ResetFloorActorsVisibility__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Init Component", Tooltip="Init character references and bind character interaction events.", OverrideNativeName="InitCharacterReferences"))
	virtual void bpf__InitCharacterReferences__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Binds", Tooltip="Executes when character interaction notify is executed.", OverrideNativeName="BindCharacterInteractionNotify"))
	virtual void bpf__BindCharacterInteractionNotify__pf(ACharacter* bpp__Character__pf, AActor* bpp__InteractionActor__pf, FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Binds", Tooltip="Executes when character interaction stance changed.", OverrideNativeName="BindCharacterInteractionStanceChanged"))
	virtual void bpf__BindCharacterInteractionStanceChanged__pf(E__E_Mei_InteractionType__pf bpp__NewInteractionStance__pf, E__E_Mei_InteractionType__pf bpp__PrevInteractionStance__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Widget", Tooltip="Change interaction widget class and create it for player.", OverrideNativeName="ChangeInteractionWidget"))
	virtual void bpf__ChangeInteractionWidget__pf(UClass* bpp__InteractionWidgetClass__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Interaction Process|Other", Tooltip="Returns current interaction stance.", OverrideNativeName="GetInteractionStance"))
	virtual void bpf__GetInteractionStance__pf(/*out*/ E__E_Mei_InteractionType__pf& bpp__InteractionStance__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Other", Tooltip="Print debug information depending on current variables.", OverrideNativeName="PrintDebugInformation"))
	virtual void bpf__PrintDebugInformation__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Interaction Process|Other", Tooltip="Returns debug information.", OverrideNativeName="GetDebugInformation"))
	virtual void bpf__GetDebugInformation__pf(/*out*/ FText& bpp__DebugInformation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Inputs", Tooltip="Change debug mode.", OverrideNativeName="ChangeDebugMode"))
	virtual void bpf__ChangeDebugMode__pf(bool bpp__DebugMode__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Interaction Process|Update Process", Tooltip="Update tick process for local player.", OverrideNativeName="UpdateProcess"))
	virtual void bpf__UpdateProcess__pf(/*out*/ bool& bpp__Success__pf);
public:
};
