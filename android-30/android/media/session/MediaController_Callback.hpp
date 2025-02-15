#pragma once

#include "../../../JObject.hpp"

namespace android::media
{
	class MediaMetadata;
}
namespace android::media::session
{
	class MediaController_PlaybackInfo;
}
namespace android::media::session
{
	class PlaybackState;
}
namespace android::os
{
	class Bundle;
}
class JString;
class JString;

namespace android::media::session
{
	class MediaController_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaController_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaController_Callback(QJniObject obj);
		
		// Constructors
		MediaController_Callback();
		
		// Methods
		void onAudioInfoChanged(android::media::session::MediaController_PlaybackInfo arg0) const;
		void onExtrasChanged(android::os::Bundle arg0) const;
		void onMetadataChanged(android::media::MediaMetadata arg0) const;
		void onPlaybackStateChanged(android::media::session::PlaybackState arg0) const;
		void onQueueChanged(JObject arg0) const;
		void onQueueTitleChanged(JString arg0) const;
		void onSessionDestroyed() const;
		void onSessionEvent(JString arg0, android::os::Bundle arg1) const;
	};
} // namespace android::media::session

