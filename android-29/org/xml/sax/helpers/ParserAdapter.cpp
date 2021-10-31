#include "../InputSource.hpp"
#include "../SAXParseException.hpp"
#include "./AttributesImpl.hpp"
#include "./NamespaceSupport.hpp"
#include "./ParserAdapter.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QAndroidJniObject forward
	ParserAdapter::ParserAdapter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ParserAdapter::ParserAdapter()
		: __JniBaseClass(
			"org.xml.sax.helpers.ParserAdapter",
			"()V"
		) {}
	ParserAdapter::ParserAdapter(__JniBaseClass arg0)
		: __JniBaseClass(
			"org.xml.sax.helpers.ParserAdapter",
			"(Lorg/xml/sax/Parser;)V",
			arg0.object()
		) {}
	
	// Methods
	void ParserAdapter::characters(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"characters",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ParserAdapter::endDocument()
	{
		callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	void ParserAdapter::endElement(jstring arg0)
	{
		callMethod<void>(
			"endElement",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject ParserAdapter::getContentHandler()
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	QAndroidJniObject ParserAdapter::getDTDHandler()
	{
		return callObjectMethod(
			"getDTDHandler",
			"()Lorg/xml/sax/DTDHandler;"
		);
	}
	QAndroidJniObject ParserAdapter::getEntityResolver()
	{
		return callObjectMethod(
			"getEntityResolver",
			"()Lorg/xml/sax/EntityResolver;"
		);
	}
	QAndroidJniObject ParserAdapter::getErrorHandler()
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean ParserAdapter::getFeature(jstring arg0)
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jobject ParserAdapter::getProperty(jstring arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	void ParserAdapter::ignorableWhitespace(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ParserAdapter::parse(jstring arg0)
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ParserAdapter::parse(org::xml::sax::InputSource arg0)
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	void ParserAdapter::processingInstruction(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ParserAdapter::setContentHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	void ParserAdapter::setDTDHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.object()
		);
	}
	void ParserAdapter::setDocumentLocator(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		);
	}
	void ParserAdapter::setEntityResolver(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	void ParserAdapter::setErrorHandler(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	void ParserAdapter::setFeature(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void ParserAdapter::setProperty(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void ParserAdapter::startDocument()
	{
		callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	void ParserAdapter::startElement(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V",
			arg0,
			arg1.object()
		);
	}
} // namespace org::xml::sax::helpers

