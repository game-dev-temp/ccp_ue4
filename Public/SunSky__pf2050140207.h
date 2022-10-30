#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
class USkyAtmosphereComponent;
class UDirectionalLightComponent;
class USkyLightComponent;
class UStaticMeshComponent;
class USceneComponent;
#include "SunSky__pf2050140207.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/SunPosition/SunSky.SunSky_C", OverrideNativeName="SunSky_C"))
class ASunSky_C__pf2050140207 : public AActor
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SkyAtmosphere"))
	USkyAtmosphereComponent* bpv__SkyAtmosphere__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DirectionalLight"))
	UDirectionalLightComponent* bpv__DirectionalLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SkyLight"))
	USkyLightComponent* bpv__SkyLight__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="CompassMesh"))
	UStaticMeshComponent* bpv__CompassMesh__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Scene"))
	USceneComponent* bpv__Scene__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Latitude", Category="Location", UIMin="-89.99", UIMax="89.99", ClampMin="-89.99", ClampMax="89.99", OverrideNativeName="Latitude"))
	float bpv__Latitude__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Longitude", Category="Location", UIMin="-180", UIMax="180", ClampMin="-180", ClampMax="180", OverrideNativeName="Longitude"))
	float bpv__Longitude__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Year", Category="Date", UIMin="1800", UIMax="2200", ClampMin="0", ClampMax="4000", tooltip="Current Year", BlueprintPrivate="true", OverrideNativeName="Year"))
	int32 bpv__Year__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Month", Category="Date", UIMin="1", UIMax="12", ClampMin="1", ClampMax="12", tooltip="Current Month", OverrideNativeName="Month"))
	int32 bpv__Month__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Day", Category="Date", UIMin="1", UIMax="31", ClampMin="1", ClampMax="31", tooltip="Current Day", OverrideNativeName="Day"))
	int32 bpv__Day__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Time Zone", Category="Location", UIMin="-12", UIMax="14", ClampMin="-12", ClampMax="14", OverrideNativeName="TimeZone"))
	float bpv__TimeZone__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="Use Daylight Saving Time", Category="Date", tooltip="Enables Daylight Saving Time (DST)", OverrideNativeName="UseDaylightSavingTime"))
	bool bpv__UseDaylightSavingTime__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="North Offset", Category="Location", UIMin="-360", UIMax="360", ClampMin="-360", ClampMax="360", OverrideNativeName="NorthOffset"))
	float bpv__NorthOffset__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Elevation", Category="Location", OverrideNativeName="Elevation"))
	float bpv__Elevation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Corrected Elevation", Category="Location", OverrideNativeName="CorrectedElevation"))
	float bpv__CorrectedElevation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Azimuth", Category="Location", OverrideNativeName="Azimuth"))
	float bpv__Azimuth__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp, meta=(DisplayName="Solar Time", Category="Time", UIMin="4", UIMax="22", ClampMin="0", ClampMax="23.99999", tooltip="Time of the day in float (ex : 12,5 = 12:30)", OverrideNativeName="SolarTime"))
	float bpv__SolarTime__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="DST Start Month", Category="Date", UIMin="1", UIMax="12", ClampMin="1", ClampMax="12", tooltip="Set the Date at which DST starts in the current year", OverrideNativeName="DSTStartMonth"))
	int32 bpv__DSTStartMonth__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="DST Start Day", Category="Date", UIMin="1", UIMax="31", ClampMin="1", ClampMax="31", tooltip="Set the Date at which DST starts in the current year", OverrideNativeName="DSTStartDay"))
	int32 bpv__DSTStartDay__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="DST End Month", Category="Date", UIMin="1", UIMax="12", ClampMin="1", ClampMax="12", tooltip="Set the Date at which DST ends in the current year", OverrideNativeName="DSTEndMonth"))
	int32 bpv__DSTEndMonth__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="DST End Day", Category="Date", UIMin="1", UIMax="31", ClampMin="1", ClampMax="31", tooltip="Set the Date at which DST ends in the current year", OverrideNativeName="DSTEndDay"))
	int32 bpv__DSTEndDay__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, AdvancedDisplay, meta=(DisplayName="DST Switch Hour", Category="Date", UIMin="0", UIMax="23", ClampMin="0", ClampMax="23", tooltip="Hour of the DST Switch for both beginning and end", OverrideNativeName="DSTSwitchHour"))
	int32 bpv__DSTSwitchHour__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hash Val", Category="Event Tick", MultiLine="true", OverrideNativeName="HashVal"))
	float bpv__HashVal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	ASunSky_C__pf2050140207(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_SunSky__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateSun"))
	virtual void bpf__UpdateSun__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetHMSFromSolarTime"))
	virtual void bpf__GetHMSFromSolarTime__pf(float bpp__SolarTime__pf, /*out*/ int32& bpp__Hour__pf, /*out*/ int32& bpp__Minute__pf, /*out*/ int32& bpp__Second__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="IsDST"))
	virtual void bpf__IsDST__pf(bool bpp__DSTEnable__pf, int32 bpp__DSTStartMonth__pf, int32 bpp__DSTStartDay__pf, int32 bpp__DSTEndMonth__pf, int32 bpp__DSTEndDay__pf, int32 bpp__DSTSwitchHour__pf, /*out*/ bool& bpp__IsDST__pf);
public:
};
