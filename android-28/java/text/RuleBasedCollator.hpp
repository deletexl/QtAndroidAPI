#pragma once

#include "./Collator.hpp"

class JObject;
class JString;
namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class CollationElementIterator;
}
namespace java::text
{
	class CollationKey;
}

namespace java::text
{
	class RuleBasedCollator : public java::text::Collator
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RuleBasedCollator(const char *className, const char *sig, Ts...agv) : java::text::Collator(className, sig, std::forward<Ts>(agv)...) {}
		RuleBasedCollator(QJniObject obj);
		
		// Constructors
		RuleBasedCollator(JString arg0);
		
		// Methods
		JObject clone() const;
		jint compare(JString arg0, JString arg1) const;
		jboolean equals(JObject arg0) const;
		java::text::CollationElementIterator getCollationElementIterator(JString arg0) const;
		java::text::CollationElementIterator getCollationElementIterator(JObject arg0) const;
		java::text::CollationKey getCollationKey(JString arg0) const;
		JString getRules() const;
		jint hashCode() const;
	};
} // namespace java::text

