#include "../../JString.hpp"
#include "./Sensor.hpp"

namespace android::hardware
{
	// Fields
	jint Sensor::REPORTING_MODE_CONTINUOUS()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"REPORTING_MODE_CONTINUOUS"
		);
	}
	jint Sensor::REPORTING_MODE_ONE_SHOT()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"REPORTING_MODE_ONE_SHOT"
		);
	}
	jint Sensor::REPORTING_MODE_ON_CHANGE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"REPORTING_MODE_ON_CHANGE"
		);
	}
	jint Sensor::REPORTING_MODE_SPECIAL_TRIGGER()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"REPORTING_MODE_SPECIAL_TRIGGER"
		);
	}
	JString Sensor::STRING_TYPE_ACCELEROMETER()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_ACCELEROMETER",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_ACCELEROMETER_UNCALIBRATED()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_ACCELEROMETER_UNCALIBRATED",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_AMBIENT_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_AMBIENT_TEMPERATURE",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_GAME_ROTATION_VECTOR()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GAME_ROTATION_VECTOR",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GEOMAGNETIC_ROTATION_VECTOR",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_GRAVITY()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GRAVITY",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_GYROSCOPE()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GYROSCOPE",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_GYROSCOPE_UNCALIBRATED()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_GYROSCOPE_UNCALIBRATED",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_HEART_BEAT()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_HEART_BEAT",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_HEART_RATE()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_HEART_RATE",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_LIGHT()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_LIGHT",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_LINEAR_ACCELERATION()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_LINEAR_ACCELERATION",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_LOW_LATENCY_OFFBODY_DETECT()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_LOW_LATENCY_OFFBODY_DETECT",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_MAGNETIC_FIELD()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_MAGNETIC_FIELD",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_MAGNETIC_FIELD_UNCALIBRATED",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_MOTION_DETECT()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_MOTION_DETECT",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_ORIENTATION()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_ORIENTATION",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_POSE_6DOF()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_POSE_6DOF",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_PRESSURE()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_PRESSURE",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_PROXIMITY()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_PROXIMITY",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_RELATIVE_HUMIDITY()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_RELATIVE_HUMIDITY",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_ROTATION_VECTOR()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_ROTATION_VECTOR",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_SIGNIFICANT_MOTION()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_SIGNIFICANT_MOTION",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_STATIONARY_DETECT()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_STATIONARY_DETECT",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_STEP_COUNTER()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_STEP_COUNTER",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_STEP_DETECTOR()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_STEP_DETECTOR",
			"Ljava/lang/String;"
		);
	}
	JString Sensor::STRING_TYPE_TEMPERATURE()
	{
		return getStaticObjectField(
			"android.hardware.Sensor",
			"STRING_TYPE_TEMPERATURE",
			"Ljava/lang/String;"
		);
	}
	jint Sensor::TYPE_ACCELEROMETER()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ACCELEROMETER"
		);
	}
	jint Sensor::TYPE_ACCELEROMETER_UNCALIBRATED()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ACCELEROMETER_UNCALIBRATED"
		);
	}
	jint Sensor::TYPE_ALL()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ALL"
		);
	}
	jint Sensor::TYPE_AMBIENT_TEMPERATURE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_AMBIENT_TEMPERATURE"
		);
	}
	jint Sensor::TYPE_DEVICE_PRIVATE_BASE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_DEVICE_PRIVATE_BASE"
		);
	}
	jint Sensor::TYPE_GAME_ROTATION_VECTOR()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GAME_ROTATION_VECTOR"
		);
	}
	jint Sensor::TYPE_GEOMAGNETIC_ROTATION_VECTOR()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GEOMAGNETIC_ROTATION_VECTOR"
		);
	}
	jint Sensor::TYPE_GRAVITY()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GRAVITY"
		);
	}
	jint Sensor::TYPE_GYROSCOPE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GYROSCOPE"
		);
	}
	jint Sensor::TYPE_GYROSCOPE_UNCALIBRATED()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_GYROSCOPE_UNCALIBRATED"
		);
	}
	jint Sensor::TYPE_HEART_BEAT()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_HEART_BEAT"
		);
	}
	jint Sensor::TYPE_HEART_RATE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_HEART_RATE"
		);
	}
	jint Sensor::TYPE_LIGHT()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_LIGHT"
		);
	}
	jint Sensor::TYPE_LINEAR_ACCELERATION()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_LINEAR_ACCELERATION"
		);
	}
	jint Sensor::TYPE_LOW_LATENCY_OFFBODY_DETECT()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_LOW_LATENCY_OFFBODY_DETECT"
		);
	}
	jint Sensor::TYPE_MAGNETIC_FIELD()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_MAGNETIC_FIELD"
		);
	}
	jint Sensor::TYPE_MAGNETIC_FIELD_UNCALIBRATED()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_MAGNETIC_FIELD_UNCALIBRATED"
		);
	}
	jint Sensor::TYPE_MOTION_DETECT()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_MOTION_DETECT"
		);
	}
	jint Sensor::TYPE_ORIENTATION()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ORIENTATION"
		);
	}
	jint Sensor::TYPE_POSE_6DOF()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_POSE_6DOF"
		);
	}
	jint Sensor::TYPE_PRESSURE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_PRESSURE"
		);
	}
	jint Sensor::TYPE_PROXIMITY()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_PROXIMITY"
		);
	}
	jint Sensor::TYPE_RELATIVE_HUMIDITY()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_RELATIVE_HUMIDITY"
		);
	}
	jint Sensor::TYPE_ROTATION_VECTOR()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_ROTATION_VECTOR"
		);
	}
	jint Sensor::TYPE_SIGNIFICANT_MOTION()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_SIGNIFICANT_MOTION"
		);
	}
	jint Sensor::TYPE_STATIONARY_DETECT()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_STATIONARY_DETECT"
		);
	}
	jint Sensor::TYPE_STEP_COUNTER()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_STEP_COUNTER"
		);
	}
	jint Sensor::TYPE_STEP_DETECTOR()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_STEP_DETECTOR"
		);
	}
	jint Sensor::TYPE_TEMPERATURE()
	{
		return getStaticField<jint>(
			"android.hardware.Sensor",
			"TYPE_TEMPERATURE"
		);
	}
	
	// QJniObject forward
	Sensor::Sensor(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Sensor::getFifoMaxEventCount() const
	{
		return callMethod<jint>(
			"getFifoMaxEventCount",
			"()I"
		);
	}
	jint Sensor::getFifoReservedEventCount() const
	{
		return callMethod<jint>(
			"getFifoReservedEventCount",
			"()I"
		);
	}
	jint Sensor::getHighestDirectReportRateLevel() const
	{
		return callMethod<jint>(
			"getHighestDirectReportRateLevel",
			"()I"
		);
	}
	jint Sensor::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint Sensor::getMaxDelay() const
	{
		return callMethod<jint>(
			"getMaxDelay",
			"()I"
		);
	}
	jfloat Sensor::getMaximumRange() const
	{
		return callMethod<jfloat>(
			"getMaximumRange",
			"()F"
		);
	}
	jint Sensor::getMinDelay() const
	{
		return callMethod<jint>(
			"getMinDelay",
			"()I"
		);
	}
	JString Sensor::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jfloat Sensor::getPower() const
	{
		return callMethod<jfloat>(
			"getPower",
			"()F"
		);
	}
	jint Sensor::getReportingMode() const
	{
		return callMethod<jint>(
			"getReportingMode",
			"()I"
		);
	}
	jfloat Sensor::getResolution() const
	{
		return callMethod<jfloat>(
			"getResolution",
			"()F"
		);
	}
	JString Sensor::getStringType() const
	{
		return callObjectMethod(
			"getStringType",
			"()Ljava/lang/String;"
		);
	}
	jint Sensor::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	JString Sensor::getVendor() const
	{
		return callObjectMethod(
			"getVendor",
			"()Ljava/lang/String;"
		);
	}
	jint Sensor::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jboolean Sensor::isAdditionalInfoSupported() const
	{
		return callMethod<jboolean>(
			"isAdditionalInfoSupported",
			"()Z"
		);
	}
	jboolean Sensor::isDirectChannelTypeSupported(jint arg0) const
	{
		return callMethod<jboolean>(
			"isDirectChannelTypeSupported",
			"(I)Z",
			arg0
		);
	}
	jboolean Sensor::isDynamicSensor() const
	{
		return callMethod<jboolean>(
			"isDynamicSensor",
			"()Z"
		);
	}
	jboolean Sensor::isWakeUpSensor() const
	{
		return callMethod<jboolean>(
			"isWakeUpSensor",
			"()Z"
		);
	}
	JString Sensor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware

