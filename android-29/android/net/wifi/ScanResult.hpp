#pragma once

#ifndef ANDROID_NET_WIFI_SCANRESULT
#define ANDROID_NET_WIFI_SCANRESULT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi
{
	class ScanResult : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject BSSID();
		static jint CHANNEL_WIDTH_160MHZ();
		static jint CHANNEL_WIDTH_20MHZ();
		static jint CHANNEL_WIDTH_40MHZ();
		static jint CHANNEL_WIDTH_80MHZ();
		static jint CHANNEL_WIDTH_80MHZ_PLUS_MHZ();
		QAndroidJniObject SSID();
		QAndroidJniObject capabilities();
		jint centerFreq0();
		jint centerFreq1();
		jint channelWidth();
		jint frequency();
		jint level();
		QAndroidJniObject operatorFriendlyName();
		jlong timestamp();
		QAndroidJniObject venueName();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jboolean is80211mcResponder();
		jboolean isPasspointNetwork();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	QAndroidJniObject ScanResult::BSSID()
	{
		return __thiz.getObjectField(
			"BSSID",
			"Ljava/lang/String;");
	}
	jint ScanResult::CHANNEL_WIDTH_160MHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_160MHZ");
	}
	jint ScanResult::CHANNEL_WIDTH_20MHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_20MHZ");
	}
	jint ScanResult::CHANNEL_WIDTH_40MHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_40MHZ");
	}
	jint ScanResult::CHANNEL_WIDTH_80MHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_80MHZ");
	}
	jint ScanResult::CHANNEL_WIDTH_80MHZ_PLUS_MHZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.ScanResult",
			"CHANNEL_WIDTH_80MHZ_PLUS_MHZ");
	}
	QAndroidJniObject ScanResult::SSID()
	{
		return __thiz.getObjectField(
			"SSID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ScanResult::capabilities()
	{
		return __thiz.getObjectField(
			"capabilities",
			"Ljava/lang/String;");
	}
	jint ScanResult::centerFreq0()
	{
		return __thiz.getField<jint>(
			"centerFreq0");
	}
	jint ScanResult::centerFreq1()
	{
		return __thiz.getField<jint>(
			"centerFreq1");
	}
	jint ScanResult::channelWidth()
	{
		return __thiz.getField<jint>(
			"channelWidth");
	}
	jint ScanResult::frequency()
	{
		return __thiz.getField<jint>(
			"frequency");
	}
	jint ScanResult::level()
	{
		return __thiz.getField<jint>(
			"level");
	}
	QAndroidJniObject ScanResult::operatorFriendlyName()
	{
		return __thiz.getObjectField(
			"operatorFriendlyName",
			"Ljava/lang/CharSequence;");
	}
	jlong ScanResult::timestamp()
	{
		return __thiz.getField<jlong>(
			"timestamp");
	}
	QAndroidJniObject ScanResult::venueName()
	{
		return __thiz.getObjectField(
			"venueName",
			"Ljava/lang/CharSequence;");
	}
	
	// Constructors
	void ScanResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.ScanResult",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ScanResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jboolean ScanResult::is80211mcResponder()
	{
		return __thiz.callMethod<jboolean>(
			"is80211mcResponder",
			"()Z");
	}
	jboolean ScanResult::isPasspointNetwork()
	{
		return __thiz.callMethod<jboolean>(
			"isPasspointNetwork",
			"()Z");
	}
	jint ScanResult::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ScanResult::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class ScanResult : public __jni_impl::android::net::wifi::ScanResult
	{
	public:
		ScanResult(QAndroidJniObject obj) { __thiz = obj; }
		ScanResult()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

#endif // ANDROID_NET_WIFI_SCANRESULT
