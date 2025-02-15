#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "./Sensor.hpp"
#include "./SensorAdditionalInfo.hpp"

namespace android::hardware
{
	// Fields
	jint SensorAdditionalInfo::TYPE_FRAME_BEGIN()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_FRAME_BEGIN"
		);
	}
	jint SensorAdditionalInfo::TYPE_FRAME_END()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_FRAME_END"
		);
	}
	jint SensorAdditionalInfo::TYPE_INTERNAL_TEMPERATURE()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_INTERNAL_TEMPERATURE"
		);
	}
	jint SensorAdditionalInfo::TYPE_SAMPLING()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_SAMPLING"
		);
	}
	jint SensorAdditionalInfo::TYPE_SENSOR_PLACEMENT()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_SENSOR_PLACEMENT"
		);
	}
	jint SensorAdditionalInfo::TYPE_UNTRACKED_DELAY()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_UNTRACKED_DELAY"
		);
	}
	jint SensorAdditionalInfo::TYPE_VEC3_CALIBRATION()
	{
		return getStaticField<jint>(
			"android.hardware.SensorAdditionalInfo",
			"TYPE_VEC3_CALIBRATION"
		);
	}
	JFloatArray SensorAdditionalInfo::floatValues()
	{
		return getObjectField(
			"floatValues",
			"[F"
		);
	}
	JIntArray SensorAdditionalInfo::intValues()
	{
		return getObjectField(
			"intValues",
			"[I"
		);
	}
	android::hardware::Sensor SensorAdditionalInfo::sensor()
	{
		return getObjectField(
			"sensor",
			"Landroid/hardware/Sensor;"
		);
	}
	jint SensorAdditionalInfo::serial()
	{
		return getField<jint>(
			"serial"
		);
	}
	jint SensorAdditionalInfo::type()
	{
		return getField<jint>(
			"type"
		);
	}
	
	// QJniObject forward
	SensorAdditionalInfo::SensorAdditionalInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::hardware

