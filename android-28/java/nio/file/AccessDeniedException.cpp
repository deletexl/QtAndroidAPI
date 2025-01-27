#include "../../../JString.hpp"
#include "./AccessDeniedException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	AccessDeniedException::AccessDeniedException(QJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	AccessDeniedException::AccessDeniedException(JString arg0)
		: java::nio::file::FileSystemException(
			"java.nio.file.AccessDeniedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	AccessDeniedException::AccessDeniedException(JString arg0, JString arg1, JString arg2)
		: java::nio::file::FileSystemException(
			"java.nio.file.AccessDeniedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

