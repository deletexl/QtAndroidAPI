#pragma once

#include "./SQLWarning.hpp"

class JThrowable;

namespace java::sql
{
	class DataTruncation : public java::sql::SQLWarning
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DataTruncation(const char *className, const char *sig, Ts...agv) : java::sql::SQLWarning(className, sig, std::forward<Ts>(agv)...) {}
		DataTruncation(QJniObject obj);
		
		// Constructors
		DataTruncation(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4);
		DataTruncation(jint arg0, jboolean arg1, jboolean arg2, jint arg3, jint arg4, JThrowable arg5);
		
		// Methods
		jint getDataSize() const;
		jint getIndex() const;
		jboolean getParameter() const;
		jboolean getRead() const;
		jint getTransferSize() const;
	};
} // namespace java::sql

