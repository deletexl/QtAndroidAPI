#include "./MediaRoute2Info.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./MediaRoute2Info_Builder.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaRoute2Info_Builder::MediaRoute2Info_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaRoute2Info_Builder::MediaRoute2Info_Builder(android::media::MediaRoute2Info arg0)
		: JObject(
			"android.media.MediaRoute2Info$Builder",
			"(Landroid/media/MediaRoute2Info;)V",
			arg0.object()
		) {}
	MediaRoute2Info_Builder::MediaRoute2Info_Builder(JString arg0, JString arg1)
		: JObject(
			"android.media.MediaRoute2Info$Builder",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::addFeature(JString arg0) const
	{
		return callObjectMethod(
			"addFeature",
			"(Ljava/lang/String;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::addFeatures(JObject arg0) const
	{
		return callObjectMethod(
			"addFeatures",
			"(Ljava/util/Collection;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object()
		);
	}
	android::media::MediaRoute2Info MediaRoute2Info_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/MediaRoute2Info;"
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::clearFeatures() const
	{
		return callObjectMethod(
			"clearFeatures",
			"()Landroid/media/MediaRoute2Info$Builder;"
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setClientPackageName(JString arg0) const
	{
		return callObjectMethod(
			"setClientPackageName",
			"(Ljava/lang/String;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setConnectionState(jint arg0) const
	{
		return callObjectMethod(
			"setConnectionState",
			"(I)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object<jstring>()
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object()
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setIconUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setIconUri",
			"(Landroid/net/Uri;)Landroid/media/MediaRoute2Info$Builder;",
			arg0.object()
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setVolume(jint arg0) const
	{
		return callObjectMethod(
			"setVolume",
			"(I)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setVolumeHandling(jint arg0) const
	{
		return callObjectMethod(
			"setVolumeHandling",
			"(I)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
	android::media::MediaRoute2Info_Builder MediaRoute2Info_Builder::setVolumeMax(jint arg0) const
	{
		return callObjectMethod(
			"setVolumeMax",
			"(I)Landroid/media/MediaRoute2Info$Builder;",
			arg0
		);
	}
} // namespace android::media

