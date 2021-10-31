#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio::channels
{
	class SelectionKey;
}
namespace java::nio::channels::spi
{
	class SelectorProvider;
}

namespace java::nio::channels
{
	class Selector : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Selector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Selector(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject open();
		void close();
		jboolean isOpen();
		QAndroidJniObject keys();
		QAndroidJniObject provider();
		jint select();
		jint select(__JniBaseClass arg0);
		jint select(jlong arg0);
		jint select(__JniBaseClass arg0, jlong arg1);
		jint selectNow();
		jint selectNow(__JniBaseClass arg0);
		QAndroidJniObject selectedKeys();
		QAndroidJniObject wakeup();
	};
} // namespace java::nio::channels

