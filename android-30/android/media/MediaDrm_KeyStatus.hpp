#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace android::media
{
	class MediaDrm_KeyStatus : public JObject
	{
	public:
		// Fields
		static jint STATUS_EXPIRED();
		static jint STATUS_INTERNAL_ERROR();
		static jint STATUS_OUTPUT_NOT_ALLOWED();
		static jint STATUS_PENDING();
		static jint STATUS_USABLE();
		static jint STATUS_USABLE_IN_FUTURE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDrm_KeyStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_KeyStatus(QJniObject obj);
		
		// Constructors
		
		// Methods
		JByteArray getKeyId() const;
		jint getStatusCode() const;
	};
} // namespace android::media

