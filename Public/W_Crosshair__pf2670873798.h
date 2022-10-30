#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UBorder;
class UImage;
#include "W_Crosshair__pf2670873798.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/UI/W_Crosshair.W_Crosshair_C", OverrideNativeName="W_Crosshair_C"))
class UW_Crosshair_C__pf2670873798 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Center", Category="W_Crosshair", OverrideNativeName="Center"))
	UBorder* bpv__Center__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_0", Category="W_Crosshair", OverrideNativeName="Image_0"))
	UImage* bpv__Image_0__pf;
	UW_Crosshair_C__pf2670873798(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
