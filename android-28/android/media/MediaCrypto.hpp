#pragma once

#include "../../JObject.hpp"

namespace java::util
{
	class UUID;
}

namespace android::media
{
	class MediaCrypto : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCrypto(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCrypto(QAndroidJniObject obj);
		
		// Constructors
		MediaCrypto(java::util::UUID arg0, jbyteArray arg1);
		
		// Methods
		static jboolean isCryptoSchemeSupported(java::util::UUID arg0);
		void release();
		jboolean requiresSecureDecoderComponent(jstring arg0);
		void setMediaDrmSession(jbyteArray arg0);
	};
} // namespace android::media

