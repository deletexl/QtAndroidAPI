#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::camera2
{
	class CameraCharacteristics;
}
namespace android::hardware::camera2
{
	class CameraDevice_StateCallback;
}
namespace android::hardware::camera2
{
	class CameraExtensionCharacteristics;
}
namespace android::hardware::camera2
{
	class CameraManager_AvailabilityCallback;
}
namespace android::hardware::camera2
{
	class CameraManager_TorchCallback;
}
namespace android::os
{
	class Handler;
}

namespace android::hardware::camera2
{
	class CameraManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CameraManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::hardware::camera2::CameraCharacteristics getCameraCharacteristics(jstring arg0);
		android::hardware::camera2::CameraExtensionCharacteristics getCameraExtensionCharacteristics(jstring arg0);
		jarray getCameraIdList();
		__JniBaseClass getConcurrentCameraIds();
		jboolean isConcurrentSessionConfigurationSupported(__JniBaseClass arg0);
		void openCamera(jstring arg0, android::hardware::camera2::CameraDevice_StateCallback arg1, android::os::Handler arg2);
		void openCamera(jstring arg0, __JniBaseClass arg1, android::hardware::camera2::CameraDevice_StateCallback arg2);
		void registerAvailabilityCallback(android::hardware::camera2::CameraManager_AvailabilityCallback arg0, android::os::Handler arg1);
		void registerAvailabilityCallback(__JniBaseClass arg0, android::hardware::camera2::CameraManager_AvailabilityCallback arg1);
		void registerTorchCallback(android::hardware::camera2::CameraManager_TorchCallback arg0, android::os::Handler arg1);
		void registerTorchCallback(__JniBaseClass arg0, android::hardware::camera2::CameraManager_TorchCallback arg1);
		void setTorchMode(jstring arg0, jboolean arg1);
		void unregisterAvailabilityCallback(android::hardware::camera2::CameraManager_AvailabilityCallback arg0);
		void unregisterTorchCallback(android::hardware::camera2::CameraManager_TorchCallback arg0);
	};
} // namespace android::hardware::camera2
