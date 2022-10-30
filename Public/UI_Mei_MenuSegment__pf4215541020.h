#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UOverlay;
class UTexture2D;
class USoundBase;
class UUI_Mei_MenuSegment_C__pf4215541020;
#include "UI_Mei_MenuSegment__pf4215541020.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/UI/BuildingSystem/UI_Mei_MenuSegment.UI_Mei_MenuSegment_C", OverrideNativeName="UI_Mei_MenuSegment_C"))
class UUI_Mei_MenuSegment_C__pf4215541020 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnSelected__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelected__pf__UI_Mei_MenuSegment_C__pf__MulticastDelegate , UUI_Mei_MenuSegment_C__pf4215541020* , bpp__MenuSegmentWidget__pf);
	UDELEGATE(meta=(OverrideNativeName="OnClicked__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClicked__pf__UI_Mei_MenuSegment_C__pf__MulticastDelegate , UUI_Mei_MenuSegment_C__pf4215541020* , bpp__MenuSegmentWidget__pf);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SegmentBackground", Category="UI_Mei_MenuSegment", OverrideNativeName="SegmentBackground"))
	UImage* bpv__SegmentBackground__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SegmentFrame", Category="UI_Mei_MenuSegment", OverrideNativeName="SegmentFrame"))
	UImage* bpv__SegmentFrame__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SegmentIcon", Category="UI_Mei_MenuSegment", OverrideNativeName="SegmentIcon"))
	UImage* bpv__SegmentIcon__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SegmentOverlay", Category="UI_Mei_MenuSegment", OverrideNativeName="SegmentOverlay"))
	UOverlay* bpv__SegmentOverlay__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Texture", Category="Default", ExposeOnSpawn="true", OverrideNativeName="IconTexture"))
	UTexture2D* bpv__IconTexture__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Segment Index", Category="Default", ExposeOnSpawn="true", OverrideNativeName="SegmentIndex"))
	int32 bpv__SegmentIndex__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Segment Count", Category="Default", ExposeOnSpawn="true", OverrideNativeName="SegmentCount"))
	int32 bpv__SegmentCount__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Icon Color", Category="Default", ExposeOnSpawn="true", OverrideNativeName="IconColor"))
	FLinearColor bpv__IconColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Background Color", Category="Default", OverrideNativeName="BackgroundColor"))
	FLinearColor bpv__BackgroundColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Selected Color", Category="Default", OverrideNativeName="SelectedColor"))
	FLinearColor bpv__SelectedColor__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Default Color", Category="Default", OverrideNativeName="DefaultColor"))
	FLinearColor bpv__DefaultColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Rotation", Category="Default", OverrideNativeName="Rotation"))
	float bpv__Rotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Segment Angle", Category="Default", OverrideNativeName="SegmentAngle"))
	float bpv__SegmentAngle__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Selected", Category="Default", OverrideNativeName="IsSelected"))
	bool bpv__IsSelected__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Update Icon Color", Category="Default", OverrideNativeName="UpdateIconColor"))
	bool bpv__UpdateIconColor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Segment Image Textures", Category="Default", OverrideNativeName="SegmentImageTextures"))
	TArray<UTexture2D*> bpv__SegmentImageTextures__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Segment Frame Textures", Category="Default", OverrideNativeName="SegmentFrameTextures"))
	TArray<UTexture2D*> bpv__SegmentFrameTextures__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Selected", Category="Default", OverrideNativeName="OnSelected"))
	FOnSelected__pf__UI_Mei_MenuSegment_C__pf__MulticastDelegate bpv__OnSelected__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="On Clicked", Category="Default", OverrideNativeName="OnClicked"))
	FOnClicked__pf__UI_Mei_MenuSegment_C__pf__MulticastDelegate bpv__OnClicked__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Select Sound", Category="Default", OverrideNativeName="SelectSound"))
	USoundBase* bpv__SelectSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Click Sound", Category="Default", OverrideNativeName="ClickSound"))
	USoundBase* bpv__ClickSound__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_UpdateWidget_Success"))
	bool b0l__CallFunc_UpdateWidget_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_ClearSelection_Success"))
	bool b0l__CallFunc_ClearSelection_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	UUI_Mei_MenuSegment_C__pf4215541020(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_UI_Mei_MenuSegment__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\t * the setup in the designer and since generally that same setup code is required at runtime, it\'s called there\t * as well.\t *\t * **WARNING**\t * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\t * state, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.\t *\t * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\t * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\t */", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	virtual void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Update segment widget and rotate it depending on segment index in the menu.", Category, OverrideNativeName="UpdateWidget"))
	virtual void bpf__UpdateWidget__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Check and update selection state. Calls selected event if selected.", Category, OverrideNativeName="CheckSelection"))
	virtual void bpf__CheckSelection__pf(float bpp__CurrentRotation__pf, /*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Clear selection state.", Category, OverrideNativeName="ClearSelection"))
	virtual void bpf__ClearSelection__pf(/*out*/ bool& bpp__Success__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Check and call click binded events if segment is selected.", Category, OverrideNativeName="TryClick"))
	virtual void bpf__TryClick__pf();
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Set menu segment index and count and update widget.", Category, OverrideNativeName="SetSegmentIndexAndCount"))
	virtual void bpf__SetSegmentIndexAndCount__pf(int32 bpp__NewSegmentIndex__pf, int32 bpp__NewSegmentCount__pf);
	UFUNCTION(BlueprintCallable, meta=(Tooltip="Set selection state.", Category, OverrideNativeName="SetSelection"))
	virtual void bpf__SetSelection__pf(bool bpp__IsSelected__pf, /*out*/ bool& bpp__Success__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
