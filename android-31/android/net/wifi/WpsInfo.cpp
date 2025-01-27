#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./WpsInfo.hpp"

namespace android::net::wifi
{
	// Fields
	JString WpsInfo::BSSID()
	{
		return getObjectField(
			"BSSID",
			"Ljava/lang/String;"
		);
	}
	JObject WpsInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WpsInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WpsInfo::DISPLAY()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"DISPLAY"
		);
	}
	jint WpsInfo::INVALID()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"INVALID"
		);
	}
	jint WpsInfo::KEYPAD()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"KEYPAD"
		);
	}
	jint WpsInfo::LABEL()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"LABEL"
		);
	}
	jint WpsInfo::PBC()
	{
		return getStaticField<jint>(
			"android.net.wifi.WpsInfo",
			"PBC"
		);
	}
	JString WpsInfo::pin()
	{
		return getObjectField(
			"pin",
			"Ljava/lang/String;"
		);
	}
	jint WpsInfo::setup()
	{
		return getField<jint>(
			"setup"
		);
	}
	
	// QJniObject forward
	WpsInfo::WpsInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	WpsInfo::WpsInfo()
		: JObject(
			"android.net.wifi.WpsInfo",
			"()V"
		) {}
	WpsInfo::WpsInfo(android::net::wifi::WpsInfo &arg0)
		: JObject(
			"android.net.wifi.WpsInfo",
			"(Landroid/net/wifi/WpsInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	jint WpsInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString WpsInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WpsInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

