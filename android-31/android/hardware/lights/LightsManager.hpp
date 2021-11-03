#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::lights
{
	class Light;
}
namespace android::hardware::lights
{
	class LightState;
}
namespace android::hardware::lights
{
	class LightsManager_LightsSession;
}

namespace android::hardware::lights
{
	class LightsManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LightsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LightsManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::hardware::lights::LightState getLightState(android::hardware::lights::Light arg0);
		JObject getLights();
		android::hardware::lights::LightsManager_LightsSession openSession();
	};
} // namespace android::hardware::lights

