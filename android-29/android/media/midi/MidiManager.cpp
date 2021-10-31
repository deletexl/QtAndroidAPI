#include "../../bluetooth/BluetoothDevice.hpp"
#include "./MidiDeviceInfo.hpp"
#include "./MidiManager_DeviceCallback.hpp"
#include "../../os/Handler.hpp"
#include "./MidiManager.hpp"

namespace android::media::midi
{
	// Fields
	
	// QAndroidJniObject forward
	MidiManager::MidiManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jarray MidiManager::getDevices()
	{
		return callObjectMethod(
			"getDevices",
			"()[Landroid/media/midi/MidiDeviceInfo;"
		).object<jarray>();
	}
	void MidiManager::openBluetoothDevice(android::bluetooth::BluetoothDevice arg0, __JniBaseClass arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"openBluetoothDevice",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/media/midi/MidiManager$OnDeviceOpenedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void MidiManager::openDevice(android::media::midi::MidiDeviceInfo arg0, __JniBaseClass arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"openDevice",
			"(Landroid/media/midi/MidiDeviceInfo;Landroid/media/midi/MidiManager$OnDeviceOpenedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void MidiManager::registerDeviceCallback(android::media::midi::MidiManager_DeviceCallback arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"registerDeviceCallback",
			"(Landroid/media/midi/MidiManager$DeviceCallback;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MidiManager::unregisterDeviceCallback(android::media::midi::MidiManager_DeviceCallback arg0)
	{
		callMethod<void>(
			"unregisterDeviceCallback",
			"(Landroid/media/midi/MidiManager$DeviceCallback;)V",
			arg0.object()
		);
	}
} // namespace android::media::midi
