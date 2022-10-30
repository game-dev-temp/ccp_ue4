#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UTextBlock;
#include "OverlayStateButton__pf977207518.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/AdvancedLocomotionV4/Blueprints/UI/OverlayStateButton.OverlayStateButton_C", OverrideNativeName="OverlayStateButton_C"))
class UOverlayStateButton_C__pf977207518 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Background", Category="OverlayStateButton", OverrideNativeName="Background"))
	UImage* bpv__Background__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Text", Category="OverlayStateButton", OverrideNativeName="Text"))
	UTextBlock* bpv__Text__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Background Selected Color", Category="Default", MultiLine="true", OverrideNativeName="BackgroundSelectedColor"))
	FLinearColor bpv__BackgroundSelectedColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Background Un Selected Color", Category="Default", MultiLine="true", OverrideNativeName="BackgroundUnSelectedColor"))
	FLinearColor bpv__BackgroundUnSelectedColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text Selected Color", Category="Default", MultiLine="true", OverrideNativeName="TextSelectedColor"))
	FSlateColor bpv__TextSelectedColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Text Un Selected Color", Category="Default", MultiLine="true", OverrideNativeName="TextUnSelectedColor"))
	FSlateColor bpv__TextUnSelectedColor__pf;
	UOverlayStateButton_C__pf977207518(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetVisualParameters"))
	virtual void bpf__SetVisualParameters__pf(bool bpp__Selected__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
