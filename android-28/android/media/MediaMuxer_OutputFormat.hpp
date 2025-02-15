#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaMuxer_OutputFormat : public JObject
	{
	public:
		// Fields
		static jint MUXER_OUTPUT_3GPP();
		static jint MUXER_OUTPUT_HEIF();
		static jint MUXER_OUTPUT_MPEG_4();
		static jint MUXER_OUTPUT_WEBM();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaMuxer_OutputFormat(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaMuxer_OutputFormat(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

