#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::telephony::mbms
{
	class MbmsStreamingSessionCallback;
}
namespace android::telephony::mbms
{
	class StreamingService;
}
namespace android::telephony::mbms
{
	class StreamingServiceCallback;
}
namespace android::telephony::mbms
{
	class StreamingServiceInfo;
}

namespace android::telephony
{
	class MbmsStreamingSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MbmsStreamingSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MbmsStreamingSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::MbmsStreamingSession create(android::content::Context arg0, JObject arg1, android::telephony::mbms::MbmsStreamingSessionCallback arg2);
		static android::telephony::MbmsStreamingSession create(android::content::Context arg0, JObject arg1, jint arg2, android::telephony::mbms::MbmsStreamingSessionCallback arg3);
		void close() const;
		void requestUpdateStreamingServices(JObject arg0) const;
		android::telephony::mbms::StreamingService startStreaming(android::telephony::mbms::StreamingServiceInfo arg0, JObject arg1, android::telephony::mbms::StreamingServiceCallback arg2) const;
	};
} // namespace android::telephony

