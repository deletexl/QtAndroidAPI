#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class IOException;
}
namespace java::nio::file
{
	class FileVisitResult;
}

namespace java::nio::file
{
	class SimpleFileVisitor : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimpleFileVisitor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SimpleFileVisitor(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject postVisitDirectory(jobject arg0, java::io::IOException arg1);
		QAndroidJniObject preVisitDirectory(jobject arg0, __JniBaseClass arg1);
		QAndroidJniObject visitFile(jobject arg0, __JniBaseClass arg1);
		QAndroidJniObject visitFileFailed(jobject arg0, java::io::IOException arg1);
	};
} // namespace java::nio::file

