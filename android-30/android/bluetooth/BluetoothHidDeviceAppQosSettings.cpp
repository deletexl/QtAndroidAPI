#include "../os/Parcel.hpp"
#include "./BluetoothHidDeviceAppQosSettings.hpp"

namespace android::bluetooth
{
	// Fields
	JObject BluetoothHidDeviceAppQosSettings::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::MAX()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"MAX"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::SERVICE_BEST_EFFORT()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"SERVICE_BEST_EFFORT"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::SERVICE_GUARANTEED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"SERVICE_GUARANTEED"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::SERVICE_NO_TRAFFIC()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"SERVICE_NO_TRAFFIC"
		);
	}
	
	// QJniObject forward
	BluetoothHidDeviceAppQosSettings::BluetoothHidDeviceAppQosSettings(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BluetoothHidDeviceAppQosSettings::BluetoothHidDeviceAppQosSettings(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: JObject(
			"android.bluetooth.BluetoothHidDeviceAppQosSettings",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	jint BluetoothHidDeviceAppQosSettings::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::getDelayVariation() const
	{
		return callMethod<jint>(
			"getDelayVariation",
			"()I"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::getLatency() const
	{
		return callMethod<jint>(
			"getLatency",
			"()I"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::getPeakBandwidth() const
	{
		return callMethod<jint>(
			"getPeakBandwidth",
			"()I"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::getServiceType() const
	{
		return callMethod<jint>(
			"getServiceType",
			"()I"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::getTokenBucketSize() const
	{
		return callMethod<jint>(
			"getTokenBucketSize",
			"()I"
		);
	}
	jint BluetoothHidDeviceAppQosSettings::getTokenRate() const
	{
		return callMethod<jint>(
			"getTokenRate",
			"()I"
		);
	}
	void BluetoothHidDeviceAppQosSettings::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

