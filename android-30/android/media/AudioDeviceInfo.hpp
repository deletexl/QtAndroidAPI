#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class AudioDeviceInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_AUX_LINE();
		static jint TYPE_BLUETOOTH_A2DP();
		static jint TYPE_BLUETOOTH_SCO();
		static jint TYPE_BUILTIN_EARPIECE();
		static jint TYPE_BUILTIN_MIC();
		static jint TYPE_BUILTIN_SPEAKER();
		static jint TYPE_BUILTIN_SPEAKER_SAFE();
		static jint TYPE_BUS();
		static jint TYPE_DOCK();
		static jint TYPE_FM();
		static jint TYPE_FM_TUNER();
		static jint TYPE_HDMI();
		static jint TYPE_HDMI_ARC();
		static jint TYPE_HEARING_AID();
		static jint TYPE_IP();
		static jint TYPE_LINE_ANALOG();
		static jint TYPE_LINE_DIGITAL();
		static jint TYPE_TELEPHONY();
		static jint TYPE_TV_TUNER();
		static jint TYPE_UNKNOWN();
		static jint TYPE_USB_ACCESSORY();
		static jint TYPE_USB_DEVICE();
		static jint TYPE_USB_HEADSET();
		static jint TYPE_WIRED_HEADPHONES();
		static jint TYPE_WIRED_HEADSET();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioDeviceInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioDeviceInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getAddress();
		jintArray getChannelCounts();
		jintArray getChannelIndexMasks();
		jintArray getChannelMasks();
		jintArray getEncapsulationMetadataTypes();
		jintArray getEncapsulationModes();
		jintArray getEncodings();
		jint getId();
		jstring getProductName();
		jintArray getSampleRates();
		jint getType();
		jint hashCode();
		jboolean isSink();
		jboolean isSource();
	};
} // namespace android::media
