#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::mbms
{
	class MbmsErrors_DownloadErrors : public JObject
	{
	public:
		// Fields
		static jint ERROR_CANNOT_CHANGE_TEMP_FILE_ROOT();
		static jint ERROR_MALFORMED_SERVICE_ANNOUNCEMENT();
		static jint ERROR_UNKNOWN_DOWNLOAD_REQUEST();
		static jint ERROR_UNKNOWN_FILE_INFO();
		
		// QJniObject forward
		template<typename ...Ts> explicit MbmsErrors_DownloadErrors(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsErrors_DownloadErrors(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony::mbms

