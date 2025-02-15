#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioFormat;
}

namespace android::media
{
	class AudioFormat_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioFormat_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioFormat_Builder(QJniObject obj);
		
		// Constructors
		AudioFormat_Builder();
		AudioFormat_Builder(android::media::AudioFormat arg0);
		
		// Methods
		android::media::AudioFormat build() const;
		android::media::AudioFormat_Builder setChannelIndexMask(jint arg0) const;
		android::media::AudioFormat_Builder setChannelMask(jint arg0) const;
		android::media::AudioFormat_Builder setEncoding(jint arg0) const;
		android::media::AudioFormat_Builder setSampleRate(jint arg0) const;
	};
} // namespace android::media

