#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaRoute2Info.hpp"

namespace android::media
{
	// Fields
	jint MediaRoute2Info::CONNECTION_STATE_CONNECTED()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"CONNECTION_STATE_CONNECTED"
		);
	}
	jint MediaRoute2Info::CONNECTION_STATE_CONNECTING()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"CONNECTION_STATE_CONNECTING"
		);
	}
	jint MediaRoute2Info::CONNECTION_STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"CONNECTION_STATE_DISCONNECTED"
		);
	}
	JObject MediaRoute2Info::CREATOR()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString MediaRoute2Info::FEATURE_LIVE_AUDIO()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_LIVE_AUDIO",
			"Ljava/lang/String;"
		);
	}
	JString MediaRoute2Info::FEATURE_LIVE_VIDEO()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_LIVE_VIDEO",
			"Ljava/lang/String;"
		);
	}
	JString MediaRoute2Info::FEATURE_REMOTE_AUDIO_PLAYBACK()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_REMOTE_AUDIO_PLAYBACK",
			"Ljava/lang/String;"
		);
	}
	JString MediaRoute2Info::FEATURE_REMOTE_PLAYBACK()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_REMOTE_PLAYBACK",
			"Ljava/lang/String;"
		);
	}
	JString MediaRoute2Info::FEATURE_REMOTE_VIDEO_PLAYBACK()
	{
		return getStaticObjectField(
			"android.media.MediaRoute2Info",
			"FEATURE_REMOTE_VIDEO_PLAYBACK",
			"Ljava/lang/String;"
		);
	}
	jint MediaRoute2Info::PLAYBACK_VOLUME_FIXED()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"PLAYBACK_VOLUME_FIXED"
		);
	}
	jint MediaRoute2Info::PLAYBACK_VOLUME_VARIABLE()
	{
		return getStaticField<jint>(
			"android.media.MediaRoute2Info",
			"PLAYBACK_VOLUME_VARIABLE"
		);
	}
	
	// QJniObject forward
	MediaRoute2Info::MediaRoute2Info(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint MediaRoute2Info::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaRoute2Info::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString MediaRoute2Info::getClientPackageName() const
	{
		return callObjectMethod(
			"getClientPackageName",
			"()Ljava/lang/String;"
		);
	}
	jint MediaRoute2Info::getConnectionState() const
	{
		return callMethod<jint>(
			"getConnectionState",
			"()I"
		);
	}
	JString MediaRoute2Info::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::os::Bundle MediaRoute2Info::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JObject MediaRoute2Info::getFeatures() const
	{
		return callObjectMethod(
			"getFeatures",
			"()Ljava/util/List;"
		);
	}
	android::net::Uri MediaRoute2Info::getIconUri() const
	{
		return callObjectMethod(
			"getIconUri",
			"()Landroid/net/Uri;"
		);
	}
	JString MediaRoute2Info::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	JString MediaRoute2Info::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint MediaRoute2Info::getVolume() const
	{
		return callMethod<jint>(
			"getVolume",
			"()I"
		);
	}
	jint MediaRoute2Info::getVolumeHandling() const
	{
		return callMethod<jint>(
			"getVolumeHandling",
			"()I"
		);
	}
	jint MediaRoute2Info::getVolumeMax() const
	{
		return callMethod<jint>(
			"getVolumeMax",
			"()I"
		);
	}
	jint MediaRoute2Info::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean MediaRoute2Info::isSystemRoute() const
	{
		return callMethod<jboolean>(
			"isSystemRoute",
			"()Z"
		);
	}
	JString MediaRoute2Info::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void MediaRoute2Info::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

