#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GnssClock;
}
namespace android::os
{
	class Parcel;
}

namespace android::location
{
	class GnssMeasurementsEvent : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssMeasurementsEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssMeasurementsEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::location::GnssClock getClock();
		JObject getMeasurements();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

