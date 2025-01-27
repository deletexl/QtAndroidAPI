#include "../WpsInfo.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../../JString.hpp"
#include "./WifiP2pConfig.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	JObject WifiP2pConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.p2p.WifiP2pConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_BAND_2GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_2GHZ"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_BAND_5GHZ()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_5GHZ"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_BAND_AUTO()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_BAND_AUTO"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_INTENT_AUTO()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_INTENT_AUTO"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_INTENT_MAX()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_INTENT_MAX"
		);
	}
	jint WifiP2pConfig::GROUP_OWNER_INTENT_MIN()
	{
		return getStaticField<jint>(
			"android.net.wifi.p2p.WifiP2pConfig",
			"GROUP_OWNER_INTENT_MIN"
		);
	}
	JString WifiP2pConfig::deviceAddress()
	{
		return getObjectField(
			"deviceAddress",
			"Ljava/lang/String;"
		);
	}
	jint WifiP2pConfig::groupOwnerIntent()
	{
		return getField<jint>(
			"groupOwnerIntent"
		);
	}
	android::net::wifi::WpsInfo WifiP2pConfig::wps()
	{
		return getObjectField(
			"wps",
			"Landroid/net/wifi/WpsInfo;"
		);
	}
	
	// QJniObject forward
	WifiP2pConfig::WifiP2pConfig(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiP2pConfig::WifiP2pConfig()
		: JObject(
			"android.net.wifi.p2p.WifiP2pConfig",
			"()V"
		) {}
	WifiP2pConfig::WifiP2pConfig(android::net::wifi::p2p::WifiP2pConfig &arg0)
		: JObject(
			"android.net.wifi.p2p.WifiP2pConfig",
			"(Landroid/net/wifi/p2p/WifiP2pConfig;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WifiP2pConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint WifiP2pConfig::getGroupOwnerBand() const
	{
		return callMethod<jint>(
			"getGroupOwnerBand",
			"()I"
		);
	}
	jint WifiP2pConfig::getNetworkId() const
	{
		return callMethod<jint>(
			"getNetworkId",
			"()I"
		);
	}
	JString WifiP2pConfig::getNetworkName() const
	{
		return callObjectMethod(
			"getNetworkName",
			"()Ljava/lang/String;"
		);
	}
	JString WifiP2pConfig::getPassphrase() const
	{
		return callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;"
		);
	}
	JString WifiP2pConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiP2pConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::p2p

