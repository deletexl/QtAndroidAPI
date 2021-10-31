#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"


namespace android::nfc
{
	class TagLostException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TagLostException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		TagLostException(QAndroidJniObject obj);
		
		// Constructors
		TagLostException();
		TagLostException(jstring arg0);
		
		// Methods
	};
} // namespace android::nfc

