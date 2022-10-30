#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "E_MovementState__pf2727903198.h"
#include "E_MovementAction__pf2727903198.h"
#include "E_RotationMode__pf2727903198.h"
#include "E_Gait__pf2727903198.h"
#include "E_Stance__pf2727903198.h"
#include "E_ViewMode__pf2727903198.h"
#include "E_OverlayState__pf2727903198.h"
#include "ALS_MovementState__pf116373702.h"
#include "ALS_MovementAction__pf116373702.h"
#include "ALS_RotationMode__pf116373702.h"
#include "ALS_Gait__pf116373702.h"
#include "ALS_ViewMode__pf116373702.h"
#include "ALS_OverlayState__pf116373702.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "INT_Character__pf1977901695.h"
class UAIPerceptionStimuliSourceComponent;
class AActor;
#include "BP_Character__pf2151050371.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/BaseClasses/BP_Character.BP_Character_C", OverrideNativeName="BP_Character_C"))
class ABP_Character_C__pf2151050371 : public ACharacter, public IINT_Character_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AIPerceptionStimuliSource"))
	UAIPerceptionStimuliSourceComponent* bpv__AIPerceptionStimuliSource__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="TP Sprint Speed", Category="Movement", MultiLine="true", OverrideNativeName="TP_SprintSpeed"))
	float bpv__TP_SprintSpeed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="TP Max Walk Speed", Category="Movement", MultiLine="true", OverrideNativeName="TP_MaxWalkSpeed"))
	float bpv__TP_MaxWalkSpeed__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="TP Jump ZVelocity", Category="Movement", MultiLine="true", OverrideNativeName="TP_JumpZVelocity"))
	float bpv__TP_JumpZVelocity__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Sprinting", Category="Movement", MultiLine="true", OverrideNativeName="isSprinting"))
	bool bpv__isSprinting__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Crouching", Category="Movement", MultiLine="true", OverrideNativeName="isCrouching"))
	bool bpv__isCrouching__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Type", Category="Default", MultiLine="true", OverrideNativeName="TargetType"))
	TArray<TEnumAsByte<EObjectTypeQuery> > bpv__TargetType__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attacking Actor", Category="Default", MultiLine="true", OverrideNativeName="AttackingActor"))
	AActor* bpv__AttackingActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Movement State", Category="State Values", MultiLine="true", OverrideNativeName="MovementState"))
	E__E_MovementState__pf bpv__MovementState__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Movement Action", Category="State Values", MultiLine="true", OverrideNativeName="MovementAction"))
	E__E_MovementAction__pf bpv__MovementAction__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Prev Movement State", Category="State Values", MultiLine="true", OverrideNativeName="PrevMovementState"))
	E__E_MovementState__pf bpv__PrevMovementState__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation Mode", Category="State Values", MultiLine="true", OverrideNativeName="RotationMode"))
	E__E_RotationMode__pf bpv__RotationMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Gait", Category="State Values", MultiLine="true", OverrideNativeName="Gait"))
	E__E_Gait__pf bpv__Gait__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Stance", Category="State Values", MultiLine="true", OverrideNativeName="Stance"))
	E__E_Stance__pf bpv__Stance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="View Mode", Category="State Values", MultiLine="true", OverrideNativeName="ViewMode"))
	E__E_ViewMode__pf bpv__ViewMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Overlay State", Category="State Values", MultiLine="true", OverrideNativeName="OverlayState"))
	E__E_OverlayState__pf bpv__OverlayState__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Player"))
	AActor* b0l__K2Node_CustomEvent_Player__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewMovementState"))
	E__ALS_MovementState__pf b0l__K2Node_Event_NewMovementState__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewMovementAction"))
	E__ALS_MovementAction__pf b0l__K2Node_Event_NewMovementAction__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewRotationMode"))
	E__ALS_RotationMode__pf b0l__K2Node_Event_NewRotationMode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewGait"))
	E__ALS_Gait__pf b0l__K2Node_Event_NewGait__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewViewMode"))
	E__ALS_ViewMode__pf b0l__K2Node_Event_NewViewMode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewOverlayState"))
	E__ALS_OverlayState__pf b0l__K2Node_Event_NewOverlayState__pf;
	ABP_Character_C__pf2151050371(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Character__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Death"))
	virtual void bpf__Death__pf(AActor* bpp__Player__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Character States", CppFromBpEvent, OverrideNativeName="BPI_Set_OverlayState"))
	virtual void bpf__BPI_Set_OverlayState__pf(E__ALS_OverlayState__pf bpp__NewOverlayState__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Character States", CppFromBpEvent, OverrideNativeName="BPI_Set_ViewMode"))
	virtual void bpf__BPI_Set_ViewMode__pf(E__ALS_ViewMode__pf bpp__NewViewMode__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Character States", CppFromBpEvent, OverrideNativeName="BPI_Set_Gait"))
	virtual void bpf__BPI_Set_Gait__pf(E__ALS_Gait__pf bpp__NewGait__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Character States", CppFromBpEvent, OverrideNativeName="BPI_Set_RotationMode"))
	virtual void bpf__BPI_Set_RotationMode__pf(E__ALS_RotationMode__pf bpp__NewRotationMode__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Character States", CppFromBpEvent, OverrideNativeName="BPI_Set_MovementAction"))
	virtual void bpf__BPI_Set_MovementAction__pf(E__ALS_MovementAction__pf bpp__NewMovementAction__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Character States", CppFromBpEvent, OverrideNativeName="BPI_Set_MovementState"))
	virtual void bpf__BPI_Set_MovementState__pf(E__ALS_MovementState__pf bpp__NewMovementState__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Character Information", CppFromBpEvent, OverrideNativeName="BPI_Get_EssentialValues"))
	virtual void bpf__BPI_Get_EssentialValues__pf(/*out*/ FVector& bpp__Velocity__pf, /*out*/ FVector& bpp__Acceleration__pf, /*out*/ FVector& bpp__MovementInput__pf, /*out*/ bool& bpp__IsMoving__pf, /*out*/ bool& bpp__HasMovementInput__pf, /*out*/ float& bpp__Speed__pf, /*out*/ float& bpp__MovementInputAmount__pf, /*out*/ FRotator& bpp__AimingRotation__pf, /*out*/ float& bpp__AimYawRate__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Character Information", CallInEditor="true", CppFromBpEvent, OverrideNativeName="BPI_Get_CurrentStates"))
	virtual void bpf__BPI_Get_CurrentStates__pf(/*out*/ TEnumAsByte<EMovementMode>& bpp__PawnMovementMode__pf, /*out*/ E__E_MovementState__pf& bpp__MovementState__pf, /*out*/ E__E_MovementState__pf& bpp__PrevMovementState__pf, /*out*/ E__E_MovementAction__pf& bpp__MovementAction__pf, /*out*/ E__E_RotationMode__pf& bpp__RotationMode__pf, /*out*/ E__E_Gait__pf& bpp__ActualGait__pf, /*out*/ E__E_Stance__pf& bpp__ActualStance__pf, /*out*/ E__E_ViewMode__pf& bpp__ViewMode__pf, /*out*/ E__E_OverlayState__pf& bpp__OverlayState__pf);
public:
};
