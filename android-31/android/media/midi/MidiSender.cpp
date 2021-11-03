#include "./MidiReceiver.hpp"
#include "./MidiSender.hpp"

namespace android::media::midi
{
	// Fields
	
	// QAndroidJniObject forward
	MidiSender::MidiSender(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MidiSender::MidiSender()
		: JObject(
			"android.media.midi.MidiSender",
			"()V"
		) {}
	
	// Methods
	void MidiSender::connect(android::media::midi::MidiReceiver arg0)
	{
		callMethod<void>(
			"connect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.object()
		);
	}
	void MidiSender::disconnect(android::media::midi::MidiReceiver arg0)
	{
		callMethod<void>(
			"disconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.object()
		);
	}
	void MidiSender::onConnect(android::media::midi::MidiReceiver arg0)
	{
		callMethod<void>(
			"onConnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.object()
		);
	}
	void MidiSender::onDisconnect(android::media::midi::MidiReceiver arg0)
	{
		callMethod<void>(
			"onDisconnect",
			"(Landroid/media/midi/MidiReceiver;)V",
			arg0.object()
		);
	}
} // namespace android::media::midi

