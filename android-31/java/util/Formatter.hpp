#pragma once

#include "../../JObject.hpp"

class JObjectArray;
namespace java::io
{
	class File;
}
namespace java::io
{
	class IOException;
}
namespace java::io
{
	class OutputStream;
}
namespace java::io
{
	class PrintStream;
}
class JString;
namespace java::nio::charset
{
	class Charset;
}
namespace java::util
{
	class Locale;
}
namespace java::util::regex
{
	class Pattern;
}

namespace java::util
{
	class Formatter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Formatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Formatter(QJniObject obj);
		
		// Constructors
		Formatter();
		Formatter(java::io::File arg0);
		Formatter(java::io::OutputStream arg0);
		Formatter(java::io::PrintStream arg0);
		Formatter(JObject arg0);
		Formatter(JString arg0);
		Formatter(java::util::Locale arg0);
		Formatter(java::io::File arg0, JString arg1);
		Formatter(java::io::OutputStream arg0, JString arg1);
		Formatter(JObject arg0, java::util::Locale arg1);
		Formatter(JString arg0, JString arg1);
		Formatter(java::io::File arg0, JString arg1, java::util::Locale arg2);
		Formatter(java::io::File arg0, java::nio::charset::Charset arg1, java::util::Locale arg2);
		Formatter(java::io::OutputStream arg0, JString arg1, java::util::Locale arg2);
		Formatter(java::io::OutputStream arg0, java::nio::charset::Charset arg1, java::util::Locale arg2);
		Formatter(JString arg0, JString arg1, java::util::Locale arg2);
		Formatter(JString arg0, java::nio::charset::Charset arg1, java::util::Locale arg2);
		
		// Methods
		void close() const;
		void flush() const;
		java::util::Formatter format(JString arg0, JObjectArray arg1) const;
		java::util::Formatter format(java::util::Locale arg0, JString arg1, JObjectArray arg2) const;
		java::io::IOException ioException() const;
		java::util::Locale locale() const;
		JObject out() const;
		JString toString() const;
	};
} // namespace java::util

