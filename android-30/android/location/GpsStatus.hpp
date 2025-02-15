#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GnssStatus;
}

namespace android::location
{
	class GpsStatus : public JObject
	{
	public:
		// Fields
		static jint GPS_EVENT_FIRST_FIX();
		static jint GPS_EVENT_SATELLITE_STATUS();
		static jint GPS_EVENT_STARTED();
		static jint GPS_EVENT_STOPPED();
		
		// QJniObject forward
		template<typename ...Ts> explicit GpsStatus(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GpsStatus(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::location::GpsStatus create(android::location::GnssStatus arg0, jint arg1);
		jint getMaxSatellites() const;
		JObject getSatellites() const;
		jint getTimeToFirstFix() const;
	};
} // namespace android::location

