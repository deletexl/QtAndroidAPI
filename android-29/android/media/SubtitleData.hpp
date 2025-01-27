#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace android::media
{
	class SubtitleData : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SubtitleData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubtitleData(QJniObject obj);
		
		// Constructors
		SubtitleData(jint arg0, jlong arg1, jlong arg2, JByteArray arg3);
		
		// Methods
		JByteArray getData() const;
		jlong getDurationUs() const;
		jlong getStartTimeUs() const;
		jint getTrackIndex() const;
	};
} // namespace android::media

