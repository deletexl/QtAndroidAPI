#include "../../JBooleanArray.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "../os/Handler.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./JetPlayer.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	JetPlayer::JetPlayer(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::JetPlayer JetPlayer::getJetPlayer()
	{
		return callStaticObjectMethod(
			"android.media.JetPlayer",
			"getJetPlayer",
			"()Landroid/media/JetPlayer;"
		);
	}
	jint JetPlayer::getMaxTracks()
	{
		return callStaticMethod<jint>(
			"android.media.JetPlayer",
			"getMaxTracks",
			"()I"
		);
	}
	jboolean JetPlayer::clearQueue() const
	{
		return callMethod<jboolean>(
			"clearQueue",
			"()Z"
		);
	}
	JObject JetPlayer::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	jboolean JetPlayer::closeJetFile() const
	{
		return callMethod<jboolean>(
			"closeJetFile",
			"()Z"
		);
	}
	jboolean JetPlayer::loadJetFile(android::content::res::AssetFileDescriptor arg0) const
	{
		return callMethod<jboolean>(
			"loadJetFile",
			"(Landroid/content/res/AssetFileDescriptor;)Z",
			arg0.object()
		);
	}
	jboolean JetPlayer::loadJetFile(JString arg0) const
	{
		return callMethod<jboolean>(
			"loadJetFile",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean JetPlayer::pause() const
	{
		return callMethod<jboolean>(
			"pause",
			"()Z"
		);
	}
	jboolean JetPlayer::play() const
	{
		return callMethod<jboolean>(
			"play",
			"()Z"
		);
	}
	jboolean JetPlayer::queueJetSegment(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jbyte arg5) const
	{
		return callMethod<jboolean>(
			"queueJetSegment",
			"(IIIIIB)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jboolean JetPlayer::queueJetSegmentMuteArray(jint arg0, jint arg1, jint arg2, jint arg3, JBooleanArray arg4, jbyte arg5) const
	{
		return callMethod<jboolean>(
			"queueJetSegmentMuteArray",
			"(IIII[ZB)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jbooleanArray>(),
			arg5
		);
	}
	void JetPlayer::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void JetPlayer::setEventListener(JObject arg0) const
	{
		callMethod<void>(
			"setEventListener",
			"(Landroid/media/JetPlayer$OnJetEventListener;)V",
			arg0.object()
		);
	}
	void JetPlayer::setEventListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setEventListener",
			"(Landroid/media/JetPlayer$OnJetEventListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean JetPlayer::setMuteArray(JBooleanArray arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setMuteArray",
			"([ZZ)Z",
			arg0.object<jbooleanArray>(),
			arg1
		);
	}
	jboolean JetPlayer::setMuteFlag(jint arg0, jboolean arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"setMuteFlag",
			"(IZZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean JetPlayer::setMuteFlags(jint arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setMuteFlags",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jboolean JetPlayer::triggerClip(jint arg0) const
	{
		return callMethod<jboolean>(
			"triggerClip",
			"(I)Z",
			arg0
		);
	}
} // namespace android::media

