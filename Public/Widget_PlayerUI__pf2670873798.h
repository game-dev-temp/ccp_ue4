#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UProgressBar;
class UTextBlock;
class UBorder;
class AThirdPersonCharacter_C__pf2222656877;
#include "Widget_PlayerUI__pf2670873798.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mei/UI/Widget_PlayerUI.Widget_PlayerUI_C", OverrideNativeName="Widget_PlayerUI_C"))
class UWidget_PlayerUI_C__pf2670873798 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Avatar", Category="Widget_PlayerUI", OverrideNativeName="Avatar"))
	UImage* bpv__Avatar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="AvatarShadow", Category="Widget_PlayerUI", OverrideNativeName="AvatarShadow"))
	UImage* bpv__AvatarShadow__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HealthBar", Category="Widget_PlayerUI", OverrideNativeName="HealthBar"))
	UProgressBar* bpv__HealthBar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HealthBar_Back", Category="Widget_PlayerUI", OverrideNativeName="HealthBar_Back"))
	UProgressBar* bpv__HealthBar_Back__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HealthBar_Back_new", Category="Widget_PlayerUI", OverrideNativeName="HealthBar_Back_new"))
	UProgressBar* bpv__HealthBar_Back_new__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HealthBar_Front_new", Category="Widget_PlayerUI", OverrideNativeName="HealthBar_Front_new"))
	UProgressBar* bpv__HealthBar_Front_new__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ManaBar", Category="Widget_PlayerUI", OverrideNativeName="ManaBar"))
	UProgressBar* bpv__ManaBar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ManaBar_new", Category="Widget_PlayerUI", OverrideNativeName="ManaBar_new"))
	UProgressBar* bpv__ManaBar_new__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="MessageText", Category="Widget_PlayerUI", OverrideNativeName="MessageText"))
	UTextBlock* bpv__MessageText__pf;
	UPROPERTY(Export, meta=(DisplayName="money_value", OverrideNativeName="money_value"))
	UTextBlock* bpv__money_value__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="PlayerMessageBorder", Category="Widget_PlayerUI", OverrideNativeName="PlayerMessageBorder"))
	UBorder* bpv__PlayerMessageBorder__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="StaminaBar", Category="Widget_PlayerUI", OverrideNativeName="StaminaBar"))
	UProgressBar* bpv__StaminaBar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="StaminaCircle", Category="Widget_PlayerUI", OverrideNativeName="StaminaCircle"))
	UImage* bpv__StaminaCircle__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Character", Category="Default", MultiLine="true", OverrideNativeName="character"))
	AThirdPersonCharacter_C__pf2222656877* bpv__character__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Back Health Bar", Category="Default", MultiLine="true", OverrideNativeName="BackHealthBar"))
	bool bpv__BackHealthBar__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="In Percent", Category="Default", MultiLine="true", OverrideNativeName="InPercent"))
	float bpv__InPercent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_HealthPercent"))
	float b0l__K2Node_CustomEvent_HealthPercent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_StaminaPercent"))
	float b0l__K2Node_CustomEvent_StaminaPercent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_State"))
	bool b0l__K2Node_CustomEvent_State__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Message"))
	FText b0l__K2Node_CustomEvent_Message__pf;
	UWidget_PlayerUI_C__pf2670873798(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Widget_PlayerUI__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Widget_PlayerUI_1"))
	void bpf__ExecuteUbergraph_Widget_PlayerUI__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Widget_PlayerUI__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Widget_PlayerUI__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateStaminaBar"))
	virtual void bpf__UpdateStaminaBar__pf(float bpp__StaminaPercent__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateHealthbar"))
	virtual void bpf__UpdateHealthbar__pf(float bpp__HealthPercent__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="PlayerMessage"))
	virtual void bpf__PlayerMessage__pf(bool bpp__State__pf, const FText& bpp__Message__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_HealthBar_Percent_0"))
	virtual float  bpf__Get_HealthBar_Percent_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_money_value_Text_0"))
	virtual FText  bpf__Get_money_value_Text_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
