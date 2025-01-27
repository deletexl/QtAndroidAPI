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
class JString;

namespace android::view::contentcapture
{
	class ContentCaptureContext : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentCaptureContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentCaptureContext(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::contentcapture::ContentCaptureContext forLocusId(JString arg0);
		jint describeContents() const;
		android::os::Bundle getExtras() const;
		android::content::LocusId getLocusId() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::contentcapture

