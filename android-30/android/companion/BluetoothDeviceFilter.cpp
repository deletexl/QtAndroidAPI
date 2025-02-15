#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "./BluetoothDeviceFilter.hpp"

namespace android::companion
{
	// Fields
	JObject BluetoothDeviceFilter::CREATOR()
	{
		return getStaticObjectField(
			"android.companion.BluetoothDeviceFilter",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	BluetoothDeviceFilter::BluetoothDeviceFilter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint BluetoothDeviceFilter::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean BluetoothDeviceFilter::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint BluetoothDeviceFilter::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void BluetoothDeviceFilter::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::companion

