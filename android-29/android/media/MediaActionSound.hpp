#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaActionSound : public JObject
	{
	public:
		// Fields
		static jint FOCUS_COMPLETE();
		static jint SHUTTER_CLICK();
		static jint START_VIDEO_RECORDING();
		static jint STOP_VIDEO_RECORDING();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaActionSound(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaActionSound(QJniObject obj);
		
		// Constructors
		MediaActionSound();
		
		// Methods
		void load(jint arg0) const;
		void play(jint arg0) const;
		void release() const;
	};
} // namespace android::media

