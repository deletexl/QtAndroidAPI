#pragma once

#include "../../../JObject.hpp"

namespace android::media::tv
{
	class TvContentRating;
}
namespace android::media::tv
{
	class TvInputInfo;
}
namespace android::media::tv
{
	class TvInputManager_TvInputCallback;
}
namespace android::os
{
	class Handler;
}
class JString;

namespace android::media::tv
{
	class TvInputManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_BLOCKED_RATINGS_CHANGED();
		static JString ACTION_PARENTAL_CONTROLS_ENABLED_CHANGED();
		static JString ACTION_QUERY_CONTENT_RATING_SYSTEMS();
		static JString ACTION_SETUP_INPUTS();
		static JString ACTION_VIEW_RECORDING_SCHEDULES();
		static jint INPUT_STATE_CONNECTED();
		static jint INPUT_STATE_CONNECTED_STANDBY();
		static jint INPUT_STATE_DISCONNECTED();
		static JString META_DATA_CONTENT_RATING_SYSTEMS();
		static jint RECORDING_ERROR_INSUFFICIENT_SPACE();
		static jint RECORDING_ERROR_RESOURCE_BUSY();
		static jint RECORDING_ERROR_UNKNOWN();
		static jlong TIME_SHIFT_INVALID_TIME();
		static jint TIME_SHIFT_STATUS_AVAILABLE();
		static jint TIME_SHIFT_STATUS_UNAVAILABLE();
		static jint TIME_SHIFT_STATUS_UNKNOWN();
		static jint TIME_SHIFT_STATUS_UNSUPPORTED();
		static jint VIDEO_UNAVAILABLE_REASON_AUDIO_ONLY();
		static jint VIDEO_UNAVAILABLE_REASON_BUFFERING();
		static jint VIDEO_UNAVAILABLE_REASON_TUNING();
		static jint VIDEO_UNAVAILABLE_REASON_UNKNOWN();
		static jint VIDEO_UNAVAILABLE_REASON_WEAK_SIGNAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInputManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvInputManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getBlockedRatings() const;
		jint getInputState(JString arg0) const;
		android::media::tv::TvInputInfo getTvInputInfo(JString arg0) const;
		JObject getTvInputList() const;
		jboolean isParentalControlsEnabled() const;
		jboolean isRatingBlocked(android::media::tv::TvContentRating arg0) const;
		void registerCallback(android::media::tv::TvInputManager_TvInputCallback arg0, android::os::Handler arg1) const;
		void unregisterCallback(android::media::tv::TvInputManager_TvInputCallback arg0) const;
		void updateTvInputInfo(android::media::tv::TvInputInfo arg0) const;
	};
} // namespace android::media::tv

