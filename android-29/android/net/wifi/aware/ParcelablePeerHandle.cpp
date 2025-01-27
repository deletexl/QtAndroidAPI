#include "./PeerHandle.hpp"
#include "../../../os/Parcel.hpp"
#include "./ParcelablePeerHandle.hpp"

namespace android::net::wifi::aware
{
	// Fields
	JObject ParcelablePeerHandle::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.ParcelablePeerHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ParcelablePeerHandle::ParcelablePeerHandle(QJniObject obj) : android::net::wifi::aware::PeerHandle(obj) {}
	
	// Constructors
	ParcelablePeerHandle::ParcelablePeerHandle(android::net::wifi::aware::PeerHandle arg0)
		: android::net::wifi::aware::PeerHandle(
			"android.net.wifi.aware.ParcelablePeerHandle",
			"(Landroid/net/wifi/aware/PeerHandle;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ParcelablePeerHandle::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ParcelablePeerHandle::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

