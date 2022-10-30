#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UCurveVector;
class UCurveFloat;
#include "MovementSettings__pf628265638.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Data/Structs/MovementSettings.MovementSettings", OverrideNativeName="MovementSettings"))
struct FMovementSettings__pf628265638
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Walk Speed", Tooltip, OverrideNativeName="WalkSpeed_40_9AD737B14B8BC378F924E890E018B5B0"))
	float bpv__WalkSpeed_40_9AD737B14B8BC378F924E890E018B5B0__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Run Speed", Tooltip, OverrideNativeName="RunSpeed_39_7397773A4A46B563F765429BD6A2DDE8"))
	float bpv__RunSpeed_39_7397773A4A46B563F765429BD6A2DDE8__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Sprint Speed", Tooltip, OverrideNativeName="SprintSpeed_38_6123675A40931BD70D4CF18D9A2A1C4C"))
	float bpv__SprintSpeed_38_6123675A40931BD70D4CF18D9A2A1C4C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Movement Curve", Tooltip, OverrideNativeName="MovementCurve_51_FDDCE64149CA0F8A553745BEA0FEE53E"))
	UCurveVector* bpv__MovementCurve_51_FDDCE64149CA0F8A553745BEA0FEE53E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotation Rate Curve", Tooltip, OverrideNativeName="RotationRateCurve_52_73FA146B4B31FF205DE8E1BBFA8800F6"))
	UCurveFloat* bpv__RotationRateCurve_52_73FA146B4B31FF205DE8E1BBFA8800F6__pf;
	FMovementSettings__pf628265638();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FMovementSettings__pf628265638& __Other) const
	{
		return FMovementSettings__pf628265638::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FMovementSettings__pf628265638& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FMovementSettings__pf628265638::StaticStruct()); }
};
