#pragma once

#ifndef ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_BANDBASE
#define ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_BANDBASE

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::audiofx
{
	class DynamicsProcessing_BandBase : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jboolean arg0, jfloat arg1);
		
		// Methods
		QAndroidJniObject toString();
		jboolean isEnabled();
		jfloat getCutoffFrequency();
		void setCutoffFrequency(jfloat arg0);
		void setEnabled(jboolean arg0);
	};
} // namespace __jni_impl::android::media::audiofx


namespace __jni_impl::android::media::audiofx
{
	// Fields
	
	// Constructors
	void DynamicsProcessing_BandBase::__constructor(jboolean arg0, jfloat arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.DynamicsProcessing$BandBase",
			"(ZF)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject DynamicsProcessing_BandBase::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jboolean DynamicsProcessing_BandBase::isEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isEnabled",
			"()Z");
	}
	jfloat DynamicsProcessing_BandBase::getCutoffFrequency()
	{
		return __thiz.callMethod<jfloat>(
			"getCutoffFrequency",
			"()F");
	}
	void DynamicsProcessing_BandBase::setCutoffFrequency(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setCutoffFrequency",
			"(F)V",
			arg0);
	}
	void DynamicsProcessing_BandBase::setEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::media::audiofx

namespace android::media::audiofx
{
	class DynamicsProcessing_BandBase : public __jni_impl::android::media::audiofx::DynamicsProcessing_BandBase
	{
	public:
		DynamicsProcessing_BandBase(QAndroidJniObject obj) { __thiz = obj; }
		DynamicsProcessing_BandBase(jboolean arg0, jfloat arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media::audiofx

#endif // ANDROID_MEDIA_AUDIOFX_DYNAMICSPROCESSING_BANDBASE
