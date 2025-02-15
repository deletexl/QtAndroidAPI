#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::text
{
	class AttributedCharacterIterator_Attribute : public JObject
	{
	public:
		// Fields
		static java::text::AttributedCharacterIterator_Attribute INPUT_METHOD_SEGMENT();
		static java::text::AttributedCharacterIterator_Attribute LANGUAGE();
		static java::text::AttributedCharacterIterator_Attribute READING();
		
		// QJniObject forward
		template<typename ...Ts> explicit AttributedCharacterIterator_Attribute(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AttributedCharacterIterator_Attribute(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace java::text

