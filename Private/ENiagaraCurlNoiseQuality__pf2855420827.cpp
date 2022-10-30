#include "NativizedAssets.h"
#include "ENiagaraCurlNoiseQuality__pf2855420827.h"
FText E__ENiagaraCurlNoiseQuality__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__ENiagaraCurlNoiseQuality__pf>(InValue);
	switch(EnumValue)
	{
		case E__ENiagaraCurlNoiseQuality__pf::NewEnumerator0: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AD57186A4A5C9E76A9D05C9B4E8B2088]\", \"24521CF64A451C1F35F5168AEA63E3B1\", \"Baked (Low)\")"), Text); break;
		case E__ENiagaraCurlNoiseQuality__pf::NewEnumerator1: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AD57186A4A5C9E76A9D05C9B4E8B2088]\", \"18B3F39842385056F4BE95B171364C29\", \"Baked (Medium)\")"), Text); break;
		case E__ENiagaraCurlNoiseQuality__pf::NewEnumerator2: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AD57186A4A5C9E76A9D05C9B4E8B2088]\", \"B29D97964A0799B51D8B25A2BF140F4E\", \"Baked (High)\")"), Text); break;
		case E__ENiagaraCurlNoiseQuality__pf::NewEnumerator3: FTextStringHelper::ReadFromBuffer(TEXT("NSLOCTEXT(\"[AD57186A4A5C9E76A9D05C9B4E8B2088]\", \"A51527FB440014C71BAAB9B07A3D8DCD\", \"Evaluated (Ultra)\")"), Text); break;
		case E__ENiagaraCurlNoiseQuality__pf::E__ENiagaraCurlNoiseQuality__pf_MAX: FTextStringHelper::ReadFromBuffer(TEXT("ENiagara Curl Noise Quality MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
