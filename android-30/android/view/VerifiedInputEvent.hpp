#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class VerifiedInputEvent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit VerifiedInputEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VerifiedInputEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getDeviceId() const;
		jint getDisplayId() const;
		jlong getEventTimeNanos() const;
		jint getSource() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

