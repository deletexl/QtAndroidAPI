#include "../../../JString.hpp"
#include "./AtomicMoveNotSupportedException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	AtomicMoveNotSupportedException::AtomicMoveNotSupportedException(QJniObject obj) : java::nio::file::FileSystemException(obj) {}
	
	// Constructors
	AtomicMoveNotSupportedException::AtomicMoveNotSupportedException(JString arg0, JString arg1, JString arg2)
		: java::nio::file::FileSystemException(
			"java.nio.file.AtomicMoveNotSupportedException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

