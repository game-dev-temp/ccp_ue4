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
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "ALS_MovementState__pf116373702.h"
#include "ALS_MovementAction__pf116373702.h"
#include "ALS_RotationMode__pf116373702.h"
#include "ALS_Gait__pf116373702.h"
#include "ALS_ViewMode__pf116373702.h"
#include "ALS_OverlayState__pf116373702.h"
#include "INT_Character__pf1977901695.generated.h"
UINTERFACE(Blueprintable, meta=(ReplaceConverted="/Game/Mei/BP/Interfaces/Character/INT_Character.INT_Character_C", OverrideNativeName="INT_Character_C"))
class UINT_Character_C : public UInterface
{
	GENERATED_BODY()
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass) {}
};
class IINT_Character_C
{
public:
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Character Information", CallInEditor="true", OverrideNativeName="BPI_Get_CurrentStates"))
	void bpf__BPI_Get_CurrentStates__pf(/*out*/ TEnumAsByte<EMovementMode>& bpp__PawnMovementMode__pf, /*out*/ E__E_MovementState__pf& bpp__MovementState__pf, /*out*/ E__E_MovementState__pf& bpp__PrevMovementState__pf, /*out*/ E__E_MovementAction__pf& bpp__MovementAction__pf, /*out*/ E__E_RotationMode__pf& bpp__RotationMode__pf, /*out*/ E__E_Gait__pf& bpp__ActualGait__pf, /*out*/ E__E_Stance__pf& bpp__ActualStance__pf, /*out*/ E__E_ViewMode__pf& bpp__ViewMode__pf, /*out*/ E__E_OverlayState__pf& bpp__OverlayState__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Character Information", OverrideNativeName="BPI_Get_EssentialValues"))
	void bpf__BPI_Get_EssentialValues__pf(/*out*/ FVector& bpp__Velocity__pf, /*out*/ FVector& bpp__Acceleration__pf, /*out*/ FVector& bpp__MovementInput__pf, /*out*/ bool& bpp__IsMoving__pf, /*out*/ bool& bpp__HasMovementInput__pf, /*out*/ float& bpp__Speed__pf, /*out*/ float& bpp__MovementInputAmount__pf, /*out*/ FRotator& bpp__AimingRotation__pf, /*out*/ float& bpp__AimYawRate__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Character States", OverrideNativeName="BPI_Set_MovementState"))
	void bpf__BPI_Set_MovementState__pf(E__ALS_MovementState__pf bpp__NewMovementState__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Character States", OverrideNativeName="BPI_Set_MovementAction"))
	void bpf__BPI_Set_MovementAction__pf(E__ALS_MovementAction__pf bpp__NewMovementAction__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Character States", OverrideNativeName="BPI_Set_RotationMode"))
	void bpf__BPI_Set_RotationMode__pf(E__ALS_RotationMode__pf bpp__NewRotationMode__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Character States", OverrideNativeName="BPI_Set_Gait"))
	void bpf__BPI_Set_Gait__pf(E__ALS_Gait__pf bpp__NewGait__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Character States", OverrideNativeName="BPI_Set_ViewMode"))
	void bpf__BPI_Set_ViewMode__pf(E__ALS_ViewMode__pf bpp__NewViewMode__pf);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(Category="Character States", OverrideNativeName="BPI_Set_OverlayState"))
	void bpf__BPI_Set_OverlayState__pf(E__ALS_OverlayState__pf bpp__NewOverlayState__pf);
public:
};
