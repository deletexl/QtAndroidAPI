#include "./SmsMessage_MessageClass.hpp"

namespace android::telephony
{
	// Fields
	android::telephony::SmsMessage_MessageClass SmsMessage_MessageClass::CLASS_0()
	{
		return getStaticObjectField(
			"android.telephony.SmsMessage$MessageClass",
			"CLASS_0",
			"Landroid/telephony/SmsMessage$MessageClass;"
		);
	}
	android::telephony::SmsMessage_MessageClass SmsMessage_MessageClass::CLASS_1()
	{
		return getStaticObjectField(
			"android.telephony.SmsMessage$MessageClass",
			"CLASS_1",
			"Landroid/telephony/SmsMessage$MessageClass;"
		);
	}
	android::telephony::SmsMessage_MessageClass SmsMessage_MessageClass::CLASS_2()
	{
		return getStaticObjectField(
			"android.telephony.SmsMessage$MessageClass",
			"CLASS_2",
			"Landroid/telephony/SmsMessage$MessageClass;"
		);
	}
	android::telephony::SmsMessage_MessageClass SmsMessage_MessageClass::CLASS_3()
	{
		return getStaticObjectField(
			"android.telephony.SmsMessage$MessageClass",
			"CLASS_3",
			"Landroid/telephony/SmsMessage$MessageClass;"
		);
	}
	android::telephony::SmsMessage_MessageClass SmsMessage_MessageClass::UNKNOWN()
	{
		return getStaticObjectField(
			"android.telephony.SmsMessage$MessageClass",
			"UNKNOWN",
			"Landroid/telephony/SmsMessage$MessageClass;"
		);
	}
	
	// QAndroidJniObject forward
	SmsMessage_MessageClass::SmsMessage_MessageClass(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::telephony::SmsMessage_MessageClass SmsMessage_MessageClass::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.telephony.SmsMessage$MessageClass",
			"valueOf",
			"(Ljava/lang/String;)Landroid/telephony/SmsMessage$MessageClass;",
			arg0
		);
	}
	jarray SmsMessage_MessageClass::values()
	{
		return callStaticObjectMethod(
			"android.telephony.SmsMessage$MessageClass",
			"values",
			"()[Landroid/telephony/SmsMessage$MessageClass;"
		).object<jarray>();
	}
} // namespace android::telephony

