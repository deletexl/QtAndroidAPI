#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::companion
{
	class AssociationRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jstring DEVICE_PROFILE_WATCH();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AssociationRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AssociationRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::companion

