#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace android::media
{
	class MediaTimestamp : public JObject
	{
	public:
		// Fields
		static android::media::MediaTimestamp TIMESTAMP_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaTimestamp(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaTimestamp(QJniObject obj);
		
		// Constructors
		MediaTimestamp(jlong arg0, jlong arg1, jfloat arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getAnchorMediaTimeUs() const;
		jlong getAnchorSystemNanoTime() const;
		jlong getAnchorSytemNanoTime() const;
		jfloat getMediaClockRate() const;
		JString toString() const;
	};
} // namespace android::media

