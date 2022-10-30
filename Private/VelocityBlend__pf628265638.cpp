#include "NativizedAssets.h"
#include "VelocityBlend__pf628265638.h"
FVelocityBlend__pf628265638::FVelocityBlend__pf628265638()
{
	bpv__F_3_2154ABAD4BD15DAC904154B63D704219__pf = 0.000000f;
	bpv__B_5_0A0855774CB13BB3E4B0A6847E7154F6__pf = 0.000000f;
	bpv__L_8_DFEBB8584D28F158D2562CA60EB07B6D__pf = 0.000000f;
	bpv__R_9_79E6E09B4A52B442B9FE6DB7192CFBEE__pf = 0.000000f;
}
PRAGMA_DISABLE_OPTIMIZATION
void FVelocityBlend__pf628265638::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__FVelocityBlend__pf628265638
{
	FRegisterHelper__FVelocityBlend__pf628265638()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/AdvancedLocomotionV4/Data/Structs/VelocityBlend"), &FVelocityBlend__pf628265638::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FVelocityBlend__pf628265638 Instance;
};
FRegisterHelper__FVelocityBlend__pf628265638 FRegisterHelper__FVelocityBlend__pf628265638::Instance;
