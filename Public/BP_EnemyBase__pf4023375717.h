#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "E_AIAttackTypes__pf4023375717.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AnimGraphRuntime/Public/PlayMontageCallbackProxy.h"
#include "INT_Character_Mei__pf1977901695.h"
#include "INT_EnemyAI__pf3466827441.h"
#include "E_AIMovementState__pf4023375717.h"
#include "BP_Character__pf2151050371.h"
class USphereComponent;
class UWidgetComponent;
class AActor;
class UAnimMontage;
class UAIAsyncTaskBlueprintProxy;
class USkeletalMeshComponent;
class UPlayMontageCallbackProxy;
class UPrimitiveComponent;
class UDamageType;
class AController;
class AEnemyAIController_C__pf4023375717;
class ABP_Character_Mei_C__pf4244024795;
#include "BP_EnemyBase__pf4023375717.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/BP/AI/Enemy/BP_EnemyBase.BP_EnemyBase_C", OverrideNativeName="BP_EnemyBase_C"))
class ABP_EnemyBase_C__pf4023375717 : public ABP_Character_C__pf2151050371, public IINT_EnemyAI_C
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC_0, EPathFollowingResult::Type , bpp__MovementResult__pf);
	UDELEGATE(meta=(OverrideNativeName="OnMontagePlayDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OnMontagePlayDelegate__DelegateSignature__SC_1, FName , bpp__NotifyName__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HealthBarActivator"))
	USphereComponent* bpv__HealthBarActivator__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Widget"))
	UWidgetComponent* bpv__Widget__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="TargetWidget"))
	UWidgetComponent* bpv__TargetWidget__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MeleeSphere"))
	USphereComponent* bpv__MeleeSphere__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Health", Category="Enemy Info", MultiLine="true", OverrideNativeName="Health"))
	float bpv__Health__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Health", Category="Enemy Info", MultiLine="true", OverrideNativeName="MaxHealth"))
	float bpv__MaxHealth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Souls Xp Amount", Category="Enemy Info", MultiLine="true", OverrideNativeName="SoulsXpAmount"))
	int32 bpv__SoulsXpAmount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Walk Speed", Category="Enemy Info", MultiLine="true", OverrideNativeName="WalkSpeed"))
	float bpv__WalkSpeed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed Multiplier", Category="Enemy Info", MultiLine="true", OverrideNativeName="SpeedMultiplier"))
	float bpv__SpeedMultiplier__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Roaming", Category="Default", MultiLine="true", BlueprintPrivate="true", OverrideNativeName="IsRoaming"))
	bool bpv__IsRoaming__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Combat", Category="Default", MultiLine="true", BlueprintPrivate="true", OverrideNativeName="IsCombat"))
	bool bpv__IsCombat__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Is Dead", Category="Default", MultiLine="true", BlueprintPrivate="true", OverrideNativeName="IsDead"))
	bool bpv__IsDead__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spawn Location", Category="Default", MultiLine="true", BlueprintPrivate="true", OverrideNativeName="SpawnLocation"))
	FVector bpv__SpawnLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Target", Category="Default", MultiLine="true", BlueprintPrivate="true", OverrideNativeName="PlayerTarget"))
	AActor* bpv__PlayerTarget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Start Combat Location", Category="Default", MultiLine="true", BlueprintPrivate="true", OverrideNativeName="StartCombatLocation"))
	FVector bpv__StartCombatLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ranged Distance", Category="Enemy Info", MultiLine="true", OverrideNativeName="RangedDistance"))
	float bpv__RangedDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Melee Distance", Category="Enemy Info", MultiLine="true", OverrideNativeName="MeleeDistance"))
	float bpv__MeleeDistance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Taunt Montage", Category="Enemy Info", MultiLine="true", OverrideNativeName="TauntMontage"))
	TArray<UAnimMontage*> bpv__TauntMontage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Light Attack Montages", Category="Enemy Info", MultiLine="true", OverrideNativeName="LightAttackMontages"))
	TArray<UAnimMontage*> bpv__LightAttackMontages__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attack Types", Category="Default", MultiLine="true", BlueprintPrivate="true", OverrideNativeName="AttackTypes"))
	E__E_AIAttackTypes__pf bpv__AttackTypes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Light Attack Damage", Category="Enemy Info", MultiLine="true", OverrideNativeName="LightAttackDamage"))
	float bpv__LightAttackDamage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Heavy Attack Montages", Category="Enemy Info", MultiLine="true", OverrideNativeName="HeavyAttackMontages"))
	TArray<UAnimMontage*> bpv__HeavyAttackMontages__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Heavy Attack Damage", Category="Enemy Info", MultiLine="true", OverrideNativeName="HeavyAttackDamage"))
	float bpv__HeavyAttackDamage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ranged Attack Montages", Category="Enemy Info", MultiLine="true", OverrideNativeName="RangedAttackMontages"))
	TArray<UAnimMontage*> bpv__RangedAttackMontages__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ranged Attack Damage", Category="Enemy Info", MultiLine="true", OverrideNativeName="RangedAttackDamage"))
	float bpv__RangedAttackDamage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Beam Attack Montages", Category="Enemy Info", MultiLine="true", OverrideNativeName="BeamAttackMontages"))
	TArray<UAnimMontage*> bpv__BeamAttackMontages__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Beam Atack Damage", Category="Enemy Info", MultiLine="true", OverrideNativeName="BeamAtackDamage"))
	float bpv__BeamAtackDamage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Charge Attack Montages", Category="Enemy Info", MultiLine="true", OverrideNativeName="ChargeAttackMontages"))
	TArray<UAnimMontage*> bpv__ChargeAttackMontages__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Charge Attack Damage", Category="Enemy Info", MultiLine="true", OverrideNativeName="ChargeAttackDamage"))
	float bpv__ChargeAttackDamage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Distance Handle", Category="Default", MultiLine="true", OverrideNativeName="DistanceHandle"))
	FTimerHandle bpv__DistanceHandle__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_3"))
	TEnumAsByte<EPathFollowingResult::Type> b1l__K2Node_CustomEvent_MovementResult_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_2"))
	TEnumAsByte<EPathFollowingResult::Type> b1l__K2Node_CustomEvent_MovementResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b1l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_1 b1l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_4"))
	FName b1l__K2Node_CustomEvent_NotifyName_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_3"))
	FName b1l__K2Node_CustomEvent_NotifyName_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_1 b1l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_2"))
	FName b1l__K2Node_CustomEvent_NotifyName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_1 b1l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_1"))
	FName b1l__K2Node_CustomEvent_NotifyName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_5"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_1 b1l__K2Node_CreateDelegate_OutputDelegate_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName"))
	FName b1l__K2Node_CustomEvent_NotifyName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_6"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_1 b1l__K2Node_CreateDelegate_OutputDelegate_6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b1l__Temp_name_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Character_Mei"))
	TScriptInterface<IINT_Character_Mei_C> b1l__K2Node_DynamicCast_AsINT_Character_Mei__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsDead_Dead"))
	bool b1l__CallFunc_IsDead_Dead__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_1"))
	TEnumAsByte<EPathFollowingResult::Type> b1l__K2Node_CustomEvent_MovementResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_7"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b1l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_8"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_1"))
	TEnumAsByte<EPathFollowingResult::Type> b1l__Temp_byte_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewHealth"))
	float b1l__K2Node_Event_NewHealth__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation"))
	FVector b1l__CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue"))
	UAIAsyncTaskBlueprintProxy* b1l__CallFunc_CreateMoveToProxyObject_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_2"))
	bool b1l__CallFunc_IsValid_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Target"))
	AActor* b1l__K2Node_Event_Target__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b1l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_4"))
	TEnumAsByte<EPathFollowingResult::Type> b1l__K2Node_CustomEvent_MovementResult_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b1l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b1l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b1l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_1"))
	UAIAsyncTaskBlueprintProxy* b1l__CallFunc_CreateMoveToProxyObject_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_3"))
	bool b1l__CallFunc_IsValid_ReturnValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_StartingSection"))
	FName b1l__K2Node_CustomEvent_StartingSection__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MontageToPlay"))
	UAnimMontage* b1l__K2Node_CustomEvent_MontageToPlay__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_InSkeletalMeshComponent"))
	USkeletalMeshComponent* b1l__K2Node_CustomEvent_InSkeletalMeshComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue"))
	UPlayMontageCallbackProxy* b1l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_4"))
	bool b1l__CallFunc_IsValid_ReturnValue_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_9"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b1l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State_1"))
	bool b1l__K2Node_Event_State_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_f_PickAttack_Length"))
	float b1l__CallFunc_f_PickAttack_Length__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_f_GetMontage_Output"))
	UAnimMontage* b1l__CallFunc_f_GetMontage_Output__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetPlayLength_ReturnValue"))
	float b1l__CallFunc_GetPlayLength_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_2"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OverlappedComponent_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_2"))
	AActor* b1l__K2Node_ComponentBoundEvent_OtherActor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_2"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OtherComp_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_2"))
	int32 b1l__K2Node_ComponentBoundEvent_OtherBodyIndex_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_1"))
	bool b1l__K2Node_ComponentBoundEvent_bFromSweep_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_1"))
	FHitResult b1l__K2Node_ComponentBoundEvent_SweepResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b1l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array_1"))
	TArray<AActor*> b1l__K2Node_MakeArray_Array_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_SphereOverlapActors_OutActors"))
	TArray<AActor*> b1l__CallFunc_SphereOverlapActors_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult_5"))
	TEnumAsByte<EPathFollowingResult::Type> b1l__K2Node_CustomEvent_MovementResult_5__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Player_1"))
	AActor* b1l__K2Node_Event_Player_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Character_Mei_1"))
	TScriptInterface<IINT_Character_Mei_C> b1l__K2Node_DynamicCast_AsINT_Character_Mei_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b1l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue_2"))
	UAIAsyncTaskBlueprintProxy* b1l__CallFunc_CreateMoveToProxyObject_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue_5"))
	bool b1l__CallFunc_IsValid_ReturnValue_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsEnemy_AIController"))
	AEnemyAIController_C__pf4023375717* b1l__K2Node_DynamicCast_AsEnemy_AIController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b1l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_10"))
	F__OAISimpleDelegate__DelegateSignature__SC_0 b1l__K2Node_CreateDelegate_OutputDelegate_10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable_2"))
	TEnumAsByte<EPathFollowingResult::Type> b1l__Temp_byte_Variable_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_State"))
	bool b1l__K2Node_Event_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Player"))
	AActor* b1l__K2Node_Event_Player__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_State"))
	bool b1l__K2Node_CustomEvent_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Player"))
	AActor* b1l__K2Node_CustomEvent_Player__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b1l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_1"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_1"))
	AActor* b1l__K2Node_ComponentBoundEvent_OtherActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_1"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OtherComp_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_1"))
	int32 b1l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b1l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b1l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Character_Mei"))
	ABP_Character_Mei_C__pf4244024795* b1l__K2Node_DynamicCast_AsBP_Character_Mei__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b1l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsINT_Enemy_AI"))
	TScriptInterface<IINT_EnemyAI_C> b1l__K2Node_DynamicCast_AsINT_Enemy_AI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b1l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b1l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b1l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b1l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Character_Mei_1"))
	ABP_Character_Mei_C__pf4244024795* b1l__K2Node_DynamicCast_AsBP_Character_Mei_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b1l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult_1"))
	FHitResult b1l__CallFunc_K2_SetActorLocation_SweepHitResult_1__pf;
	ABP_EnemyBase_C__pf4023375717(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_EnemyBase_0"))
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_EnemyBase_3"))
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_EnemyBase_4"))
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_9(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_EnemyBase_10"))
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_12(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_EnemyBase_13"))
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_18(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_EnemyBase_19"))
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_21(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_22(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_23(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_24(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_25(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_26(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_27(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_28(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_29(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_30(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_EnemyBase__pf_31(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BP_EnemyBase_HealthBarActivator_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BP_EnemyBase_HealthBarActivator_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BP_EnemyBase_HealthBarActivator_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BP_EnemyBase_HealthBarActivator_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Multi_TargetWidget"))
	virtual void bpf__Multi_TargetWidget__pf(bool bpp__State__pf, AActor* bpp__Player__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ToggleTargetWidget"))
	virtual void bpf__ToggleTargetWidget__pf(bool bpp__State__pf, AActor* bpp__Player__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="Multi_DeadAnimation"))
	virtual void bpf__Multi_DeadAnimation__pf();
	virtual void bpf__Death__pf_Implementation(AActor* bpp__Player__pf) override;
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", Comment="/** Event when this actor takes ANY damage */", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	virtual void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="DoSphereOverlap"))
	virtual void bpf__DoSphereOverlap__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BP_EnemyBase_MeleeSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BP_EnemyBase_MeleeSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SetMeleeCollision"))
	virtual void bpf__SetMeleeCollision__pf(bool bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ClearTarget"))
	virtual void bpf__ClearTarget__pf();
	UFUNCTION(NetMulticast, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="Multi_PlayMontage"))
	virtual void bpf__Multi_PlayMontage__pf(FName bpp__StartingSection__pf, UAnimMontage* bpp__MontageToPlay__pf, USkeletalMeshComponent* bpp__InSkeletalMeshComponent__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="CheckForTaunt"))
	virtual void bpf__CheckForTaunt__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="RunAttackChoices"))
	virtual void bpf__RunAttackChoices__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ChasePlayer"))
	virtual void bpf__ChasePlayer__pf();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SetPlayerTarget"))
	virtual void bpf__SetPlayerTarget__pf(const AActor* bpp__Target__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="SetRoaming"))
	virtual void bpf__SetRoaming__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="UpdateHealthBar"))
	virtual void bpf__UpdateHealthBar__pf(float bpp__NewHealth__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="DoRangeAttack"))
	virtual void bpf__DoRangeAttack__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_ABFAF8BF46EF775E1280D685D00D0A5C"))
	virtual void bpf__OnSuccess_ABFAF8BF46EF775E1280D685D00D0A5C__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_ABFAF8BF46EF775E1280D685D00D0A5C"))
	virtual void bpf__OnFail_ABFAF8BF46EF775E1280D685D00D0A5C__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnCompleted_63C4A10045EA0391657E8C888E560614"))
	virtual void bpf__OnCompleted_63C4A10045EA0391657E8C888E560614__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnBlendOut_63C4A10045EA0391657E8C888E560614"))
	virtual void bpf__OnBlendOut_63C4A10045EA0391657E8C888E560614__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnInterrupted_63C4A10045EA0391657E8C888E560614"))
	virtual void bpf__OnInterrupted_63C4A10045EA0391657E8C888E560614__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyBegin_63C4A10045EA0391657E8C888E560614"))
	virtual void bpf__OnNotifyBegin_63C4A10045EA0391657E8C888E560614__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyEnd_63C4A10045EA0391657E8C888E560614"))
	virtual void bpf__OnNotifyEnd_63C4A10045EA0391657E8C888E560614__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_5805BE9E4EEF2B9885E0C3B83957F381"))
	virtual void bpf__OnSuccess_5805BE9E4EEF2B9885E0C3B83957F381__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_5805BE9E4EEF2B9885E0C3B83957F381"))
	virtual void bpf__OnFail_5805BE9E4EEF2B9885E0C3B83957F381__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_AD9342B94F627D3C6F2D19A8655340B7"))
	virtual void bpf__OnSuccess_AD9342B94F627D3C6F2D19A8655340B7__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_AD9342B94F627D3C6F2D19A8655340B7"))
	virtual void bpf__OnFail_AD9342B94F627D3C6F2D19A8655340B7__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="f_MovementState"))
	virtual void bpf__f_MovementState__pf(E__E_AIMovementState__pf bpp__State__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="f_PickAttack"))
	virtual void bpf__f_PickAttack__pf(float bpp__DistanceToPlayer__pf, /*out*/ float& bpp__Length__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="f_GetMontage"))
	virtual void bpf__f_GetMontage__pf(/*out*/ TArray<UAnimMontage*>& bpp__Montages__pf, /*out*/ UAnimMontage*& bpp__Output__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="f_GetDamage"))
	virtual void bpf__f_GetDamage__pf(AActor* bpp__HitPlayer__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="f_Percentage"))
	virtual void bpf__f_Percentage__pf(float bpp__Percent__pf, /*out*/ bool& bpp__Return__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="GetVariables", OverrideNativeName="f_GetAttackType"))
	virtual void bpf__f_GetAttackType__pf(/*out*/ E__E_AIAttackTypes__pf& bpp__AttackTypes__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="GetVariables", OverrideNativeName="f_GetCombatState"))
	virtual void bpf__f_GetCombatState__pf(/*out*/ bool& bpp__inOombat__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="GetVariables", OverrideNativeName="f_GetPlayerTarget"))
	virtual void bpf__f_GetPlayerTarget__pf(/*out*/ AActor*& bpp__PlayerTarget__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="f_PlayDeathAnimation"))
	virtual void bpf__f_PlayDeathAnimation__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="f_DistanceCheck"))
	virtual void bpf__f_DistanceCheck__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="IsAIDead"))
	virtual void bpf__IsAIDead__pf(/*out*/ bool& bpp__IsDead__pf);
public:
};
