#pragma once

#ifndef ANDROID_TELEPHONY_GSM_SMSMESSAGE_SUBMITPDU
#define ANDROID_TELEPHONY_GSM_SMSMESSAGE_SUBMITPDU

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony::gsm
{
	class SmsMessage_SubmitPdu : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject encodedMessage();
		QAndroidJniObject encodedScAddress();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
	};
} // namespace __jni_impl::android::telephony::gsm


namespace __jni_impl::android::telephony::gsm
{
	// Fields
	QAndroidJniObject SmsMessage_SubmitPdu::encodedMessage()
	{
		return __thiz.getObjectField(
			"encodedMessage",
			"[B");
	}
	QAndroidJniObject SmsMessage_SubmitPdu::encodedScAddress()
	{
		return __thiz.getObjectField(
			"encodedScAddress",
			"[B");
	}
	
	// Constructors
	void SmsMessage_SubmitPdu::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.gsm.SmsMessage$SubmitPdu",
			"()V");
	}
	
	// Methods
	QAndroidJniObject SmsMessage_SubmitPdu::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::telephony::gsm

namespace android::telephony::gsm
{
	class SmsMessage_SubmitPdu : public __jni_impl::android::telephony::gsm::SmsMessage_SubmitPdu
	{
	public:
		SmsMessage_SubmitPdu(QAndroidJniObject obj) { __thiz = obj; }
		SmsMessage_SubmitPdu()
		{
			__constructor();
		}
	};
} // namespace android::telephony::gsm

#endif // ANDROID_TELEPHONY_GSM_SMSMESSAGE_SUBMITPDU

