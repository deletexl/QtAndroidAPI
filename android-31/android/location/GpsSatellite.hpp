#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GpsSatellite : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GpsSatellite(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GpsSatellite(QJniObject obj);
		
		// Constructors
		
		// Methods
		jfloat getAzimuth() const;
		jfloat getElevation() const;
		jint getPrn() const;
		jfloat getSnr() const;
		jboolean hasAlmanac() const;
		jboolean hasEphemeris() const;
		jboolean usedInFix() const;
	};
} // namespace android::location

