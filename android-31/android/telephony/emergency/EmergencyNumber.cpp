#include "../../os/Parcel.hpp"
#include "./EmergencyNumber.hpp"

namespace android::telephony::emergency
{
	// Fields
	__JniBaseClass EmergencyNumber::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.emergency.EmergencyNumber",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint EmergencyNumber::EMERGENCY_CALL_ROUTING_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_CALL_ROUTING_EMERGENCY"
		);
	}
	jint EmergencyNumber::EMERGENCY_CALL_ROUTING_NORMAL()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_CALL_ROUTING_NORMAL"
		);
	}
	jint EmergencyNumber::EMERGENCY_CALL_ROUTING_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_CALL_ROUTING_UNKNOWN"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_DATABASE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_DATABASE"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_DEFAULT"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_MODEM_CONFIG()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_MODEM_CONFIG"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_NETWORK_SIGNALING()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_NETWORK_SIGNALING"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_SIM()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_SIM"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_AIEC()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_AIEC"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_AMBULANCE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_AMBULANCE"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_FIRE_BRIGADE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_FIRE_BRIGADE"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_MARINE_GUARD()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_MARINE_GUARD"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_MIEC()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_MIEC"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_MOUNTAIN_RESCUE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_MOUNTAIN_RESCUE"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_POLICE()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_POLICE"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_UNSPECIFIED"
		);
	}
	
	// QAndroidJniObject forward
	EmergencyNumber::EmergencyNumber(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint EmergencyNumber::compareTo(android::telephony::emergency::EmergencyNumber arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/telephony/emergency/EmergencyNumber;)I",
			arg0.object()
		);
	}
	jint EmergencyNumber::compareTo(jobject arg0)
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint EmergencyNumber::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean EmergencyNumber::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring EmergencyNumber::getCountryIso()
	{
		return callObjectMethod(
			"getCountryIso",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint EmergencyNumber::getEmergencyCallRouting()
	{
		return callMethod<jint>(
			"getEmergencyCallRouting",
			"()I"
		);
	}
	__JniBaseClass EmergencyNumber::getEmergencyNumberSources()
	{
		return callObjectMethod(
			"getEmergencyNumberSources",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass EmergencyNumber::getEmergencyServiceCategories()
	{
		return callObjectMethod(
			"getEmergencyServiceCategories",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass EmergencyNumber::getEmergencyUrns()
	{
		return callObjectMethod(
			"getEmergencyUrns",
			"()Ljava/util/List;"
		);
	}
	jstring EmergencyNumber::getMnc()
	{
		return callObjectMethod(
			"getMnc",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EmergencyNumber::getNumber()
	{
		return callObjectMethod(
			"getNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint EmergencyNumber::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean EmergencyNumber::isFromSources(jint arg0)
	{
		return callMethod<jboolean>(
			"isFromSources",
			"(I)Z",
			arg0
		);
	}
	jboolean EmergencyNumber::isInEmergencyServiceCategories(jint arg0)
	{
		return callMethod<jboolean>(
			"isInEmergencyServiceCategories",
			"(I)Z",
			arg0
		);
	}
	jstring EmergencyNumber::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void EmergencyNumber::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::emergency

