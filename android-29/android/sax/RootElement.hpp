#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Element.hpp"


namespace android::sax
{
	class RootElement : public android::sax::Element
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RootElement(const char *className, const char *sig, Ts...agv) : android::sax::Element(className, sig, std::forward<Ts>(agv)...) {}
		RootElement(QAndroidJniObject obj);
		
		// Constructors
		RootElement(jstring arg0);
		RootElement(jstring arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject getContentHandler();
	};
} // namespace android::sax

