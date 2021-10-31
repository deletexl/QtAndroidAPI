#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::xml::validation
{
	class TypeInfoProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TypeInfoProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TypeInfoProvider(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getAttributeTypeInfo(jint arg0);
		QAndroidJniObject getElementTypeInfo();
		jboolean isIdAttribute(jint arg0);
		jboolean isSpecified(jint arg0);
	};
} // namespace javax::xml::validation

