#pragma once

#include "../../__JniBaseClass.hpp"
#include "./CellInfo.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::telephony
{
	class CellIdentity;
}
namespace android::telephony
{
	class CellSignalStrength;
}

namespace android::telephony
{
	class CellInfoNr : public android::telephony::CellInfo
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellInfoNr(const char *className, const char *sig, Ts...agv) : android::telephony::CellInfo(className, sig, std::forward<Ts>(agv)...) {}
		CellInfoNr(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getCellIdentity();
		QAndroidJniObject getCellSignalStrength();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

