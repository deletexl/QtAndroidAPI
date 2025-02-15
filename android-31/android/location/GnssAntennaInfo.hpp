#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GnssAntennaInfo_PhaseCenterOffset;
}
namespace android::location
{
	class GnssAntennaInfo_SphericalCorrections;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::location
{
	class GnssAntennaInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssAntennaInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssAntennaInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jdouble getCarrierFrequencyMHz() const;
		android::location::GnssAntennaInfo_PhaseCenterOffset getPhaseCenterOffset() const;
		android::location::GnssAntennaInfo_SphericalCorrections getPhaseCenterVariationCorrections() const;
		android::location::GnssAntennaInfo_SphericalCorrections getSignalGainCorrections() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location

