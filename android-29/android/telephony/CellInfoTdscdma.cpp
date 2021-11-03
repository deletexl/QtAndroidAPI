#include "../os/Parcel.hpp"
#include "./CellIdentityTdscdma.hpp"
#include "./CellSignalStrengthTdscdma.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CellInfoTdscdma.hpp"

namespace android::telephony
{
	// Fields
	JObject CellInfoTdscdma::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.CellInfoTdscdma",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CellInfoTdscdma::CellInfoTdscdma(QAndroidJniObject obj) : android::telephony::CellInfo(obj) {}
	
	// Constructors
	
	// Methods
	jint CellInfoTdscdma::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CellInfoTdscdma::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::telephony::CellIdentityTdscdma CellInfoTdscdma::getCellIdentity()
	{
		return callObjectMethod(
			"getCellIdentity",
			"()Landroid/telephony/CellIdentityTdscdma;"
		);
	}
	android::telephony::CellSignalStrengthTdscdma CellInfoTdscdma::getCellSignalStrength()
	{
		return callObjectMethod(
			"getCellSignalStrength",
			"()Landroid/telephony/CellSignalStrengthTdscdma;"
		);
	}
	jint CellInfoTdscdma::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString CellInfoTdscdma::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CellInfoTdscdma::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony

