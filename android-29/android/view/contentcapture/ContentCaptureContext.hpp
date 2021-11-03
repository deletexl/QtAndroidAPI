#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class LocusId;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::contentcapture
{
	class ContentCaptureContext_Builder;
}
class JString;

namespace android::view::contentcapture
{
	class ContentCaptureContext : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentCaptureContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureContext(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::contentcapture::ContentCaptureContext forLocusId(JString arg0);
		jint describeContents();
		android::os::Bundle getExtras();
		android::content::LocusId getLocusId();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::contentcapture

