#include "NativizedAssets.h"
#include "ENiagaraBoneSamplingMode__pf2855420827.h"
FText E__ENiagaraBoneSamplingMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraBoneSamplingMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraBoneSamplingMode__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[501890AF4759F0DC52B413938C88272C]\", \"E0695B2E4A0161EF5EC302B2E6B50FCC\", \"Random (Filtered Bones)\")"), Text); break;
		case E__ENiagaraBoneSamplingMode__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[501890AF4759F0DC52B413938C88272C]\", \"B092DB414124382E4281B48E722AEF62\", \"Random (Unfiltered Bones)\")"), Text); break;
		case E__ENiagaraBoneSamplingMode__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[501890AF4759F0DC52B413938C88272C]\", \"8A755F9D49E7E0FD9CEB51AF0568CD60\", \"Random (All Bones)\")"), Text); break;
		case E__ENiagaraBoneSamplingMode__pf::NewEnumerator4: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[501890AF4759F0DC52B413938C88272C]\", \"0B96DB7C4ABCBFAEC17B5CB50BF96E25\", \"Direct (Filtered Bones)\")"), Text); break;
		case E__ENiagaraBoneSamplingMode__pf::NewEnumerator5: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[501890AF4759F0DC52B413938C88272C]\", \"0EA9A2294910BEE825756AA5997EA0E7\", \"Direct (Unfiltered Bones)\")"), Text); break;
		case E__ENiagaraBoneSamplingMode__pf::NewEnumerator6: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[501890AF4759F0DC52B413938C88272C]\", \"153D8AFB47AF482929B318BAF856D7B3\", \"Direct (All Bones)\")"), Text); break;
		case E__ENiagaraBoneSamplingMode__pf::E__ENiagaraBoneSamplingMode__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Bone Sampling Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
