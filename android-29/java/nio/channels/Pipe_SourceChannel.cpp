#include "./spi/SelectorProvider.hpp"
#include "./Pipe_SourceChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	Pipe_SourceChannel::Pipe_SourceChannel(QJniObject obj) : java::nio::channels::spi::AbstractSelectableChannel(obj) {}
	
	// Constructors
	
	// Methods
	jint Pipe_SourceChannel::validOps() const
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

