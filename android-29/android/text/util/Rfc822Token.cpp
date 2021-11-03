#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Rfc822Token.hpp"

namespace android::text::util
{
	// Fields
	
	// QAndroidJniObject forward
	Rfc822Token::Rfc822Token(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Rfc822Token::Rfc822Token(JString arg0, JString arg1, JString arg2)
		: JObject(
			"android.text.util.Rfc822Token",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	JString Rfc822Token::quoteComment(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteComment",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Rfc822Token::quoteName(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString Rfc822Token::quoteNameIfNecessary(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteNameIfNecessary",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	jboolean Rfc822Token::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString Rfc822Token::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		);
	}
	JString Rfc822Token::getComment()
	{
		return callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		);
	}
	JString Rfc822Token::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint Rfc822Token::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Rfc822Token::setAddress(JString arg0)
	{
		callMethod<void>(
			"setAddress",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Rfc822Token::setComment(JString arg0)
	{
		callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Rfc822Token::setName(JString arg0)
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString Rfc822Token::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text::util

