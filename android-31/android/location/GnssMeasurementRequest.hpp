#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::location
{
	class GnssMeasurementRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssMeasurementRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssMeasurementRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean isFullTracking();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

