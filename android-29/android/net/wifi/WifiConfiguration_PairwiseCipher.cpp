#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./WifiConfiguration_PairwiseCipher.hpp"

namespace android::net::wifi
{
	// Fields
	jint WifiConfiguration_PairwiseCipher::CCMP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"CCMP"
		);
	}
	jint WifiConfiguration_PairwiseCipher::GCMP_256()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"GCMP_256"
		);
	}
	jint WifiConfiguration_PairwiseCipher::NONE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"NONE"
		);
	}
	jint WifiConfiguration_PairwiseCipher::TKIP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"TKIP"
		);
	}
	JArray WifiConfiguration_PairwiseCipher::strings()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"strings",
			"[Ljava/lang/String;"
		);
	}
	JString WifiConfiguration_PairwiseCipher::varName()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiConfiguration$PairwiseCipher",
			"varName",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	WifiConfiguration_PairwiseCipher::WifiConfiguration_PairwiseCipher(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::net::wifi

