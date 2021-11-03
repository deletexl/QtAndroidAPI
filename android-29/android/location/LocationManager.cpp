#include "../app/PendingIntent.hpp"
#include "./Criteria.hpp"
#include "./GnssMeasurementsEvent_Callback.hpp"
#include "./GnssNavigationMessage_Callback.hpp"
#include "./GnssStatus_Callback.hpp"
#include "./GpsStatus.hpp"
#include "./Location.hpp"
#include "./LocationProvider.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../os/Looper.hpp"
#include "../../JString.hpp"
#include "./LocationManager.hpp"

namespace android::location
{
	// Fields
	JString LocationManager::EXTRA_PROVIDER_NAME()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"EXTRA_PROVIDER_NAME",
			"Ljava/lang/String;"
		);
	}
	JString LocationManager::GPS_PROVIDER()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"GPS_PROVIDER",
			"Ljava/lang/String;"
		);
	}
	JString LocationManager::KEY_LOCATION_CHANGED()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"KEY_LOCATION_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString LocationManager::KEY_PROVIDER_ENABLED()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"KEY_PROVIDER_ENABLED",
			"Ljava/lang/String;"
		);
	}
	JString LocationManager::KEY_PROXIMITY_ENTERING()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"KEY_PROXIMITY_ENTERING",
			"Ljava/lang/String;"
		);
	}
	JString LocationManager::KEY_STATUS_CHANGED()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"KEY_STATUS_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString LocationManager::MODE_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"MODE_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString LocationManager::NETWORK_PROVIDER()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"NETWORK_PROVIDER",
			"Ljava/lang/String;"
		);
	}
	JString LocationManager::PASSIVE_PROVIDER()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"PASSIVE_PROVIDER",
			"Ljava/lang/String;"
		);
	}
	JString LocationManager::PROVIDERS_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.location.LocationManager",
			"PROVIDERS_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	LocationManager::LocationManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean LocationManager::addGpsStatusListener(JObject arg0)
	{
		return callMethod<jboolean>(
			"addGpsStatusListener",
			"(Landroid/location/GpsStatus$Listener;)Z",
			arg0.object()
		);
	}
	jboolean LocationManager::addNmeaListener(JObject arg0)
	{
		return callMethod<jboolean>(
			"addNmeaListener",
			"(Landroid/location/OnNmeaMessageListener;)Z",
			arg0.object()
		);
	}
	jboolean LocationManager::addNmeaListener(JObject arg0, android::os::Handler arg1)
	{
		return callMethod<jboolean>(
			"addNmeaListener",
			"(Landroid/location/OnNmeaMessageListener;Landroid/os/Handler;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void LocationManager::addProximityAlert(jdouble arg0, jdouble arg1, jfloat arg2, jlong arg3, android::app::PendingIntent arg4)
	{
		callMethod<void>(
			"addProximityAlert",
			"(DDFJLandroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void LocationManager::addTestProvider(JString arg0, jboolean arg1, jboolean arg2, jboolean arg3, jboolean arg4, jboolean arg5, jboolean arg6, jboolean arg7, jint arg8, jint arg9)
	{
		callMethod<void>(
			"addTestProvider",
			"(Ljava/lang/String;ZZZZZZZII)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9
		);
	}
	void LocationManager::clearTestProviderEnabled(JString arg0)
	{
		callMethod<void>(
			"clearTestProviderEnabled",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void LocationManager::clearTestProviderLocation(JString arg0)
	{
		callMethod<void>(
			"clearTestProviderLocation",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void LocationManager::clearTestProviderStatus(JString arg0)
	{
		callMethod<void>(
			"clearTestProviderStatus",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JObject LocationManager::getAllProviders()
	{
		return callObjectMethod(
			"getAllProviders",
			"()Ljava/util/List;"
		);
	}
	JString LocationManager::getBestProvider(android::location::Criteria arg0, jboolean arg1)
	{
		return callObjectMethod(
			"getBestProvider",
			"(Landroid/location/Criteria;Z)Ljava/lang/String;",
			arg0.object(),
			arg1
		);
	}
	JString LocationManager::getGnssHardwareModelName()
	{
		return callObjectMethod(
			"getGnssHardwareModelName",
			"()Ljava/lang/String;"
		);
	}
	jint LocationManager::getGnssYearOfHardware()
	{
		return callMethod<jint>(
			"getGnssYearOfHardware",
			"()I"
		);
	}
	android::location::GpsStatus LocationManager::getGpsStatus(android::location::GpsStatus arg0)
	{
		return callObjectMethod(
			"getGpsStatus",
			"(Landroid/location/GpsStatus;)Landroid/location/GpsStatus;",
			arg0.object()
		);
	}
	android::location::Location LocationManager::getLastKnownLocation(JString arg0)
	{
		return callObjectMethod(
			"getLastKnownLocation",
			"(Ljava/lang/String;)Landroid/location/Location;",
			arg0.object<jstring>()
		);
	}
	android::location::LocationProvider LocationManager::getProvider(JString arg0)
	{
		return callObjectMethod(
			"getProvider",
			"(Ljava/lang/String;)Landroid/location/LocationProvider;",
			arg0.object<jstring>()
		);
	}
	JObject LocationManager::getProviders(jboolean arg0)
	{
		return callObjectMethod(
			"getProviders",
			"(Z)Ljava/util/List;",
			arg0
		);
	}
	JObject LocationManager::getProviders(android::location::Criteria arg0, jboolean arg1)
	{
		return callObjectMethod(
			"getProviders",
			"(Landroid/location/Criteria;Z)Ljava/util/List;",
			arg0.object(),
			arg1
		);
	}
	jboolean LocationManager::isLocationEnabled()
	{
		return callMethod<jboolean>(
			"isLocationEnabled",
			"()Z"
		);
	}
	jboolean LocationManager::isProviderEnabled(JString arg0)
	{
		return callMethod<jboolean>(
			"isProviderEnabled",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean LocationManager::registerGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0)
	{
		return callMethod<jboolean>(
			"registerGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementsEvent$Callback;)Z",
			arg0.object()
		);
	}
	jboolean LocationManager::registerGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0, android::os::Handler arg1)
	{
		return callMethod<jboolean>(
			"registerGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementsEvent$Callback;Landroid/os/Handler;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean LocationManager::registerGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0)
	{
		return callMethod<jboolean>(
			"registerGnssNavigationMessageCallback",
			"(Landroid/location/GnssNavigationMessage$Callback;)Z",
			arg0.object()
		);
	}
	jboolean LocationManager::registerGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0, android::os::Handler arg1)
	{
		return callMethod<jboolean>(
			"registerGnssNavigationMessageCallback",
			"(Landroid/location/GnssNavigationMessage$Callback;Landroid/os/Handler;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean LocationManager::registerGnssStatusCallback(android::location::GnssStatus_Callback arg0)
	{
		return callMethod<jboolean>(
			"registerGnssStatusCallback",
			"(Landroid/location/GnssStatus$Callback;)Z",
			arg0.object()
		);
	}
	jboolean LocationManager::registerGnssStatusCallback(android::location::GnssStatus_Callback arg0, android::os::Handler arg1)
	{
		return callMethod<jboolean>(
			"registerGnssStatusCallback",
			"(Landroid/location/GnssStatus$Callback;Landroid/os/Handler;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void LocationManager::removeGpsStatusListener(JObject arg0)
	{
		callMethod<void>(
			"removeGpsStatusListener",
			"(Landroid/location/GpsStatus$Listener;)V",
			arg0.object()
		);
	}
	void LocationManager::removeNmeaListener(JObject arg0)
	{
		callMethod<void>(
			"removeNmeaListener",
			"(Landroid/location/OnNmeaMessageListener;)V",
			arg0.object()
		);
	}
	void LocationManager::removeProximityAlert(android::app::PendingIntent arg0)
	{
		callMethod<void>(
			"removeProximityAlert",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	void LocationManager::removeTestProvider(JString arg0)
	{
		callMethod<void>(
			"removeTestProvider",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void LocationManager::removeUpdates(android::app::PendingIntent arg0)
	{
		callMethod<void>(
			"removeUpdates",
			"(Landroid/app/PendingIntent;)V",
			arg0.object()
		);
	}
	void LocationManager::removeUpdates(JObject arg0)
	{
		callMethod<void>(
			"removeUpdates",
			"(Landroid/location/LocationListener;)V",
			arg0.object()
		);
	}
	void LocationManager::requestLocationUpdates(JString arg0, jlong arg1, jfloat arg2, android::app::PendingIntent arg3)
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLandroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void LocationManager::requestLocationUpdates(JString arg0, jlong arg1, jfloat arg2, JObject arg3)
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLandroid/location/LocationListener;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void LocationManager::requestLocationUpdates(jlong arg0, jfloat arg1, android::location::Criteria arg2, android::app::PendingIntent arg3)
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(JFLandroid/location/Criteria;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void LocationManager::requestLocationUpdates(JString arg0, jlong arg1, jfloat arg2, JObject arg3, android::os::Looper arg4)
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(Ljava/lang/String;JFLandroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	void LocationManager::requestLocationUpdates(jlong arg0, jfloat arg1, android::location::Criteria arg2, JObject arg3, android::os::Looper arg4)
	{
		callMethod<void>(
			"requestLocationUpdates",
			"(JFLandroid/location/Criteria;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	void LocationManager::requestSingleUpdate(android::location::Criteria arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"requestSingleUpdate",
			"(Landroid/location/Criteria;Landroid/app/PendingIntent;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void LocationManager::requestSingleUpdate(JString arg0, android::app::PendingIntent arg1)
	{
		callMethod<void>(
			"requestSingleUpdate",
			"(Ljava/lang/String;Landroid/app/PendingIntent;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void LocationManager::requestSingleUpdate(android::location::Criteria arg0, JObject arg1, android::os::Looper arg2)
	{
		callMethod<void>(
			"requestSingleUpdate",
			"(Landroid/location/Criteria;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void LocationManager::requestSingleUpdate(JString arg0, JObject arg1, android::os::Looper arg2)
	{
		callMethod<void>(
			"requestSingleUpdate",
			"(Ljava/lang/String;Landroid/location/LocationListener;Landroid/os/Looper;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean LocationManager::sendExtraCommand(JString arg0, JString arg1, android::os::Bundle arg2)
	{
		return callMethod<jboolean>(
			"sendExtraCommand",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Z",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	void LocationManager::setTestProviderEnabled(JString arg0, jboolean arg1)
	{
		callMethod<void>(
			"setTestProviderEnabled",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void LocationManager::setTestProviderLocation(JString arg0, android::location::Location arg1)
	{
		callMethod<void>(
			"setTestProviderLocation",
			"(Ljava/lang/String;Landroid/location/Location;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void LocationManager::setTestProviderStatus(JString arg0, jint arg1, android::os::Bundle arg2, jlong arg3)
	{
		callMethod<void>(
			"setTestProviderStatus",
			"(Ljava/lang/String;ILandroid/os/Bundle;J)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	void LocationManager::unregisterGnssMeasurementsCallback(android::location::GnssMeasurementsEvent_Callback arg0)
	{
		callMethod<void>(
			"unregisterGnssMeasurementsCallback",
			"(Landroid/location/GnssMeasurementsEvent$Callback;)V",
			arg0.object()
		);
	}
	void LocationManager::unregisterGnssNavigationMessageCallback(android::location::GnssNavigationMessage_Callback arg0)
	{
		callMethod<void>(
			"unregisterGnssNavigationMessageCallback",
			"(Landroid/location/GnssNavigationMessage$Callback;)V",
			arg0.object()
		);
	}
	void LocationManager::unregisterGnssStatusCallback(android::location::GnssStatus_Callback arg0)
	{
		callMethod<void>(
			"unregisterGnssStatusCallback",
			"(Landroid/location/GnssStatus$Callback;)V",
			arg0.object()
		);
	}
} // namespace android::location

