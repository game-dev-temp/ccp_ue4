#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
class AActor;
class UObject;
class ABP_Mei_Building_BaseObject_C__pf2826203124;
class APlayerController;
#include "BP_Mei_Library__pf3770675254.generated.h"
UCLASS(config=Engine, meta=(ReplaceConverted="/Game/Mei/BP/BuildingSystem/Game/BP_Mei_Library.BP_Mei_Library_C", OverrideNativeName="BP_Mei_Library_C"))
class UBP_Mei_Library_C__pf3770675254 : public UBlueprintFunctionLibrary
{
public:
	GENERATED_BODY()
	UBP_Mei_Library_C__pf3770675254(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Library|Utilities", Tooltip="Returns true if actor is landscape or if actor has landscape tag.", WorldContext="__WorldContext", OverrideNativeName="ActorIsLandscape"))
	static void bpf__ActorIsLandscape__pf(AActor* bpp__Actor__pf, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Result__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="Building Library|Utilities", Tooltip="Returns true if array of actors has landscape.", WorldContext="__WorldContext", OverrideNativeName="ActorsHaveLandscape"))
	static void bpf__ActorsHaveLandscape__pf(/*out*/ TArray<AActor*>& bpp__Actors__pf, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Result__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Library|Utilities", Tooltip="Returns true if handle is valid.", WorldContext="__WorldContext", OverrideNativeName="IsValidHandle"))
	static void bpf__IsValidHandle__pf(FDataTableRowHandle bpp__Handle__pf, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__IsValid__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Library|Global Settings", Tooltip="Returns global building input rotation step value for the building system.", WorldContext="__WorldContext", OverrideNativeName="GetGlobalBuildingRotationStep"))
	static void bpf__GetGlobalBuildingRotationStep__pf(UObject* bpp____WorldContext__pf, /*out*/ float& bpp__StepValue__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Library|Global Settings", Tooltip="Returns global building input height step value for the building system.", WorldContext="__WorldContext", OverrideNativeName="GetGlobalBuildingHeightStep"))
	static void bpf__GetGlobalBuildingHeightStep__pf(UObject* bpp____WorldContext__pf, /*out*/ float& bpp__StepValue__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Library|Utilities", WorldContext="__WorldContext", OverrideNativeName="BuildingObjectIsFloorPlaceable"))
	static void bpf__BuildingObjectIsFloorPlaceable__pf(ABP_Mei_Building_BaseObject_C__pf2826203124* bpp__BuildingObject__pf, UObject* bpp____WorldContext__pf, /*out*/ bool& bpp__Result__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Library|Utilities", Tooltip="Returns true if transforms are equals with specific errors.", WorldContext="__WorldContext", OverrideNativeName="NearlyEqualTransforms"))
	static bool  bpf__NearlyEqualTransforms__pf(FTransform bpp__Transform1__pf, FTransform bpp__Transform2__pf, float bpp__LocationError__pf, float bpp__RotationError__pf, float bpp__ScaleError__pf, UObject* bpp____WorldContext__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Library|Global Settings", Tooltip="Returns global grid settings for the building system.", WorldContext="__WorldContext", OverrideNativeName="GetGlobalGridSettings"))
	static void bpf__GetGlobalGridSettings__pf(UObject* bpp____WorldContext__pf, /*out*/ float& bpp__GridFoundationOffset__pf, /*out*/ float& bpp__GridFoundationOffsetZ__pf, /*out*/ float& bpp__GridPropsOffset__pf, /*out*/ float& bpp__GridCorrectOffset__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Library|Utilities", Tooltip="Returns ID of target player controller.", WorldContext="__WorldContext", OverrideNativeName="GetPlayerID"))
	static void bpf__GetPlayerID__pf(APlayerController* bpp__PlayerController__pf, UObject* bpp____WorldContext__pf, /*out*/ FString& bpp__PlayerID__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Library|Global Settings", Tooltip="Returns global floor number limit value for the building system.", WorldContext="__WorldContext", OverrideNativeName="GetGlobalFloorNumberLimit"))
	static void bpf__GetGlobalFloorNumberLimit__pf(UObject* bpp____WorldContext__pf, /*out*/ int32& bpp__FloorNumberLimit__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category="Building Library|Global Settings", Tooltip="Returns global destruct chunks life time value for the building system.", WorldContext="__WorldContext", OverrideNativeName="GetGlobalDestructChunksLifeTime"))
	static void bpf__GetGlobalDestructChunksLifeTime__pf(UObject* bpp____WorldContext__pf, /*out*/ float& bpp__StepValue__pf);
public:
};
