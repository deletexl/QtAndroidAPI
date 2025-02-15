#include "./PowerManager_WakeLock.hpp"
#include "../../JString.hpp"
#include "./PowerManager.hpp"

namespace android::os
{
	// Fields
	jint PowerManager::ACQUIRE_CAUSES_WAKEUP()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"ACQUIRE_CAUSES_WAKEUP"
		);
	}
	JString PowerManager::ACTION_DEVICE_IDLE_MODE_CHANGED()
	{
		return getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_DEVICE_IDLE_MODE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString PowerManager::ACTION_POWER_SAVE_MODE_CHANGED()
	{
		return getStaticObjectField(
			"android.os.PowerManager",
			"ACTION_POWER_SAVE_MODE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	jint PowerManager::FULL_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"FULL_WAKE_LOCK"
		);
	}
	jint PowerManager::LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_ALL_DISABLED_WHEN_SCREEN_OFF"
		);
	}
	jint PowerManager::LOCATION_MODE_FOREGROUND_ONLY()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_FOREGROUND_ONLY"
		);
	}
	jint PowerManager::LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_GPS_DISABLED_WHEN_SCREEN_OFF"
		);
	}
	jint PowerManager::LOCATION_MODE_NO_CHANGE()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_NO_CHANGE"
		);
	}
	jint PowerManager::LOCATION_MODE_THROTTLE_REQUESTS_WHEN_SCREEN_OFF()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"LOCATION_MODE_THROTTLE_REQUESTS_WHEN_SCREEN_OFF"
		);
	}
	jint PowerManager::ON_AFTER_RELEASE()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"ON_AFTER_RELEASE"
		);
	}
	jint PowerManager::PARTIAL_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"PARTIAL_WAKE_LOCK"
		);
	}
	jint PowerManager::PROXIMITY_SCREEN_OFF_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"PROXIMITY_SCREEN_OFF_WAKE_LOCK"
		);
	}
	jint PowerManager::RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY"
		);
	}
	jint PowerManager::SCREEN_BRIGHT_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"SCREEN_BRIGHT_WAKE_LOCK"
		);
	}
	jint PowerManager::SCREEN_DIM_WAKE_LOCK()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"SCREEN_DIM_WAKE_LOCK"
		);
	}
	jint PowerManager::THERMAL_STATUS_CRITICAL()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_CRITICAL"
		);
	}
	jint PowerManager::THERMAL_STATUS_EMERGENCY()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_EMERGENCY"
		);
	}
	jint PowerManager::THERMAL_STATUS_LIGHT()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_LIGHT"
		);
	}
	jint PowerManager::THERMAL_STATUS_MODERATE()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_MODERATE"
		);
	}
	jint PowerManager::THERMAL_STATUS_NONE()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_NONE"
		);
	}
	jint PowerManager::THERMAL_STATUS_SEVERE()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_SEVERE"
		);
	}
	jint PowerManager::THERMAL_STATUS_SHUTDOWN()
	{
		return getStaticField<jint>(
			"android.os.PowerManager",
			"THERMAL_STATUS_SHUTDOWN"
		);
	}
	
	// QJniObject forward
	PowerManager::PowerManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void PowerManager::addThermalStatusListener(JObject arg0) const
	{
		callMethod<void>(
			"addThermalStatusListener",
			"(Landroid/os/PowerManager$OnThermalStatusChangedListener;)V",
			arg0.object()
		);
	}
	void PowerManager::addThermalStatusListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"addThermalStatusListener",
			"(Ljava/util/concurrent/Executor;Landroid/os/PowerManager$OnThermalStatusChangedListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint PowerManager::getCurrentThermalStatus() const
	{
		return callMethod<jint>(
			"getCurrentThermalStatus",
			"()I"
		);
	}
	jint PowerManager::getLocationPowerSaveMode() const
	{
		return callMethod<jint>(
			"getLocationPowerSaveMode",
			"()I"
		);
	}
	jfloat PowerManager::getThermalHeadroom(jint arg0) const
	{
		return callMethod<jfloat>(
			"getThermalHeadroom",
			"(I)F",
			arg0
		);
	}
	jboolean PowerManager::isDeviceIdleMode() const
	{
		return callMethod<jboolean>(
			"isDeviceIdleMode",
			"()Z"
		);
	}
	jboolean PowerManager::isIgnoringBatteryOptimizations(JString arg0) const
	{
		return callMethod<jboolean>(
			"isIgnoringBatteryOptimizations",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean PowerManager::isInteractive() const
	{
		return callMethod<jboolean>(
			"isInteractive",
			"()Z"
		);
	}
	jboolean PowerManager::isPowerSaveMode() const
	{
		return callMethod<jboolean>(
			"isPowerSaveMode",
			"()Z"
		);
	}
	jboolean PowerManager::isRebootingUserspaceSupported() const
	{
		return callMethod<jboolean>(
			"isRebootingUserspaceSupported",
			"()Z"
		);
	}
	jboolean PowerManager::isScreenOn() const
	{
		return callMethod<jboolean>(
			"isScreenOn",
			"()Z"
		);
	}
	jboolean PowerManager::isSustainedPerformanceModeSupported() const
	{
		return callMethod<jboolean>(
			"isSustainedPerformanceModeSupported",
			"()Z"
		);
	}
	jboolean PowerManager::isWakeLockLevelSupported(jint arg0) const
	{
		return callMethod<jboolean>(
			"isWakeLockLevelSupported",
			"(I)Z",
			arg0
		);
	}
	android::os::PowerManager_WakeLock PowerManager::newWakeLock(jint arg0, JString arg1) const
	{
		return callObjectMethod(
			"newWakeLock",
			"(ILjava/lang/String;)Landroid/os/PowerManager$WakeLock;",
			arg0,
			arg1.object<jstring>()
		);
	}
	void PowerManager::reboot(JString arg0) const
	{
		callMethod<void>(
			"reboot",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void PowerManager::removeThermalStatusListener(JObject arg0) const
	{
		callMethod<void>(
			"removeThermalStatusListener",
			"(Landroid/os/PowerManager$OnThermalStatusChangedListener;)V",
			arg0.object()
		);
	}
} // namespace android::os

