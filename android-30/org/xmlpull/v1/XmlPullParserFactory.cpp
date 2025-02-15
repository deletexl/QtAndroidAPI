#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/ArrayList.hpp"
#include "../../../java/util/HashMap.hpp"
#include "./XmlPullParserFactory.hpp"

namespace org::xmlpull::v1
{
	// Fields
	JString XmlPullParserFactory::PROPERTY_NAME()
	{
		return getStaticObjectField(
			"org.xmlpull.v1.XmlPullParserFactory",
			"PROPERTY_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	XmlPullParserFactory::XmlPullParserFactory(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	org::xmlpull::v1::XmlPullParserFactory XmlPullParserFactory::newInstance()
	{
		return callStaticObjectMethod(
			"org.xmlpull.v1.XmlPullParserFactory",
			"newInstance",
			"()Lorg/xmlpull/v1/XmlPullParserFactory;"
		);
	}
	org::xmlpull::v1::XmlPullParserFactory XmlPullParserFactory::newInstance(JString arg0, JClass arg1)
	{
		return callStaticObjectMethod(
			"org.xmlpull.v1.XmlPullParserFactory",
			"newInstance",
			"(Ljava/lang/String;Ljava/lang/Class;)Lorg/xmlpull/v1/XmlPullParserFactory;",
			arg0.object<jstring>(),
			arg1.object<jclass>()
		);
	}
	jboolean XmlPullParserFactory::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean XmlPullParserFactory::isNamespaceAware() const
	{
		return callMethod<jboolean>(
			"isNamespaceAware",
			"()Z"
		);
	}
	jboolean XmlPullParserFactory::isValidating() const
	{
		return callMethod<jboolean>(
			"isValidating",
			"()Z"
		);
	}
	JObject XmlPullParserFactory::newPullParser() const
	{
		return callObjectMethod(
			"newPullParser",
			"()Lorg/xmlpull/v1/XmlPullParser;"
		);
	}
	JObject XmlPullParserFactory::newSerializer() const
	{
		return callObjectMethod(
			"newSerializer",
			"()Lorg/xmlpull/v1/XmlSerializer;"
		);
	}
	void XmlPullParserFactory::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void XmlPullParserFactory::setNamespaceAware(jboolean arg0) const
	{
		callMethod<void>(
			"setNamespaceAware",
			"(Z)V",
			arg0
		);
	}
	void XmlPullParserFactory::setValidating(jboolean arg0) const
	{
		callMethod<void>(
			"setValidating",
			"(Z)V",
			arg0
		);
	}
} // namespace org::xmlpull::v1

