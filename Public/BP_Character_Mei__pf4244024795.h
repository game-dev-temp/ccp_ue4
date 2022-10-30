#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "E_PlayerAttacks__pf4244024795.h"
#include "S_EquippedItems__pf4244024795.h"
#include "S_PlayerStats__pf4244024795.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/AnimGraphRuntime/Public/PlayMontageCallbackProxy.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "INT_MeiAnimBP__pf1977901695.h"
#include "INT_Controller_Mei__pf1977901695.h"
#include "INT_Pickups__pf1219282945.h"
#include "E_PickupTypes__pf4194264409.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "BP_Character__pf2151050371.h"
#include "INT_Character_Mei__pf1977901695.h"
class USplineComponent;
class UArrowComponent;
class UCameraComponent;
class USpringArmComponent;
class UStaticMeshComponent;
class UBP_TargetingSystem_C__pf4244024795;
class USceneCaptureComponent2D;
class ABP_BasePickup_C__pf4194264409;
class UAnimMontage;
class AActor;
class UNiagaraComponent;
class UAnimInstance;
class ABP_Bow_C__pf905050247;
class UW_Crosshair_C__pf2670873798;
class ABP_Arrow_C__pf905050247;
class UABP_Mei_C__pf4244024795;
class ABP_PredictionEnd_C__pf939916524;
class USplineMeshComponent;
class USkeletalMeshComponent;
class UPlayMontageCallbackProxy;
class UDamageType;
class AController;
class USoundBase;
class UNiagaraSystem;
class USceneComponent;
class UPhysicalMaterial;
class UPrimitiveComponent;
#include "BP_Character_Mei__pf4244024795.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/Character/BP_Character_Mei.BP_Character_Mei_C", OverrideNativeName="BP_Character_Mei_C"))
class ABP_Character_Mei_C__pf4244024795 : public ABP_Character_C__pf2151050371, public IINT_Character_Mei_C
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnMontagePlayDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OnMontagePlayDelegate__DelegateSignature__SC_0, FName , bpp__NotifyName__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Spline"))
	USplineComponent* bpv__Spline__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="RightArrow"))
	UArrowComponent* bpv__RightArrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TopRigthtArrow"))
	UArrowComponent* bpv__TopRigthtArrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TopLeftArrow"))
	UArrowComponent* bpv__TopLeftArrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="LeftArrow"))
	UArrowComponent* bpv__LeftArrow__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpringArm"))
	USpringArmComponent* bpv__SpringArm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Umbrella"))
	UStaticMeshComponent* bpv__Umbrella__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BP_TargetingSystem"))
	UBP_TargetingSystem_C__pf4244024795* bpv__BP_TargetingSystem__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MinimapCapture"))
	USceneCaptureComponent2D* bpv__MinimapCapture__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpringArm2"))
	USpringArmComponent* bpv__SpringArm2__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Sprinting", meta=(DisplayName="Sprinting", Category="Default", MultiLine="true", OverrideNativeName="Sprinting"))
	bool bpv__Sprinting__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Rolling", Category="Default", MultiLine="true", OverrideNativeName="Rolling"))
	bool bpv__Rolling__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attacks", Category="Attacking", MultiLine="true", OverrideNativeName="Attacks"))
	E__E_PlayerAttacks__pf bpv__Attacks__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Currently Attacking", Category="Attacking", MultiLine="true", OverrideNativeName="CurrentlyAttacking"))
	bool bpv__CurrentlyAttacking__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Jog Speed", Category="Default", MultiLine="true", OverrideNativeName="JogSpeed"))
	float bpv__JogSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sprint Speed", Category="Default", MultiLine="true", OverrideNativeName="SprintSpeed"))
	float bpv__SprintSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Overlapped Pickup", Category="Default", MultiLine="true", OverrideNativeName="OverlappedPickup"))
	ABP_BasePickup_C__pf4194264409* bpv__OverlappedPickup__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_EquippedWeapon", meta=(DisplayName="Equipped Weapon", Category="Inventory", MultiLine="true", OverrideNativeName="EquippedWeapon"))
	ABP_BasePickup_C__pf4194264409* bpv__EquippedWeapon__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Equipped Items", Category="Inventory", MultiLine="true", OverrideNativeName="EquippedItems"))
	FS_EquippedItems__pf4244024795 bpv__EquippedItems__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_EquippedShield", meta=(DisplayName="Equipped Shield", Category="Inventory", MultiLine="true", OverrideNativeName="EquippedShield"))
	ABP_BasePickup_C__pf4194264409* bpv__EquippedShield__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_EquippedLight", meta=(DisplayName="Equipped Light", Category="Inventory", MultiLine="true", OverrideNativeName="EquippedLight"))
	ABP_BasePickup_C__pf4194264409* bpv__EquippedLight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Player Stats", Category="Default", MultiLine="true", OverrideNativeName="PlayerStats"))
	FS_PlayerStats__pf4244024795 bpv__PlayerStats__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_PlayerDead", meta=(DisplayName="Player Dead", Category="Default", MultiLine="true", OverrideNativeName="PlayerDead"))
	bool bpv__PlayerDead__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Can Move", Category="Default", MultiLine="true", OverrideNativeName="CanMove"))
	bool bpv__CanMove__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Charging", Category="Attacking", MultiLine="true", OverrideNativeName="Charging"))
	bool bpv__Charging__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Charge Damage", Category="Attacking", MultiLine="true", OverrideNativeName="ChargeDamage"))
	float bpv__ChargeDamage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Charge Count", Category="Attacking", MultiLine="true", OverrideNativeName="ChargeCount"))
	int32 bpv__ChargeCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Light Attack Montage", Category="Attacking", MultiLine="true", OverrideNativeName="LightAttackMontage"))
	UAnimMontage* bpv__LightAttackMontage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Heavy Attack Montage", Category="Attacking", MultiLine="true", OverrideNativeName="HeavyAttackMontage"))
	UAnimMontage* bpv__HeavyAttackMontage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_FullBody", meta=(DisplayName="Full Body", Category="Default", MultiLine="true", OverrideNativeName="FullBody"))
	bool bpv__FullBody__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, ReplicatedUsing="OnRep_Blocking", meta=(DisplayName="Blocking", Category="Default", MultiLine="true", OverrideNativeName="Blocking"))
	bool bpv__Blocking__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Drain Stamina Handle", Category="Default", MultiLine="true", OverrideNativeName="DrainStaminaHandle"))
	FTimerHandle bpv__DrainStaminaHandle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Recover Stamina Handle", Category="Default", MultiLine="true", OverrideNativeName="RecoverStaminaHandle"))
	FTimerHandle bpv__RecoverStaminaHandle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Targeting", Category="Default", MultiLine="true", OverrideNativeName="IsTargeting"))
	bool bpv__IsTargeting__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Locked On", Category="Default", MultiLine="true", OverrideNativeName="LockedOn"))
	bool bpv__LockedOn__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Target", Category="Default", MultiLine="true", OverrideNativeName="Target"))
	AActor* bpv__Target__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Gliding", Category="Default", MultiLine="true", OverrideNativeName="Gliding"))
	bool bpv__Gliding__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Charge Attack Montage", Category="Attacking", MultiLine="true", OverrideNativeName="ChargeAttackMontage"))
	UAnimMontage* bpv__ChargeAttackMontage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Location", Category="self_hanging", MultiLine="true", OverrideNativeName="Location"))
	FVector bpv__Location__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Impact Normal", Category="self_hanging", MultiLine="true", OverrideNativeName="Impact Normal"))
	FVector bpv__ImpactxNormal__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Height Location", Category="self_hanging", MultiLine="true", OverrideNativeName="HeightLocation"))
	FVector bpv__HeightLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Charginparticle", Category="Attacking", MultiLine="true", OverrideNativeName="charginparticle"))
	UNiagaraComponent* bpv__charginparticle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Hanging", Category="self_hanging", MultiLine="true", OverrideNativeName="IsHanging"))
	bool bpv__IsHanging__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Anim Instance", Category="Default", MultiLine="true", OverrideNativeName="PlayerAnimInstance"))
	UAnimInstance* bpv__PlayerAnimInstance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Axis Value", Category="Default", MultiLine="true", OverrideNativeName="RightAxis Value"))
	float bpv__RightAxisxValue__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Jump Height", Category="Default", MultiLine="true", OverrideNativeName="JumpHeight"))
	float bpv__JumpHeight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Height", Category="Default", MultiLine="true", OverrideNativeName="Height"))
	float bpv__Height__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Self Damage", Category="Default", MultiLine="true", OverrideNativeName="SelfDamage"))
	float bpv__SelfDamage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Bow", Category="self_bow", MultiLine="true", OverrideNativeName="Bow"))
	ABP_Bow_C__pf905050247* bpv__Bow__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Crosshair", Category="self_bow", MultiLine="true", OverrideNativeName="Crosshair"))
	UW_Crosshair_C__pf2670873798* bpv__Crosshair__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Bow Mode", Category="self_bow", MultiLine="true", OverrideNativeName="IsBowMode"))
	bool bpv__IsBowMode__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Arrow", Category="self_bow", MultiLine="true", OverrideNativeName="Arrow"))
	ABP_Arrow_C__pf905050247* bpv__Arrow__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is in Collision", Category="self_throw", MultiLine="true", tooltip="self 投げるもの", OverrideNativeName="IsInCollision"))
	bool bpv__IsInCollision__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hit Actor", Category="self_throw", MultiLine="true", tooltip="self ものをなげる", OverrideNativeName="Hit Actor"))
	AActor* bpv__HitxActor__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Holding", Category="self_throw", MultiLine="true", tooltip="self ものをなげる", OverrideNativeName="IsHolding"))
	bool bpv__IsHolding__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Anim Ref", Category="Default", MultiLine="true", OverrideNativeName="AnimRef"))
	UABP_Mei_C__pf4244024795* bpv__AnimRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Predection Scale", Category="self_throw", MultiLine="true", OverrideNativeName="PredectionScale"))
	float bpv__PredectionScale__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Prediction End", Category="self_throw", MultiLine="true", OverrideNativeName="PredictionEnd"))
	ABP_PredictionEnd_C__pf939916524* bpv__PredictionEnd__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Prediction Path Meshes", Category="self_throw", MultiLine="true", OverrideNativeName="PredictionPathMeshes"))
	TArray<USplineMeshComponent*> bpv__PredictionPathMeshes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Velocity", Category="self_throw", MultiLine="true", OverrideNativeName="Velocity"))
	FVector bpv__Velocity__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_26"))
	FName b1l__K2Node_CustomEvent_NotifyName_26__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_25"))
	FName b1l__K2Node_CustomEvent_NotifyName_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b1l__Temp_name_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_5"))
	FKey b1l__K2Node_InputActionEvent_Key_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_4"))
	FKey b1l__K2Node_InputActionEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_3"))
	FKey b1l__K2Node_InputActionEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b1l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_24"))
	FName b1l__K2Node_CustomEvent_NotifyName_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_23"))
	FName b1l__K2Node_CustomEvent_NotifyName_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_22"))
	FName b1l__K2Node_CustomEvent_NotifyName_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_21"))
	FName b1l__K2Node_CustomEvent_NotifyName_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_20"))
	FName b1l__K2Node_CustomEvent_NotifyName_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_5"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable_1"))
	FName b1l__Temp_name_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_2"))
	FKey b1l__K2Node_InputActionEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_1"))
	FKey b1l__K2Node_InputActionEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b1l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_19"))
	FName b1l__K2Node_CustomEvent_NotifyName_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_6"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_18"))
	FName b1l__K2Node_CustomEvent_NotifyName_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_7"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_17"))
	FName b1l__K2Node_CustomEvent_NotifyName_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_8"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_16"))
	FName b1l__K2Node_CustomEvent_NotifyName_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_9"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_15"))
	FName b1l__K2Node_CustomEvent_NotifyName_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_10"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable_2"))
	FName b1l__Temp_name_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EMoveComponentAction::Type> b1l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_14"))
	FName b1l__K2Node_CustomEvent_NotifyName_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_11"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_13"))
	FName b1l__K2Node_CustomEvent_NotifyName_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_12"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_12"))
	FName b1l__K2Node_CustomEvent_NotifyName_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_13"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_11"))
	FName b1l__K2Node_CustomEvent_NotifyName_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_14"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_10"))
	FName b1l__K2Node_CustomEvent_NotifyName_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_15"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_15__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable_3"))
	FName b1l__Temp_name_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_6"))
	FKey b1l__K2Node_InputActionEvent_Key_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_1"))
	FKey b1l__Temp_struct_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_1"))
	TEnumAsByte<EMoveComponentAction::Type> b1l__Temp_byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_7"))
	FKey b1l__K2Node_InputActionEvent_Key_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_2"))
	TEnumAsByte<EMoveComponentAction::Type> b1l__Temp_byte_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_5"))
	FKey b1l__K2Node_InputKeyEvent_Key_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_4"))
	FKey b1l__K2Node_InputKeyEvent_Key_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_3"))
	FKey b1l__K2Node_InputKeyEvent_Key_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_9"))
	FName b1l__K2Node_CustomEvent_NotifyName_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_16"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_16__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_8"))
	FName b1l__K2Node_CustomEvent_NotifyName_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_17"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_17__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_7"))
	FName b1l__K2Node_CustomEvent_NotifyName_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_18"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_18__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_6"))
	FName b1l__K2Node_CustomEvent_NotifyName_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_19"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_19__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_5"))
	FName b1l__K2Node_CustomEvent_NotifyName_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_20"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_20__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable_4"))
	FName b1l__Temp_name_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_21"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_21__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_4"))
	FName b1l__K2Node_CustomEvent_NotifyName_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_3"))
	FName b1l__K2Node_CustomEvent_NotifyName_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_22"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_22__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_2"))
	FName b1l__K2Node_CustomEvent_NotifyName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_23"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_23__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_1"))
	FName b1l__K2Node_CustomEvent_NotifyName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_24"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_24__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName"))
	FName b1l__K2Node_CustomEvent_NotifyName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_25"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_25__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable_5"))
	FName b1l__Temp_name_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_2"))
	FKey b1l__K2Node_InputKeyEvent_Key_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	TArray<AActor*> b1l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key_1"))
	FKey b1l__K2Node_InputKeyEvent_Key_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b1l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_2"))
	FKey b1l__Temp_struct_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_8"))
	FKey b1l__K2Node_InputActionEvent_Key_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b1l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b1l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b1l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_5"))
	float b1l__K2Node_InputAxisEvent_AxisValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_4"))
	float b1l__K2Node_InputAxisEvent_AxisValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b1l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b1l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b1l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_3"))
	float b1l__K2Node_InputAxisEvent_AxisValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_2"))
	float b1l__K2Node_InputAxisEvent_AxisValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable_6"))
	FName b1l__Temp_name_Variable_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_State_1"))
	bool b1l__K2Node_CustomEvent_State_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Rolling"))
	bool b1l__K2Node_CustomEvent_Rolling__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Montage_1"))
	UAnimMontage* b1l__K2Node_CustomEvent_Montage_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Mesh"))
	USkeletalMeshComponent* b1l__K2Node_CustomEvent_Mesh__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Stete"))
	bool b1l__K2Node_CustomEvent_Stete__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_30"))
	FName b1l__K2Node_CustomEvent_NotifyName_30__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue"))
	UPlayMontageCallbackProxy* b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_5"))
	bool b1l__CallFunc_IsValid_ReturnValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_26"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_26__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Mei_Anim_BP"))
	TScriptInterface<IINT_MeiAnimBP_C> b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Mei_Anim_BP_1"))
	TScriptInterface<IINT_MeiAnimBP_C> b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Attacks"))
	E__E_PlayerAttacks__pf b1l__K2Node_CustomEvent_Attacks__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_InSkeletalMeshComponent_2"))
	USkeletalMeshComponent* b1l__K2Node_CustomEvent_InSkeletalMeshComponent_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MontageToPlay_1"))
	UAnimMontage* b1l__K2Node_CustomEvent_MontageToPlay_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_StartingSection"))
	FName b1l__K2Node_CustomEvent_StartingSection__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1"))
	UPlayMontageCallbackProxy* b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_6"))
	bool b1l__CallFunc_IsValid_ReturnValue_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_31"))
	FName b1l__K2Node_CustomEvent_NotifyName_31__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b1l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PickupActor"))
	ABP_BasePickup_C__pf4194264409* b1l__K2Node_Event_PickupActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Overlapping"))
	bool b1l__K2Node_Event_Overlapping__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Controller_Mei"))
	TScriptInterface<IINT_Controller_Mei_C> b1l__K2Node_DynamicCast_AsINT_Controller_Mei__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_27"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_27__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Controller_Mei_1"))
	TScriptInterface<IINT_Controller_Mei_C> b1l__K2Node_DynamicCast_AsINT_Controller_Mei_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b1l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_32"))
	FName b1l__K2Node_CustomEvent_NotifyName_32__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Pickups"))
	TScriptInterface<IINT_Pickups_C> b1l__K2Node_DynamicCast_AsINT_Pickups__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b1l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetPickupType_PickupType"))
	E__E_PickupTypes__pf b1l__CallFunc_GetPickupType_PickupType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_1"))
	bool b1l__K2Node_SwitchEnum_CmpSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_28"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_28__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b1l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_29"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_29__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_1"))
	TArray<AActor*> b1l__K2Node_MakeArray_Array_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SphereOverlapActors_OutActors"))
	TArray<AActor*> b1l__CallFunc_SphereOverlapActors_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AActor* b1l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b1l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b1l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b1l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b1l__K2Node_Event_DamageCauser__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_f_CheckBlockingDirection_Return"))
	bool b1l__CallFunc_f_CheckBlockingDirection_Return__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Player"))
	AActor* b1l__K2Node_Event_Player__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Controller_Mei_2"))
	TScriptInterface<IINT_Controller_Mei_C> b1l__K2Node_DynamicCast_AsINT_Controller_Mei_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b1l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewController"))
	AController* b1l__K2Node_Event_NewController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateMovement_Return"))
	bool b1l__CallFunc_UpdateMovement_Return__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateMovement_Return_1"))
	bool b1l__CallFunc_UpdateMovement_Return_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_33"))
	FName b1l__K2Node_CustomEvent_NotifyName_33__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Controller_Mei_3"))
	TScriptInterface<IINT_Controller_Mei_C> b1l__K2Node_DynamicCast_AsINT_Controller_Mei_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_6"))
	bool b1l__K2Node_DynamicCast_bSuccess_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue_1"))
	float b1l__K2Node_InputAxisEvent_AxisValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b1l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_2"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b1l__K2Node_MakeArray_Array_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_3"))
	TArray<AActor*> b1l__K2Node_MakeArray_Array_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_27"))
	FName b1l__K2Node_CustomEvent_NotifyName_27__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SphereOverlapActors_OutActors_1"))
	TArray<AActor*> b1l__CallFunc_SphereOverlapActors_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_State"))
	bool b1l__K2Node_CustomEvent_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_AttachPointName"))
	FName b1l__K2Node_CustomEvent_AttachPointName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MontageToPlay"))
	UAnimMontage* b1l__K2Node_CustomEvent_MontageToPlay__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_InSkeletalMeshComponent_1"))
	USkeletalMeshComponent* b1l__K2Node_CustomEvent_InSkeletalMeshComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Location_1"))
	FVector b1l__K2Node_CustomEvent_Location_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Sound_1"))
	USoundBase* b1l__K2Node_CustomEvent_Sound_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SystemTemplate_1"))
	UNiagaraSystem* b1l__K2Node_CustomEvent_SystemTemplate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2"))
	UPlayMontageCallbackProxy* b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_30"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_30__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_7"))
	bool b1l__CallFunc_IsValid_ReturnValue_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b1l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_SoulsXP"))
	int32 b1l__K2Node_Event_SoulsXP__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_SystemTemplate"))
	UNiagaraSystem* b1l__K2Node_CustomEvent_SystemTemplate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_AttachToComponent"))
	USceneComponent* b1l__K2Node_CustomEvent_AttachToComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Lock"))
	bool b1l__K2Node_Event_Lock__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Target"))
	AActor* b1l__K2Node_Event_Target__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_34"))
	FName b1l__K2Node_CustomEvent_NotifyName_34__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PrevMovementMode"))
	TEnumAsByte<EMovementMode> b1l__K2Node_Event_PrevMovementMode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewMovementMode"))
	TEnumAsByte<EMovementMode> b1l__K2Node_Event_NewMovementMode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PrevCustomMode"))
	uint8 b1l__K2Node_Event_PrevCustomMode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewCustomMode"))
	uint8 b1l__K2Node_Event_NewCustomMode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_31"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_31__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable_1"))
	bool b1l__Temp_bool_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_32"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_32__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b1l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b1l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b1l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Sound"))
	USoundBase* b1l__K2Node_CustomEvent_Sound__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Location"))
	FVector b1l__K2Node_CustomEvent_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_InSkeletalMeshComponent"))
	USkeletalMeshComponent* b1l__K2Node_CustomEvent_InSkeletalMeshComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Montage"))
	UAnimMontage* b1l__K2Node_CustomEvent_Montage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3"))
	UPlayMontageCallbackProxy* b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_9"))
	FKey b1l__K2Node_InputActionEvent_Key_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_8"))
	bool b1l__CallFunc_IsValid_ReturnValue_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_4"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b1l__K2Node_MakeArray_Array_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_28"))
	FName b1l__K2Node_CustomEvent_NotifyName_28__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_5"))
	TArray<AActor*> b1l__K2Node_MakeArray_Array_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_2"))
	int32 b1l__Temp_int_Array_Index_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SphereOverlapActors_OutActors_2"))
	TArray<AActor*> b1l__CallFunc_SphereOverlapActors_OutActors_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	AActor* b1l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	AActor* b1l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_1"))
	float b1l__CallFunc_BreakVector_X_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_1"))
	float b1l__CallFunc_BreakVector_Y_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_1"))
	float b1l__CallFunc_BreakVector_Z_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_2"))
	float b1l__CallFunc_BreakVector_X_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_2"))
	float b1l__CallFunc_BreakVector_Y_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_2"))
	float b1l__CallFunc_BreakVector_Z_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SpawnSystemAtLocation_ReturnValue_1"))
	UNiagaraComponent* b1l__CallFunc_SpawnSystemAtLocation_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_33"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_33__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_DetectLedge_Detect"))
	bool b1l__CallFunc_DetectLedge_Detect__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_3"))
	FKey b1l__Temp_struct_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Mei_Anim_BP_2"))
	TScriptInterface<IINT_MeiAnimBP_C> b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_7"))
	bool b1l__K2Node_DynamicCast_bSuccess_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsABP_Mei"))
	UABP_Mei_C__pf4244024795* b1l__K2Node_DynamicCast_AsABP_Mei__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_8"))
	bool b1l__K2Node_DynamicCast_bSuccess_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_3"))
	float b1l__CallFunc_BreakVector_X_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_3"))
	float b1l__CallFunc_BreakVector_Y_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_3"))
	float b1l__CallFunc_BreakVector_Z_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_4"))
	float b1l__CallFunc_BreakVector_X_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_4"))
	float b1l__CallFunc_BreakVector_Y_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_4"))
	float b1l__CallFunc_BreakVector_Z_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_10"))
	FKey b1l__K2Node_InputActionEvent_Key_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Mei_Anim_BP_3"))
	TScriptInterface<IINT_MeiAnimBP_C> b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_9"))
	bool b1l__K2Node_DynamicCast_bSuccess_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_11"))
	FKey b1l__K2Node_InputActionEvent_Key_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Mei_Anim_BP_4"))
	TScriptInterface<IINT_MeiAnimBP_C> b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_10"))
	bool b1l__K2Node_DynamicCast_bSuccess_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Mei_Anim_BP_5"))
	TScriptInterface<IINT_MeiAnimBP_C> b1l__K2Node_DynamicCast_AsINT_Mei_Anim_BP_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_11"))
	bool b1l__K2Node_DynamicCast_bSuccess_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_5"))
	float b1l__CallFunc_BreakVector_X_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_5"))
	float b1l__CallFunc_BreakVector_Y_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_5"))
	float b1l__CallFunc_BreakVector_Z_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Hit"))
	FHitResult b1l__K2Node_Event_Hit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b1l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance"))
	float b1l__CallFunc_BreakHitResult_Distance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b1l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b1l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b1l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_6"))
	float b1l__CallFunc_BreakVector_X_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_6"))
	float b1l__CallFunc_BreakVector_Y_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_6"))
	float b1l__CallFunc_BreakVector_Z_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4"))
	UPlayMontageCallbackProxy* b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTransform_ReturnValue"))
	FTransform b1l__CallFunc_GetTransform_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_9"))
	bool b1l__CallFunc_IsValid_ReturnValue_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_12"))
	FKey b1l__K2Node_InputActionEvent_Key_12__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_13"))
	FKey b1l__K2Node_InputActionEvent_Key_13__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_4"))
	FVector b1l__Temp_struct_Variable_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_3"))
	TEnumAsByte<ETouchIndex::Type> b1l__Temp_byte_Variable_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Location"))
	FVector b1l__CallFunc_BreakTransform_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Rotation"))
	FRotator b1l__CallFunc_BreakTransform_Rotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Scale"))
	FVector b1l__CallFunc_BreakTransform_Scale__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCachedGeometry_ReturnValue"))
	FGeometry b1l__CallFunc_GetCachedGeometry_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocalToViewport_PixelPosition"))
	FVector2D b1l__CallFunc_LocalToViewport_PixelPosition__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LocalToViewport_ViewportPosition"))
	FVector2D b1l__CallFunc_LocalToViewport_ViewportPosition__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_DeprojectScreenToWorld_WorldPosition"))
	FVector b1l__CallFunc_DeprojectScreenToWorld_WorldPosition__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_DeprojectScreenToWorld_WorldDirection"))
	FVector b1l__CallFunc_DeprojectScreenToWorld_WorldDirection__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_FingerIndex"))
	TEnumAsByte<ETouchIndex::Type> b1l__K2Node_InputTouchEvent_FingerIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_Location"))
	FVector b1l__K2Node_InputTouchEvent_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5"))
	UPlayMontageCallbackProxy* b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_10"))
	bool b1l__CallFunc_IsValid_ReturnValue_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6"))
	UPlayMontageCallbackProxy* b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTransform_ReturnValue_1"))
	FTransform b1l__CallFunc_GetTransform_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_11"))
	bool b1l__CallFunc_IsValid_ReturnValue_11__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_29"))
	FName b1l__K2Node_CustomEvent_NotifyName_29__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorTransform_SweepHitResult"))
	FHitResult b1l__CallFunc_K2_SetActorTransform_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_2"))
	int32 b1l__Temp_int_Loop_Counter_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_34"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_34__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_FingerIndex_1"))
	TEnumAsByte<ETouchIndex::Type> b1l__K2Node_InputTouchEvent_FingerIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputTouchEvent_Location_1"))
	FVector b1l__K2Node_InputTouchEvent_Location_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SphereTraceSingle_OutHit"))
	FHitResult b1l__CallFunc_SphereTraceSingle_OutHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit_1"))
	bool b1l__CallFunc_BreakHitResult_bBlockingHit_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap_1"))
	bool b1l__CallFunc_BreakHitResult_bInitialOverlap_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time_1"))
	float b1l__CallFunc_BreakHitResult_Time_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance_1"))
	float b1l__CallFunc_BreakHitResult_Distance_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location_1"))
	FVector b1l__CallFunc_BreakHitResult_Location_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint_1"))
	FVector b1l__CallFunc_BreakHitResult_ImpactPoint_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal_1"))
	FVector b1l__CallFunc_BreakHitResult_Normal_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal_1"))
	FVector b1l__CallFunc_BreakHitResult_ImpactNormal_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat_1"))
	UPhysicalMaterial* b1l__CallFunc_BreakHitResult_PhysMat_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor_1"))
	AActor* b1l__CallFunc_BreakHitResult_HitActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent_1"))
	UPrimitiveComponent* b1l__CallFunc_BreakHitResult_HitComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName_1"))
	FName b1l__CallFunc_BreakHitResult_HitBoneName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem_1"))
	int32 b1l__CallFunc_BreakHitResult_HitItem_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex_1"))
	int32 b1l__CallFunc_BreakHitResult_FaceIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart_1"))
	FVector b1l__CallFunc_BreakHitResult_TraceStart_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd_1"))
	FVector b1l__CallFunc_BreakHitResult_TraceEnd_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable_5"))
	FKey b1l__Temp_struct_Variable_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_14"))
	FKey b1l__K2Node_InputActionEvent_Key_14__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisKeyEvent_AxisValue"))
	float b1l__K2Node_InputAxisKeyEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTransform_ReturnValue_2"))
	FTransform b1l__CallFunc_GetTransform_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key_15"))
	FKey b1l__K2Node_InputActionEvent_Key_15__pf;
	ABP_Character_Mei_C__pf4244024795(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_18(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Character_Mei_19"))
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_21(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_22(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_23(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_24(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_25(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_26(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Character_Mei_27"))
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_27(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_28(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Character_Mei_29"))
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_29(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_30(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Character_Mei_31"))
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_31(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_32(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_33(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_34(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_35(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_36(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_37(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_38(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_39(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_40(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_41(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_42(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_43(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_44(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_45(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_46(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_47(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_48(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_49(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_50(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_51(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_52(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_53(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_54(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_55(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_56(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_57(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_58(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_59(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_60(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_61(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_62(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_63(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_64(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_65(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_66(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_67(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_68(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_69(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_70(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_71(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_72(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_73(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_74(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_75(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_76(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_77(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_78(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_79(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_80(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_81(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_82(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_83(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_84(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_85(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_86(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_87(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_88(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_89(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_90(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_91(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_92(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_93(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Character_Mei__pf_94(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Throw"))
	virtual void bpf__Throw__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_0"))
	virtual void bpf__InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(Comment="/**\t * Called upon landing when falling, to perform actions based on the Hit result.\t * Note that movement mode is still \"Falling\" during this event. Current Velocity value is the velocity at the time of landing.\t * Consider OnMovementModeChanged() as well, as that can be used once the movement mode changes to the new mode (most likely Walking).\t *\t * @param Hit Result describing the landing that resulted in a valid landing spot.\t * @see OnMovementModeChanged()\t */", ToolTip="Called upon landing when falling, to perform actions based on the Hit result.Note that movement mode is still \"Falling\" during this event. Current Velocity value is the velocity at the time of landing.Consider OnMovementModeChanged() as well, as that can be used once the movement mode changes to the new mode (most likely Walking).@param Hit Result describing the landing that resulted in a valid landing spot.@see OnMovementModeChanged()", CppFromBpEvent, OverrideNativeName="OnLanded"))
	virtual void bpf__OnLanded__pf(FHitResult const& bpp__Hit__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Climb"))
	virtual void bpf__Climb__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Grab Ledge"))
	virtual void bpf__GrabxLedge__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Charge Attack"))
	virtual void bpf__ChargexAttack__pfT();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="charge on server"))
	virtual void bpf__chargexonxserver__pfTT();
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="charginganimation"))
	virtual void bpf__charginganimation__pf(USkeletalMeshComponent* bpp__InSkeletalMeshComponent__pf, UAnimMontage* bpp__Montage__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Multi_PlayHitSound"))
	virtual void bpf__Multi_PlayHitSound__pf(USoundBase* bpp__Sound__pf, FVector bpp__Location__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Charge"))
	virtual void bpf__Charge__pf();
	UFUNCTION(meta=(Comment="/**\t * Called from CharacterMovementComponent to notify the character that the movement mode has changed.\t * @param\tPrevMovementMode\tMovement mode before the change\t * @param\tNewMovementMode\t\tNew movement mode\t * @param\tPrevCustomMode\t\tCustom mode before the change (applicable if PrevMovementMode is Custom)\t * @param\tNewCustomMode\t\tNew custom mode (applicable if NewMovementMode is Custom)\t */", DisplayName="OnMovementModeChanged", ScriptName="OnMovementModeChanged", ToolTip="Called from CharacterMovementComponent to notify the character that the movement mode has changed.@param       PrevMovementMode        Movement mode before the change@param       NewMovementMode         New movement mode@param       PrevCustomMode          Custom mode before the change (applicable if PrevMovementMode is Custom)@param       NewCustomMode           New custom mode (applicable if NewMovementMode is Custom)", CppFromBpEvent, OverrideNativeName="K2_OnMovementModeChanged"))
	virtual void bpf__K2_OnMovementModeChanged__pf(EMovementMode bpp__PrevMovementMode__pf, EMovementMode bpp__NewMovementMode__pf, uint8 bpp__PrevCustomMode__pf, uint8 bpp__NewCustomMode__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="LockCamera"))
	virtual void bpf__LockCamera__pf(bool bpp__Lock__pf, AActor* bpp__Target__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Multi_SpawnSoulsParticle"))
	virtual void bpf__Multi_SpawnSoulsParticle__pf(UNiagaraSystem* bpp__SystemTemplate__pf, USceneComponent* bpp__AttachToComponent__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SpawnSoulsParticle"))
	virtual void bpf__SpawnSoulsParticle__pf(int32 bpp__SoulsXP__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Client_Jogging"))
	virtual void bpf__Client_Jogging__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Multi_BlockingEffects"))
	virtual void bpf__Multi_BlockingEffects__pf(FName bpp__AttachPointName__pf, UAnimMontage* bpp__MontageToPlay__pf, USkeletalMeshComponent* bpp__InSkeletalMeshComponent__pf, FVector bpp__Location__pf, USoundBase* bpp__Sound__pf, UNiagaraSystem* bpp__SystemTemplate__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Blocking"))
	virtual void bpf__Server_Blocking__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="HeavyAttack"))
	virtual void bpf__HeavyAttack__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUp_K2Node_InputAxisEvent_1"))
	virtual void bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Turn_K2Node_InputAxisEvent_0"))
	virtual void bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(Comment="/** Event called when the Pawn is possessed by a Controller (normally only occurs on the server/standalone). */", DisplayName="Possessed", ToolTip="Event called when the Pawn is possessed by a Controller (normally only occurs on the server/standalone).", CppFromBpEvent, OverrideNativeName="ReceivePossessed"))
	virtual void bpf__ReceivePossessed__pf(AController* bpp__NewController__pf);
	virtual void bpf__Death__pf_Implementation(AActor* bpp__Player__pf) override;
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", Comment="/** Event when this actor takes ANY damage */", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	virtual void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="LightAttack"))
	virtual void bpf__LightAttack__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HandlePickup"))
	virtual void bpf__HandlePickup__pf();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_InteractWithObject"))
	virtual void bpf__Server_InteractWithObject__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SetPickupInfo"))
	virtual void bpf__SetPickupInfo__pf(ABP_BasePickup_C__pf4194264409* bpp__PickupActor__pf, bool bpp__Overlapping__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_EndAttack"))
	virtual void bpf__Server_EndAttack__pf();
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Multi_PlayMontage"))
	virtual void bpf__Multi_PlayMontage__pf(USkeletalMeshComponent* bpp__InSkeletalMeshComponent__pf, UAnimMontage* bpp__MontageToPlay__pf, FName bpp__StartingSection__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_TryToActivateAbiltiy"))
	virtual void bpf__Server_TryToActivateAbiltiy__pf(E__E_PlayerAttacks__pf bpp__Attacks__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Multi_Rolliing"))
	virtual void bpf__Multi_Rolliing__pf(UAnimMontage* bpp__Montage__pf, USkeletalMeshComponent* bpp__Mesh__pf, bool bpp__Stete__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_Rolling"))
	virtual void bpf__Server_Rolling__pf(bool bpp__Rolling__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Server_ToggleSprint"))
	virtual void bpf__Server_ToggleSprint__pf(bool bpp__State__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53"))
	virtual void bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38"))
	virtual void bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_90__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79"))
	virtual void bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_79__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0"))
	virtual void bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2"))
	virtual void bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnCompleted_8A28C1684DE6D99CD9B2238705FA27D2"))
	virtual void bpf__OnCompleted_8A28C1684DE6D99CD9B2238705FA27D2__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnBlendOut_8A28C1684DE6D99CD9B2238705FA27D2"))
	virtual void bpf__OnBlendOut_8A28C1684DE6D99CD9B2238705FA27D2__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnInterrupted_8A28C1684DE6D99CD9B2238705FA27D2"))
	virtual void bpf__OnInterrupted_8A28C1684DE6D99CD9B2238705FA27D2__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyBegin_8A28C1684DE6D99CD9B2238705FA27D2"))
	virtual void bpf__OnNotifyBegin_8A28C1684DE6D99CD9B2238705FA27D2__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyEnd_8A28C1684DE6D99CD9B2238705FA27D2"))
	virtual void bpf__OnNotifyEnd_8A28C1684DE6D99CD9B2238705FA27D2__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnCompleted_7073083B4ADF877E75368A8EE3A45B76"))
	virtual void bpf__OnCompleted_7073083B4ADF877E75368A8EE3A45B76__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnBlendOut_7073083B4ADF877E75368A8EE3A45B76"))
	virtual void bpf__OnBlendOut_7073083B4ADF877E75368A8EE3A45B76__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnInterrupted_7073083B4ADF877E75368A8EE3A45B76"))
	virtual void bpf__OnInterrupted_7073083B4ADF877E75368A8EE3A45B76__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyBegin_7073083B4ADF877E75368A8EE3A45B76"))
	virtual void bpf__OnNotifyBegin_7073083B4ADF877E75368A8EE3A45B76__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyEnd_7073083B4ADF877E75368A8EE3A45B76"))
	virtual void bpf__OnNotifyEnd_7073083B4ADF877E75368A8EE3A45B76__pf(FName bpp__NotifyName__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3"))
	virtual void bpf__InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_One_K2Node_InputKeyEvent_4"))
	virtual void bpf__InpActEvt_One_K2Node_InputKeyEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_X_K2Node_InputKeyEvent_5"))
	virtual void bpf__InpActEvt_X_K2Node_InputKeyEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnCompleted_8E168B8B40A94CD12C3D7D928A8A2FDD"))
	virtual void bpf__OnCompleted_8E168B8B40A94CD12C3D7D928A8A2FDD__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnBlendOut_8E168B8B40A94CD12C3D7D928A8A2FDD"))
	virtual void bpf__OnBlendOut_8E168B8B40A94CD12C3D7D928A8A2FDD__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnInterrupted_8E168B8B40A94CD12C3D7D928A8A2FDD"))
	virtual void bpf__OnInterrupted_8E168B8B40A94CD12C3D7D928A8A2FDD__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyBegin_8E168B8B40A94CD12C3D7D928A8A2FDD"))
	virtual void bpf__OnNotifyBegin_8E168B8B40A94CD12C3D7D928A8A2FDD__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyEnd_8E168B8B40A94CD12C3D7D928A8A2FDD"))
	virtual void bpf__OnNotifyEnd_8E168B8B40A94CD12C3D7D928A8A2FDD__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnCompleted_FF70D8AF4AF4E3E4E60B1389D2726387"))
	virtual void bpf__OnCompleted_FF70D8AF4AF4E3E4E60B1389D2726387__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnBlendOut_FF70D8AF4AF4E3E4E60B1389D2726387"))
	virtual void bpf__OnBlendOut_FF70D8AF4AF4E3E4E60B1389D2726387__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnInterrupted_FF70D8AF4AF4E3E4E60B1389D2726387"))
	virtual void bpf__OnInterrupted_FF70D8AF4AF4E3E4E60B1389D2726387__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyBegin_FF70D8AF4AF4E3E4E60B1389D2726387"))
	virtual void bpf__OnNotifyBegin_FF70D8AF4AF4E3E4E60B1389D2726387__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyEnd_FF70D8AF4AF4E3E4E60B1389D2726387"))
	virtual void bpf__OnNotifyEnd_FF70D8AF4AF4E3E4E60B1389D2726387__pf(FName bpp__NotifyName__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Crouch_K2Node_InputActionEvent_0"))
	virtual void bpf__InpActEvt_Crouch_K2Node_InputActionEvent_0__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Glide_K2Node_InputActionEvent_1"))
	virtual void bpf__InpActEvt_Glide_K2Node_InputActionEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Targeting_K2Node_InputActionEvent_2"))
	virtual void bpf__InpActEvt_Targeting_K2Node_InputActionEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnCompleted_76C161CC4EE93442D074F9810B60A62F"))
	virtual void bpf__OnCompleted_76C161CC4EE93442D074F9810B60A62F__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnBlendOut_76C161CC4EE93442D074F9810B60A62F"))
	virtual void bpf__OnBlendOut_76C161CC4EE93442D074F9810B60A62F__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnInterrupted_76C161CC4EE93442D074F9810B60A62F"))
	virtual void bpf__OnInterrupted_76C161CC4EE93442D074F9810B60A62F__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyBegin_76C161CC4EE93442D074F9810B60A62F"))
	virtual void bpf__OnNotifyBegin_76C161CC4EE93442D074F9810B60A62F__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyEnd_76C161CC4EE93442D074F9810B60A62F"))
	virtual void bpf__OnNotifyEnd_76C161CC4EE93442D074F9810B60A62F__pf(FName bpp__NotifyName__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Blocking_K2Node_InputActionEvent_3"))
	virtual void bpf__InpActEvt_Blocking_K2Node_InputActionEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Blocking_K2Node_InputActionEvent_4"))
	virtual void bpf__InpActEvt_Blocking_K2Node_InputActionEvent_4__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Interact_K2Node_InputActionEvent_5"))
	virtual void bpf__InpActEvt_Interact_K2Node_InputActionEvent_5__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnCompleted_7A6AF41A48F0F96CB2F848BBC71B1D21"))
	virtual void bpf__OnCompleted_7A6AF41A48F0F96CB2F848BBC71B1D21__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnBlendOut_7A6AF41A48F0F96CB2F848BBC71B1D21"))
	virtual void bpf__OnBlendOut_7A6AF41A48F0F96CB2F848BBC71B1D21__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnInterrupted_7A6AF41A48F0F96CB2F848BBC71B1D21"))
	virtual void bpf__OnInterrupted_7A6AF41A48F0F96CB2F848BBC71B1D21__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyBegin_7A6AF41A48F0F96CB2F848BBC71B1D21"))
	virtual void bpf__OnNotifyBegin_7A6AF41A48F0F96CB2F848BBC71B1D21__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyEnd_7A6AF41A48F0F96CB2F848BBC71B1D21"))
	virtual void bpf__OnNotifyEnd_7A6AF41A48F0F96CB2F848BBC71B1D21__pf(FName bpp__NotifyName__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Secondary_K2Node_InputActionEvent_6"))
	virtual void bpf__InpActEvt_Secondary_K2Node_InputActionEvent_6__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Primary_K2Node_InputActionEvent_7"))
	virtual void bpf__InpActEvt_Primary_K2Node_InputActionEvent_7__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Primary_K2Node_InputActionEvent_8"))
	virtual void bpf__InpActEvt_Primary_K2Node_InputActionEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnCompleted_16F9A0764D14782FBC5F9DA2F2AEC61C"))
	virtual void bpf__OnCompleted_16F9A0764D14782FBC5F9DA2F2AEC61C__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnBlendOut_16F9A0764D14782FBC5F9DA2F2AEC61C"))
	virtual void bpf__OnBlendOut_16F9A0764D14782FBC5F9DA2F2AEC61C__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnInterrupted_16F9A0764D14782FBC5F9DA2F2AEC61C"))
	virtual void bpf__OnInterrupted_16F9A0764D14782FBC5F9DA2F2AEC61C__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyBegin_16F9A0764D14782FBC5F9DA2F2AEC61C"))
	virtual void bpf__OnNotifyBegin_16F9A0764D14782FBC5F9DA2F2AEC61C__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyEnd_16F9A0764D14782FBC5F9DA2F2AEC61C"))
	virtual void bpf__OnNotifyEnd_16F9A0764D14782FBC5F9DA2F2AEC61C__pf(FName bpp__NotifyName__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Rolling_K2Node_InputActionEvent_9"))
	virtual void bpf__InpActEvt_Rolling_K2Node_InputActionEvent_9__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Sprint_K2Node_InputActionEvent_10"))
	virtual void bpf__InpActEvt_Sprint_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Sprint_K2Node_InputActionEvent_11"))
	virtual void bpf__InpActEvt_Sprint_K2Node_InputActionEvent_11__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Backflip_K2Node_InputActionEvent_12"))
	virtual void bpf__InpActEvt_Backflip_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ResetVR_K2Node_InputActionEvent_13"))
	virtual void bpf__InpActEvt_ResetVR_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpTchEvt_Pressed"))
	virtual void bpf__InpTchEvt_Pressed__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf);
	UFUNCTION(meta=(OverrideNativeName="InpTchEvt_Released"))
	virtual void bpf__InpTchEvt_Released__pf(ETouchIndex::Type bpp__FingerIndex__pf, FVector bpp__Location__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_14"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_14__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Jump_K2Node_InputActionEvent_15"))
	virtual void bpf__InpActEvt_Jump_K2Node_InputActionEvent_15__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="f_SprintSwitch"))
	virtual void bpf__f_SprintSwitch__pf(bool bpp__SprintState__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="f_BlockAngleCheck"))
	virtual void bpf__f_BlockAngleCheck__pf(/*out*/ bool& bpp__FacingAIx__pfzy);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Sprinting"))
	virtual void bpf__OnRep_Sprinting__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Server", OverrideNativeName="f_EquipWeapon"))
	virtual void bpf__f_EquipWeapon__pf(ABP_BasePickup_C__pf4194264409* bpp__EquippedWeapon__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_EquippedWeapon"))
	virtual void bpf__OnRep_EquippedWeapon__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Server", OverrideNativeName="f_EquipShield"))
	virtual void bpf__f_EquipShield__pf(ABP_BasePickup_C__pf4194264409* bpp__EquippedSheild__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_EquippedShield"))
	virtual void bpf__OnRep_EquippedShield__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Server", OverrideNativeName="f_EquipLight"))
	virtual void bpf__f_EquipLight__pf(ABP_BasePickup_C__pf4194264409* bpp__EquippedLight__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_EquippedLight"))
	virtual void bpf__OnRep_EquippedLight__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_PlayerDead"))
	virtual void bpf__OnRep_PlayerDead__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Server", OverrideNativeName="f_PlayerAttack"))
	virtual void bpf__f_PlayerAttack__pf(UAnimMontage* bpp__MontageToPlay__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_FullBody"))
	virtual void bpf__OnRep_FullBody__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_Blocking"))
	virtual void bpf__OnRep_Blocking__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Server", OverrideNativeName="f_CheckBlockingDirection"))
	virtual void bpf__f_CheckBlockingDirection__pf(AActor* bpp__Actor__pf, /*out*/ bool& bpp__Return__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Server", OverrideNativeName="f_DrainStamina"))
	virtual void bpf__f_DrainStamina__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Server", OverrideNativeName="f_RecoverStamina"))
	virtual void bpf__f_RecoverStamina__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Server", OverrideNativeName="f_ReduceStamina"))
	virtual void bpf__f_ReduceStamina__pf(float bpp__StaminaToReduce__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="f_LockOn"))
	virtual void bpf__f_LockOn__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="f_EnableGlider"))
	virtual void bpf__f_EnableGlider__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="f_DisableGlider"))
	virtual void bpf__f_DisableGlider__pf();
	UFUNCTION(BlueprintCallable, meta=(Category="Server", Tooltip="f_Charge", OverrideNativeName="f_Charge"))
	virtual void bpf__f_Charge__pf(UAnimMontage* bpp__MontageToPlay__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DetectLedge"))
	virtual void bpf__DetectLedge__pf(EDrawDebugTrace::Type bpp__DrawDebugType__pf, /*out*/ bool& bpp__Detect__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetMoveSide"))
	virtual void bpf__SetMoveSide__pf(bool bpp__Left__pf, bool bpp__Right__pf, USceneComponent* bpp__TopArrow__pf, EDrawDebugTrace::Type bpp__DrawDebugType__pf, USceneComponent* bpp__SideArrow__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreatePredictionPath"))
	virtual void bpf__CreatePredictionPath__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DestroyPredictionPathMeshes"))
	virtual void bpf__DestroyPredictionPathMeshes__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="UpdateMovement"))
	virtual void bpf__UpdateMovement__pf(bool bpp__CanMove__pf, /*out*/ bool& bpp__Return__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="IsDead"))
	virtual void bpf__IsDead__pf(/*out*/ bool& bpp__Dead__pf);
public:
};
