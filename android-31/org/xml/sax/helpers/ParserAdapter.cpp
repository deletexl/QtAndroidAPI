#include "../../../../JCharArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../InputSource.hpp"
#include "../SAXParseException.hpp"
#include "./AttributesImpl.hpp"
#include "./NamespaceSupport.hpp"
#include "./ParserAdapter.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QJniObject forward
	ParserAdapter::ParserAdapter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ParserAdapter::ParserAdapter()
		: JObject(
			"org.xml.sax.helpers.ParserAdapter",
			"()V"
		) {}
	ParserAdapter::ParserAdapter(JObject arg0)
		: JObject(
			"org.xml.sax.helpers.ParserAdapter",
			"(Lorg/xml/sax/Parser;)V",
			arg0.object()
		) {}
	
	// Methods
	void ParserAdapter::characters(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"characters",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void ParserAdapter::endDocument() const
	{
		callMethod<void>(
			"endDocument",
			"()V"
		);
	}
	void ParserAdapter::endElement(JString arg0) const
	{
		callMethod<void>(
			"endElement",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JObject ParserAdapter::getContentHandler() const
	{
		return callObjectMethod(
			"getContentHandler",
			"()Lorg/xml/sax/ContentHandler;"
		);
	}
	JObject ParserAdapter::getDTDHandler() const
	{
		return callObjectMethod(
			"getDTDHandler",
			"()Lorg/xml/sax/DTDHandler;"
		);
	}
	JObject ParserAdapter::getEntityResolver() const
	{
		return callObjectMethod(
			"getEntityResolver",
			"()Lorg/xml/sax/EntityResolver;"
		);
	}
	JObject ParserAdapter::getErrorHandler() const
	{
		return callObjectMethod(
			"getErrorHandler",
			"()Lorg/xml/sax/ErrorHandler;"
		);
	}
	jboolean ParserAdapter::getFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	JObject ParserAdapter::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	void ParserAdapter::ignorableWhitespace(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"ignorableWhitespace",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	void ParserAdapter::parse(JString arg0) const
	{
		callMethod<void>(
			"parse",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ParserAdapter::parse(org::xml::sax::InputSource arg0) const
	{
		callMethod<void>(
			"parse",
			"(Lorg/xml/sax/InputSource;)V",
			arg0.object()
		);
	}
	void ParserAdapter::processingInstruction(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"processingInstruction",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void ParserAdapter::setContentHandler(JObject arg0) const
	{
		callMethod<void>(
			"setContentHandler",
			"(Lorg/xml/sax/ContentHandler;)V",
			arg0.object()
		);
	}
	void ParserAdapter::setDTDHandler(JObject arg0) const
	{
		callMethod<void>(
			"setDTDHandler",
			"(Lorg/xml/sax/DTDHandler;)V",
			arg0.object()
		);
	}
	void ParserAdapter::setDocumentLocator(JObject arg0) const
	{
		callMethod<void>(
			"setDocumentLocator",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		);
	}
	void ParserAdapter::setEntityResolver(JObject arg0) const
	{
		callMethod<void>(
			"setEntityResolver",
			"(Lorg/xml/sax/EntityResolver;)V",
			arg0.object()
		);
	}
	void ParserAdapter::setErrorHandler(JObject arg0) const
	{
		callMethod<void>(
			"setErrorHandler",
			"(Lorg/xml/sax/ErrorHandler;)V",
			arg0.object()
		);
	}
	void ParserAdapter::setFeature(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeature",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void ParserAdapter::setProperty(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	void ParserAdapter::startDocument() const
	{
		callMethod<void>(
			"startDocument",
			"()V"
		);
	}
	void ParserAdapter::startElement(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"startElement",
			"(Ljava/lang/String;Lorg/xml/sax/AttributeList;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace org::xml::sax::helpers

