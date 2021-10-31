#include "../../../xml/sax/InputSource.hpp"
#include "./Driver.hpp"

namespace org::xmlpull::v1::sax2
{
	// Fields
	
	// QAndroidJniObject forward
	Driver::Driver(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Driver::Driver()
		: __JniBaseClass(
			"org.xmlpull.v1.sax2.Driver",
			"()V"
		) {}
	Driver::Driver(__JniBaseClass arg0)
		: __JniBaseClass(
			"org.xmlpull.v1.sax2.Driver",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.object()
		) {}
	
	// Methods
	jint Driver::getColumnNumber()
	{
		return callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	QAndroidJniObject Driver::getContentHandler()
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	QAndroidJniObject Driver::getDTDHandler()
	{
		return callObjectMethod(
			"getDTDHandler",
			"()Lorg/xml/sax/DTDHandler;"
		);
	}
	QAndroidJniObject Driver::getEntityResolver()
	{
		return callObjectMethod(
			"getEntityResolver",
			"()Lorg/xml/sax/EntityResolver;"
		);
	}
	QAndroidJniObject Driver::getErrorHandler()
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean Driver::getFeature(jstring arg0)
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jint Driver::getIndex(jstring arg0)
	{
		return callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint Driver::getIndex(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint Driver::getLength()
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jint Driver::getLineNumber()
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	jstring Driver::getLocalName(jint arg0)
	{
		return callObjectMethod(
			"getLocalName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jobject Driver::getProperty(jstring arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring Driver::getPublicId()
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Driver::getQName(jint arg0)
	{
		return callObjectMethod(
			"getQName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Driver::getSystemId()
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Driver::getType(jint arg0)
	{
		return callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Driver::getType(jstring arg0)
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Driver::getType(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Driver::getURI(jint arg0)
	{
		return callObjectMethod(
			"getURI",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Driver::getValue(jint arg0)
	{
		return callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Driver::getValue(jstring arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Driver::getValue(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	void Driver::parse(jstring arg0)
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Driver::parse(org::xml::sax::InputSource arg0)
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	void Driver::parseSubTree(__JniBaseClass arg0)
	{
		callMethod<void>(
			"parseSubTree",
			"(Lorg/xmlpull/v1/XmlPullParser;)V",
			arg0.object()
		);
	}
	void Driver::setContentHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	void Driver::setDTDHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.object()
		);
	}
	void Driver::setEntityResolver(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	void Driver::setErrorHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	void Driver::setFeature(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void Driver::setProperty(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
} // namespace org::xmlpull::v1::sax2

