#include "../../../JString.hpp"
#include "../namespace/QName.hpp"
#include "./XPathConstants.hpp"

namespace javax::xml::xpath
{
	// Fields
	javax::xml::_namespace::QName XPathConstants::BOOLEAN()
	{
		return getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"BOOLEAN",
			"Ljavax/xml/namespace/QName;"
		);
	}
	JString XPathConstants::DOM_OBJECT_MODEL()
	{
		return getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"DOM_OBJECT_MODEL",
			"Ljava/lang/String;"
		);
	}
	javax::xml::_namespace::QName XPathConstants::NODE()
	{
		return getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"NODE",
			"Ljavax/xml/namespace/QName;"
		);
	}
	javax::xml::_namespace::QName XPathConstants::NODESET()
	{
		return getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"NODESET",
			"Ljavax/xml/namespace/QName;"
		);
	}
	javax::xml::_namespace::QName XPathConstants::NUMBER()
	{
		return getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"NUMBER",
			"Ljavax/xml/namespace/QName;"
		);
	}
	javax::xml::_namespace::QName XPathConstants::STRING()
	{
		return getStaticObjectField(
			"javax.xml.xpath.XPathConstants",
			"STRING",
			"Ljavax/xml/namespace/QName;"
		);
	}
	
	// QJniObject forward
	XPathConstants::XPathConstants(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace javax::xml::xpath

