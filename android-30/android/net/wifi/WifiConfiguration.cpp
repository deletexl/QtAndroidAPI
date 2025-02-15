#include "../../../JLongArray.hpp"
#include "../../../JArray.hpp"
#include "../MacAddress.hpp"
#include "../ProxyInfo.hpp"
#include "./WifiEnterpriseConfig.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/BitSet.hpp"
#include "./WifiConfiguration.hpp"

namespace android::net::wifi
{
	// Fields
	JString WifiConfiguration::BSSID()
	{
		return getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		);
	}
	JString WifiConfiguration::FQDN()
	{
		return getObjectField(
			"FQDN",
			"Ljava/lang/String;"
		);
	}
	jint WifiConfiguration::SECURITY_TYPE_EAP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_EAP"
		);
	}
	jint WifiConfiguration::SECURITY_TYPE_EAP_SUITE_B()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_EAP_SUITE_B"
		);
	}
	jint WifiConfiguration::SECURITY_TYPE_OPEN()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_OPEN"
		);
	}
	jint WifiConfiguration::SECURITY_TYPE_OWE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_OWE"
		);
	}
	jint WifiConfiguration::SECURITY_TYPE_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_PSK"
		);
	}
	jint WifiConfiguration::SECURITY_TYPE_SAE()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_SAE"
		);
	}
	jint WifiConfiguration::SECURITY_TYPE_WAPI_CERT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_WAPI_CERT"
		);
	}
	jint WifiConfiguration::SECURITY_TYPE_WAPI_PSK()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_WAPI_PSK"
		);
	}
	jint WifiConfiguration::SECURITY_TYPE_WEP()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiConfiguration",
			"SECURITY_TYPE_WEP"
		);
	}
	JString WifiConfiguration::SSID()
	{
		return getObjectField(
			"SSID",
			"Ljava/lang/String;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedAuthAlgorithms()
	{
		return getObjectField(
			"allowedAuthAlgorithms",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedGroupCiphers()
	{
		return getObjectField(
			"allowedGroupCiphers",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedGroupManagementCiphers()
	{
		return getObjectField(
			"allowedGroupManagementCiphers",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedKeyManagement()
	{
		return getObjectField(
			"allowedKeyManagement",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedPairwiseCiphers()
	{
		return getObjectField(
			"allowedPairwiseCiphers",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedProtocols()
	{
		return getObjectField(
			"allowedProtocols",
			"Ljava/util/BitSet;"
		);
	}
	java::util::BitSet WifiConfiguration::allowedSuiteBCiphers()
	{
		return getObjectField(
			"allowedSuiteBCiphers",
			"Ljava/util/BitSet;"
		);
	}
	android::net::wifi::WifiEnterpriseConfig WifiConfiguration::enterpriseConfig()
	{
		return getObjectField(
			"enterpriseConfig",
			"Landroid/net/wifi/WifiEnterpriseConfig;"
		);
	}
	jboolean WifiConfiguration::hiddenSSID()
	{
		return getField<jboolean>(
			"hiddenSSID"
		);
	}
	jboolean WifiConfiguration::isHomeProviderNetwork()
	{
		return getField<jboolean>(
			"isHomeProviderNetwork"
		);
	}
	jint WifiConfiguration::networkId()
	{
		return getField<jint>(
			"networkId"
		);
	}
	JString WifiConfiguration::preSharedKey()
	{
		return getObjectField(
			"preSharedKey",
			"Ljava/lang/String;"
		);
	}
	jint WifiConfiguration::priority()
	{
		return getField<jint>(
			"priority"
		);
	}
	JString WifiConfiguration::providerFriendlyName()
	{
		return getObjectField(
			"providerFriendlyName",
			"Ljava/lang/String;"
		);
	}
	JLongArray WifiConfiguration::roamingConsortiumIds()
	{
		return getObjectField(
			"roamingConsortiumIds",
			"[J"
		);
	}
	jint WifiConfiguration::status()
	{
		return getField<jint>(
			"status"
		);
	}
	JArray WifiConfiguration::wepKeys()
	{
		return getObjectField(
			"wepKeys",
			"[Ljava/lang/String;"
		);
	}
	jint WifiConfiguration::wepTxKeyIndex()
	{
		return getField<jint>(
			"wepTxKeyIndex"
		);
	}
	
	// QJniObject forward
	WifiConfiguration::WifiConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiConfiguration::WifiConfiguration()
		: JObject(
			"android.net.wifi.WifiConfiguration",
			"()V"
		) {}
	WifiConfiguration::WifiConfiguration(android::net::wifi::WifiConfiguration &arg0)
		: JObject(
			"android.net.wifi.WifiConfiguration",
			"(Landroid/net/wifi/WifiConfiguration;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WifiConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::net::ProxyInfo WifiConfiguration::getHttpProxy() const
	{
		return callObjectMethod(
			"getHttpProxy",
			"()Landroid/net/ProxyInfo;"
		);
	}
	JString WifiConfiguration::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	android::net::MacAddress WifiConfiguration::getRandomizedMacAddress() const
	{
		return callObjectMethod(
			"getRandomizedMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	jboolean WifiConfiguration::isPasspoint() const
	{
		return callMethod<jboolean>(
			"isPasspoint",
			"()Z"
		);
	}
	void WifiConfiguration::setHttpProxy(android::net::ProxyInfo arg0) const
	{
		callMethod<void>(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)V",
			arg0.object()
		);
	}
	void WifiConfiguration::setSecurityParams(jint arg0) const
	{
		callMethod<void>(
			"setSecurityParams",
			"(I)V",
			arg0
		);
	}
	JString WifiConfiguration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

