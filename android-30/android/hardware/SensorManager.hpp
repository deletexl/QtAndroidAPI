#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::hardware
{
	class HardwareBuffer;
}
namespace android::hardware
{
	class Sensor;
}
namespace android::hardware
{
	class SensorDirectChannel;
}
namespace android::hardware
{
	class SensorManager_DynamicSensorCallback;
}
namespace android::hardware
{
	class TriggerEventListener;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class MemoryFile;
}

namespace android::hardware
{
	class SensorManager : public JObject
	{
	public:
		// Fields
		static jint AXIS_MINUS_X();
		static jint AXIS_MINUS_Y();
		static jint AXIS_MINUS_Z();
		static jint AXIS_X();
		static jint AXIS_Y();
		static jint AXIS_Z();
		static jint DATA_X();
		static jint DATA_Y();
		static jint DATA_Z();
		static jfloat GRAVITY_DEATH_STAR_I();
		static jfloat GRAVITY_EARTH();
		static jfloat GRAVITY_JUPITER();
		static jfloat GRAVITY_MARS();
		static jfloat GRAVITY_MERCURY();
		static jfloat GRAVITY_MOON();
		static jfloat GRAVITY_NEPTUNE();
		static jfloat GRAVITY_PLUTO();
		static jfloat GRAVITY_SATURN();
		static jfloat GRAVITY_SUN();
		static jfloat GRAVITY_THE_ISLAND();
		static jfloat GRAVITY_URANUS();
		static jfloat GRAVITY_VENUS();
		static jfloat LIGHT_CLOUDY();
		static jfloat LIGHT_FULLMOON();
		static jfloat LIGHT_NO_MOON();
		static jfloat LIGHT_OVERCAST();
		static jfloat LIGHT_SHADE();
		static jfloat LIGHT_SUNLIGHT();
		static jfloat LIGHT_SUNLIGHT_MAX();
		static jfloat LIGHT_SUNRISE();
		static jfloat MAGNETIC_FIELD_EARTH_MAX();
		static jfloat MAGNETIC_FIELD_EARTH_MIN();
		static jfloat PRESSURE_STANDARD_ATMOSPHERE();
		static jint RAW_DATA_INDEX();
		static jint RAW_DATA_X();
		static jint RAW_DATA_Y();
		static jint RAW_DATA_Z();
		static jint SENSOR_ACCELEROMETER();
		static jint SENSOR_ALL();
		static jint SENSOR_DELAY_FASTEST();
		static jint SENSOR_DELAY_GAME();
		static jint SENSOR_DELAY_NORMAL();
		static jint SENSOR_DELAY_UI();
		static jint SENSOR_LIGHT();
		static jint SENSOR_MAGNETIC_FIELD();
		static jint SENSOR_MAX();
		static jint SENSOR_MIN();
		static jint SENSOR_ORIENTATION();
		static jint SENSOR_ORIENTATION_RAW();
		static jint SENSOR_PROXIMITY();
		static jint SENSOR_STATUS_ACCURACY_HIGH();
		static jint SENSOR_STATUS_ACCURACY_LOW();
		static jint SENSOR_STATUS_ACCURACY_MEDIUM();
		static jint SENSOR_STATUS_NO_CONTACT();
		static jint SENSOR_STATUS_UNRELIABLE();
		static jint SENSOR_TEMPERATURE();
		static jint SENSOR_TRICORDER();
		static jfloat STANDARD_GRAVITY();
		
		// QJniObject forward
		template<typename ...Ts> explicit SensorManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SensorManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jfloat getAltitude(jfloat arg0, jfloat arg1);
		static void getAngleChange(JFloatArray arg0, JFloatArray arg1, JFloatArray arg2);
		static jfloat getInclination(JFloatArray arg0);
		static JFloatArray getOrientation(JFloatArray arg0, JFloatArray arg1);
		static void getQuaternionFromVector(JFloatArray arg0, JFloatArray arg1);
		static jboolean getRotationMatrix(JFloatArray arg0, JFloatArray arg1, JFloatArray arg2, JFloatArray arg3);
		static void getRotationMatrixFromVector(JFloatArray arg0, JFloatArray arg1);
		static jboolean remapCoordinateSystem(JFloatArray arg0, jint arg1, jint arg2, JFloatArray arg3);
		jboolean cancelTriggerSensor(android::hardware::TriggerEventListener arg0, android::hardware::Sensor arg1) const;
		android::hardware::SensorDirectChannel createDirectChannel(android::hardware::HardwareBuffer arg0) const;
		android::hardware::SensorDirectChannel createDirectChannel(android::os::MemoryFile arg0) const;
		jboolean flush(JObject arg0) const;
		android::hardware::Sensor getDefaultSensor(jint arg0) const;
		android::hardware::Sensor getDefaultSensor(jint arg0, jboolean arg1) const;
		JObject getDynamicSensorList(jint arg0) const;
		JObject getSensorList(jint arg0) const;
		jint getSensors() const;
		jboolean isDynamicSensorDiscoverySupported() const;
		void registerDynamicSensorCallback(android::hardware::SensorManager_DynamicSensorCallback arg0) const;
		void registerDynamicSensorCallback(android::hardware::SensorManager_DynamicSensorCallback arg0, android::os::Handler arg1) const;
		jboolean registerListener(JObject arg0, jint arg1) const;
		jboolean registerListener(JObject arg0, android::hardware::Sensor arg1, jint arg2) const;
		jboolean registerListener(JObject arg0, jint arg1, jint arg2) const;
		jboolean registerListener(JObject arg0, android::hardware::Sensor arg1, jint arg2, android::os::Handler arg3) const;
		jboolean registerListener(JObject arg0, android::hardware::Sensor arg1, jint arg2, jint arg3) const;
		jboolean registerListener(JObject arg0, android::hardware::Sensor arg1, jint arg2, jint arg3, android::os::Handler arg4) const;
		jboolean requestTriggerSensor(android::hardware::TriggerEventListener arg0, android::hardware::Sensor arg1) const;
		void unregisterDynamicSensorCallback(android::hardware::SensorManager_DynamicSensorCallback arg0) const;
		void unregisterListener(JObject arg0) const;
		void unregisterListener(JObject arg0, android::hardware::Sensor arg1) const;
		void unregisterListener(JObject arg0, jint arg1) const;
	};
} // namespace android::hardware

