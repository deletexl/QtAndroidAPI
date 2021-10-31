#include "./GnssMeasurementsEvent.hpp"
#include "./GnssMeasurementsEvent_Callback.hpp"

namespace android::location
{
	// Fields
	jint GnssMeasurementsEvent_Callback::STATUS_LOCATION_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_LOCATION_DISABLED"
		);
	}
	jint GnssMeasurementsEvent_Callback::STATUS_NOT_ALLOWED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_NOT_ALLOWED"
		);
	}
	jint GnssMeasurementsEvent_Callback::STATUS_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_NOT_SUPPORTED"
		);
	}
	jint GnssMeasurementsEvent_Callback::STATUS_READY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurementsEvent$Callback",
			"STATUS_READY"
		);
	}
	
	// QAndroidJniObject forward
	GnssMeasurementsEvent_Callback::GnssMeasurementsEvent_Callback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GnssMeasurementsEvent_Callback::GnssMeasurementsEvent_Callback()
		: __JniBaseClass(
			"android.location.GnssMeasurementsEvent$Callback",
			"()V"
		) {}
	
	// Methods
	void GnssMeasurementsEvent_Callback::onGnssMeasurementsReceived(android::location::GnssMeasurementsEvent arg0)
	{
		callMethod<void>(
			"onGnssMeasurementsReceived",
			"(Landroid/location/GnssMeasurementsEvent;)V",
			arg0.object()
		);
	}
	void GnssMeasurementsEvent_Callback::onStatusChanged(jint arg0)
	{
		callMethod<void>(
			"onStatusChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::location

