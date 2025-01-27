#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::hardware
{
	class Sensor;
}

namespace android::hardware
{
	class TriggerEvent : public JObject
	{
	public:
		// Fields
		android::hardware::Sensor sensor();
		jlong timestamp();
		JFloatArray values();
		
		// QJniObject forward
		template<typename ...Ts> explicit TriggerEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TriggerEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::hardware

