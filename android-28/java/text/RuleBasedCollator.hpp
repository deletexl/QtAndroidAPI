#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Collator.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RuleBasedCollator(const char *className, const char *sig, Ts...agv) : java::text::Collator(className, sig, std::forward<Ts>(agv)...) {}
		RuleBasedCollator(QAndroidJniObject obj);
		
		// Constructors
		RuleBasedCollator(jstring arg0);
		
		// Methods
		jobject clone();
		jint compare(jstring arg0, jstring arg1);
		jboolean equals(jobject arg0);
		java::text::CollationElementIterator getCollationElementIterator(jstring arg0);
		java::text::CollationElementIterator getCollationElementIterator(__JniBaseClass arg0);
		java::text::CollationKey getCollationKey(jstring arg0);
		jstring getRules();
		jint hashCode();
	};
} // namespace java::text
