#include "./MidiDevice_MidiConnection.hpp"
#include "./MidiDeviceInfo.hpp"
#include "./MidiInputPort.hpp"
#include "./MidiOutputPort.hpp"
#include "./MidiDevice.hpp"

namespace android::media::midi
{
	// Fields
	
	// QAndroidJniObject forward
	MidiDevice::MidiDevice(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void MidiDevice::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::media::midi::MidiDevice_MidiConnection MidiDevice::connectPorts(android::media::midi::MidiInputPort arg0, jint arg1)
	{
		return callObjectMethod(
			"connectPorts",
			"(Landroid/media/midi/MidiInputPort;I)Landroid/media/midi/MidiDevice$MidiConnection;",
			arg0.object(),
			arg1
		);
	}
	android::media::midi::MidiDeviceInfo MidiDevice::getInfo()
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	android::media::midi::MidiInputPort MidiDevice::openInputPort(jint arg0)
	{
		return callObjectMethod(
			"openInputPort",
			"(I)Landroid/media/midi/MidiInputPort;",
			arg0
		);
	}
	android::media::midi::MidiOutputPort MidiDevice::openOutputPort(jint arg0)
	{
		return callObjectMethod(
			"openOutputPort",
			"(I)Landroid/media/midi/MidiOutputPort;",
			arg0
		);
	}
	jstring MidiDevice::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::midi
