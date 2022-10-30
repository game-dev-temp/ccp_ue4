#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "BPI_Interaction__pf2939348713.h"
#include "BPI_InteractWithWeapon__pf4204138153.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "BPI_ThirdPersonCharacter__pf2222656877.h"
class USceneCaptureComponent2D;
class USpringArmComponent;
class UAIPerceptionStimuliSourceComponent;
class UStaticMeshComponent;
class UArrowComponent;
class UCameraComponent;
class UTimelineComponent;
class UWidget_PlayerUI_C__pf2670873798;
class AActor;
class UUserWidget;
class UPhysicalMaterial;
class UPrimitiveComponent;
class UDamageType;
class AController;
#include "ThirdPersonCharacter__pf2222656877.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ThirdPersonBP/Blueprints/ThirdPersonCharacter.ThirdPersonCharacter_C", OverrideNativeName="ThirdPersonCharacter_C"))
class AThirdPersonCharacter_C__pf2222656877 : public ACharacter, public IBPI_ThirdPersonCharacter_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MinimapCapture"))
	USceneCaptureComponent2D* bpv__MinimapCapture__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpringArm"))
	USpringArmComponent* bpv__SpringArm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AIPerceptionStimuliSource"))
	UAIPerceptionStimuliSourceComponent* bpv__AIPerceptionStimuliSource__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="S_Tact"))
	UStaticMeshComponent* bpv__S_Tact__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpecialAttack"))
	UArrowComponent* bpv__SpecialAttack__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="MyCharacter", OverrideNativeName="FollowCamera"))
	UCameraComponent* bpv__FollowCamera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="MyCharacter", OverrideNativeName="CameraBoom"))
	USpringArmComponent* bpv__CameraBoom__pf;
	UPROPERTY(meta=(OverrideNativeName="T_Crouching_Crounch_Alpha_2F1B7E36405C949BB4D4DBB391FA674A"))
	float bpv__T_Crouching_Crounch_Alpha_2F1B7E36405C949BB4D4DBB391FA674A__pf;
	UPROPERTY(meta=(OverrideNativeName="T_Crouching__Direction_2F1B7E36405C949BB4D4DBB391FA674A"))
	TEnumAsByte<ETimelineDirection::Type> bpv__T_Crouching__Direction_2F1B7E36405C949BB4D4DBB391FA674A__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="ThirdPersonCharacter", OverrideNativeName="T_Crouching"))
	UTimelineComponent* bpv__T_Crouching__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Turn Rate", Category="Default", OverrideNativeName="BaseTurnRate"))
	float bpv__BaseTurnRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Look Up Rate", Category="Default", OverrideNativeName="BaseLookUpRate"))
	float bpv__BaseLookUpRate__pf;
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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="TP Max Crouch Speed", Category="Default", MultiLine="true", OverrideNativeName="TP_MaxCrouchSpeed"))
	float bpv__TP_MaxCrouchSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Health", Category="Default", MultiLine="true", OverrideNativeName="Health"))
	float bpv__Health__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="UMG Healthbar", Category="Default", MultiLine="true", OverrideNativeName="UMG_Healthbar"))
	UWidget_PlayerUI_C__pf2670873798* bpv__UMG_Healthbar__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Locked", Category="Default", MultiLine="true", OverrideNativeName="TargetLocked"))
	bool bpv__TargetLocked__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Equipped Weapon", Category="Default", MultiLine="true", OverrideNativeName="EquippedWeapon"))
	AActor* bpv__EquippedWeapon__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Weapon Drawn?", Category="Default", MultiLine="true", OverrideNativeName="WeaponDrawn?"))
	bool bpv__WeaponDrawnx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Target Type", Category="Default", MultiLine="true", OverrideNativeName="TargetType"))
	TArray<TEnumAsByte<EObjectTypeQuery> > bpv__TargetType__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ready to Attack?", Category="Default", MultiLine="true", OverrideNativeName="ReadyToAttack?"))
	bool bpv__ReadyToAttackx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attacking?", Category="Default", MultiLine="true", OverrideNativeName="Attacking?"))
	bool bpv__Attackingx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attack Counter", Category="Default", MultiLine="true", OverrideNativeName="AttackCounter"))
	int32 bpv__AttackCounter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Save Attack", Category="Default", MultiLine="true", OverrideNativeName="SaveAttack"))
	bool bpv__SaveAttack__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Locked on Target", Category="Default", MultiLine="true", OverrideNativeName="LockedOnTarget"))
	AActor* bpv__LockedOnTarget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Blocking", Category="Default", MultiLine="true", OverrideNativeName="Blocking"))
	bool bpv__Blocking__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attacking Actor", Category="Default", MultiLine="true", OverrideNativeName="AttackingActor"))
	AActor* bpv__AttackingActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Inventory WG", Category="Default", MultiLine="true", OverrideNativeName="InventoryWG"))
	UUserWidget* bpv__InventoryWG__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b0l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	TArray<AActor*> b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_6"))
	FKey b0l__K2Node_InputKeyEvent_Key_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_5"))
	FKey b0l__K2Node_InputKeyEvent_Key_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_4"))
	FKey b0l__K2Node_InputKeyEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_3"))
	FKey b0l__K2Node_InputKeyEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable_1"))
	TArray<AActor*> b0l__Temp_object_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_2"))
	FKey b0l__K2Node_InputKeyEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_1"))
	FKey b0l__K2Node_InputKeyEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_1"))
	FKey b0l__Temp_struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_6"))
	FKey b0l__K2Node_InputActionEvent_Key_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_7"))
	FKey b0l__K2Node_InputActionEvent_Key_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_5"))
	float b0l__K2Node_InputAxisEvent_AxisValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_4"))
	float b0l__K2Node_InputAxisEvent_AxisValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_3"))
	float b0l__K2Node_InputAxisEvent_AxisValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_2"))
	float b0l__K2Node_InputAxisEvent_AxisValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b0l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_1"))
	float b0l__K2Node_InputAxisEvent_AxisValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_2"))
	FVector b0l__Temp_struct_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<ETouchIndex::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_FingerIndex"))
	TEnumAsByte<ETouchIndex::Type> b0l__K2Node_InputTouchEvent_FingerIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_Location"))
	FVector b0l__K2Node_InputTouchEvent_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable_1"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_FingerIndex_1"))
	TEnumAsByte<ETouchIndex::Type> b0l__K2Node_InputTouchEvent_FingerIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_Location_1"))
	FVector b0l__K2Node_InputTouchEvent_Location_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_3"))
	FKey b0l__Temp_struct_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetOverlappingActors_OverlappingActors"))
	TArray<AActor*> b0l__CallFunc_GetOverlappingActors_OverlappingActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SphereTraceSingle_OutHit"))
	FHitResult b0l__CallFunc_SphereTraceSingle_OutHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance"))
	float b0l__CallFunc_BreakHitResult_Distance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_8"))
	FKey b0l__K2Node_InputActionEvent_Key_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Interaction"))
	TScriptInterface<IBPI_Interaction_C> b0l__K2Node_DynamicCast_AsBPI_Interaction__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_4"))
	FKey b0l__Temp_struct_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable_1"))
	bool b0l__Temp_bool_IsClosed_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_9"))
	FKey b0l__K2Node_InputActionEvent_Key_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_PlayAnimMontage_ReturnValue_1"))
	float b0l__CallFunc_PlayAnimMontage_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b0l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_PlayAnimMontage_ReturnValue_2"))
	float b0l__CallFunc_PlayAnimMontage_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_4"))
	FKey b0l__K2Node_InputActionEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SphereTraceSingleForObjects_OutHit"))
	FHitResult b0l__CallFunc_SphereTraceSingleForObjects_OutHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_1"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_1"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_1"))
	float b0l__CallFunc_BreakHitResult_Time_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_1"))
	float b0l__CallFunc_BreakHitResult_Distance_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_1"))
	FVector b0l__CallFunc_BreakHitResult_Location_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_1"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_1"))
	FVector b0l__CallFunc_BreakHitResult_Normal_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_1"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_1"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_1"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_1"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_1"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_1"))
	int32 b0l__CallFunc_BreakHitResult_HitItem_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_1"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_1"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_1"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_5"))
	FKey b0l__K2Node_InputActionEvent_Key_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b0l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b0l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b0l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b0l__K2Node_Event_DamageCauser__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Interact_with_Weapon"))
	TScriptInterface<IBPI_InteractWithWeapon_C> b0l__K2Node_DynamicCast_AsBPI_Interact_with_Weapon__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll_1"))
	float b0l__CallFunc_BreakRotator_Roll_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch_1"))
	float b0l__CallFunc_BreakRotator_Pitch_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw_1"))
	float b0l__CallFunc_BreakRotator_Yaw_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll_2"))
	float b0l__CallFunc_BreakRotator_Roll_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch_2"))
	float b0l__CallFunc_BreakRotator_Pitch_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw_2"))
	float b0l__CallFunc_BreakRotator_Yaw_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Block_Angle_Check_FacingAI_"))
	bool b0l__CallFunc_Block_Angle_Check_FacingAI___pf;
	AThirdPersonCharacter_C__pf2222656877(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_11(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_ThirdPersonCharacter_12"))
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_13(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_ThirdPersonCharacter_14"))
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_21(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_22(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_23(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_24(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_25(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_26(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_27(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_28(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_29(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_30(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_31(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ThirdPersonCharacter__pf_32(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="GetHIt"))
	virtual void bpf__GetHIt__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", Comment="/** Event when this actor takes ANY damage */", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	virtual void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AttackPlayer"))
	virtual void bpf__AttackPlayer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AttackCombo"))
	virtual void bpf__AttackCombo__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SheatheTact"))
	virtual void bpf__SheatheTact__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DrawTact"))
	virtual void bpf__DrawTact__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StopCrouching"))
	virtual void bpf__StopCrouching__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53"))
	virtual void bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38"))
	virtual void bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79"))
	virtual void bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Turn_K2Node_InputAxisEvent_47"))
	virtual void bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUp_K2Node_InputAxisEvent_40"))
	virtual void bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_40__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_I_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_I_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_G_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_G_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_G_K2Node_InputKeyEvent_2"))
	virtual void bpf__InpActEvt_G_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3"))
	virtual void bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4"))
	virtual void bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_E_K2Node_InputKeyEvent_5"))
	virtual void bpf__InpActEvt_E_K2Node_InputKeyEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Tab_K2Node_InputKeyEvent_6"))
	virtual void bpf__InpActEvt_Tab_K2Node_InputKeyEvent_6__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Interact_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_Interact_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Crouch_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_Crouch_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Crouch_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_Crouch_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Sprint_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_Sprint_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Sprint_K2Node_InputActionEvent_4"))
	virtual void bpf__InpActEvt_Sprint_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Backflip_K2Node_InputActionEvent_5"))
	virtual void bpf__InpActEvt_Backflip_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_SpecialAttack_K2Node_InputActionEvent_6"))
	virtual void bpf__InpActEvt_SpecialAttack_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ResetVR_K2Node_InputActionEvent_7"))
	virtual void bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpTchEvt_Pressed"))
	virtual void bpf__InpTchEvt_Pressed__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf);
	UFUNCTION(meta=(OverrideNativeName="InpTchEvt_Released"))
	virtual void bpf__InpTchEvt_Released__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_8"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_9"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="T_Crouching__UpdateFunc"))
	virtual void bpf__T_Crouching__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="T_Crouching__FinishedFunc"))
	virtual void bpf__T_Crouching__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Block Angle Check"))
	virtual void bpf__BlockxAnglexCheck__pfTT(/*out*/ bool& bpp__FacingAIx__pfzy);
public:
};
