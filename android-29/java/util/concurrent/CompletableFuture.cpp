#include "../../../JArray.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./TimeUnit.hpp"
#include "./CompletableFuture.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// QJniObject forward
	CompletableFuture::CompletableFuture(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CompletableFuture::CompletableFuture()
		: JObject(
			"java.util.concurrent.CompletableFuture",
			"()V"
		) {}
	
	// Methods
	java::util::concurrent::CompletableFuture CompletableFuture::allOf(JArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"allOf",
			"([Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object<jarray>()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::anyOf(JArray arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"anyOf",
			"([Ljava/util/concurrent/CompletableFuture;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object<jarray>()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::completedFuture(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"completedFuture",
			"(Ljava/lang/Object;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object<jobject>()
		);
	}
	JObject CompletableFuture::completedStage(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"completedStage",
			"(Ljava/lang/Object;)Ljava/util/concurrent/CompletionStage;",
			arg0.object<jobject>()
		);
	}
	JObject CompletableFuture::delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"delayedExecutor",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Executor;",
			arg0,
			arg1.object()
		);
	}
	JObject CompletableFuture::delayedExecutor(jlong arg0, java::util::concurrent::TimeUnit arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"delayedExecutor",
			"(JLjava/util/concurrent/TimeUnit;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/Executor;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::failedFuture(JThrowable arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"failedFuture",
			"(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object<jthrowable>()
		);
	}
	JObject CompletableFuture::failedStage(JThrowable arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"failedStage",
			"(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletionStage;",
			arg0.object<jthrowable>()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::runAsync(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"runAsync",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::runAsync(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"runAsync",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::supplyAsync(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"supplyAsync",
			"(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::supplyAsync(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.util.concurrent.CompletableFuture",
			"supplyAsync",
			"(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::acceptEither(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"acceptEither",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::acceptEitherAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"acceptEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::acceptEitherAsync(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"acceptEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::applyToEither(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"applyToEither",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::applyToEitherAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"applyToEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::applyToEitherAsync(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"applyToEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean CompletableFuture::cancel(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	jboolean CompletableFuture::complete(JObject arg0) const
	{
		return callMethod<jboolean>(
			"complete",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::completeAsync(JObject arg0) const
	{
		return callObjectMethod(
			"completeAsync",
			"(Ljava/util/function/Supplier;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::completeAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"completeAsync",
			"(Ljava/util/function/Supplier;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean CompletableFuture::completeExceptionally(JThrowable arg0) const
	{
		return callMethod<jboolean>(
			"completeExceptionally",
			"(Ljava/lang/Throwable;)Z",
			arg0.object<jthrowable>()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::completeOnTimeout(JObject arg0, jlong arg1, java::util::concurrent::TimeUnit arg2) const
	{
		return callObjectMethod(
			"completeOnTimeout",
			"(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object<jobject>(),
			arg1,
			arg2.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::copy() const
	{
		return callObjectMethod(
			"copy",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	JObject CompletableFuture::defaultExecutor() const
	{
		return callObjectMethod(
			"defaultExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::exceptionally(JObject arg0) const
	{
		return callObjectMethod(
			"exceptionally",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::exceptionallyAsync(JObject arg0) const
	{
		return callObjectMethod(
			"exceptionallyAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::exceptionallyAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"exceptionallyAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::exceptionallyCompose(JObject arg0) const
	{
		return callObjectMethod(
			"exceptionallyCompose",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::exceptionallyComposeAsync(JObject arg0) const
	{
		return callObjectMethod(
			"exceptionallyComposeAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::exceptionallyComposeAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"exceptionallyComposeAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject CompletableFuture::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	JObject CompletableFuture::get(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	JObject CompletableFuture::getNow(JObject arg0) const
	{
		return callObjectMethod(
			"getNow",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jint CompletableFuture::getNumberOfDependents() const
	{
		return callMethod<jint>(
			"getNumberOfDependents",
			"()I"
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::handle(JObject arg0) const
	{
		return callObjectMethod(
			"handle",
			"(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::handleAsync(JObject arg0) const
	{
		return callObjectMethod(
			"handleAsync",
			"(Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::handleAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"handleAsync",
			"(Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean CompletableFuture::isCancelled() const
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	jboolean CompletableFuture::isCompletedExceptionally() const
	{
		return callMethod<jboolean>(
			"isCompletedExceptionally",
			"()Z"
		);
	}
	jboolean CompletableFuture::isDone() const
	{
		return callMethod<jboolean>(
			"isDone",
			"()Z"
		);
	}
	JObject CompletableFuture::join() const
	{
		return callObjectMethod(
			"join",
			"()Ljava/lang/Object;"
		);
	}
	JObject CompletableFuture::minimalCompletionStage() const
	{
		return callObjectMethod(
			"minimalCompletionStage",
			"()Ljava/util/concurrent/CompletionStage;"
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::newIncompleteFuture() const
	{
		return callObjectMethod(
			"newIncompleteFuture",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	void CompletableFuture::obtrudeException(JThrowable arg0) const
	{
		callMethod<void>(
			"obtrudeException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		);
	}
	void CompletableFuture::obtrudeValue(JObject arg0) const
	{
		callMethod<void>(
			"obtrudeValue",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::orTimeout(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"orTimeout",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/CompletableFuture;",
			arg0,
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::runAfterBoth(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"runAfterBoth",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::runAfterBothAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"runAfterBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::runAfterBothAsync(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"runAfterBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::runAfterEither(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"runAfterEither",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::runAfterEitherAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"runAfterEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::runAfterEitherAsync(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"runAfterEitherAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenAccept(JObject arg0) const
	{
		return callObjectMethod(
			"thenAccept",
			"(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenAcceptAsync(JObject arg0) const
	{
		return callObjectMethod(
			"thenAcceptAsync",
			"(Ljava/util/function/Consumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenAcceptAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"thenAcceptAsync",
			"(Ljava/util/function/Consumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenAcceptBoth(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"thenAcceptBoth",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenAcceptBothAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"thenAcceptBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenAcceptBothAsync(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"thenAcceptBothAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenApply(JObject arg0) const
	{
		return callObjectMethod(
			"thenApply",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenApplyAsync(JObject arg0) const
	{
		return callObjectMethod(
			"thenApplyAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenApplyAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"thenApplyAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenCombine(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"thenCombine",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenCombineAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"thenCombineAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenCombineAsync(JObject arg0, JObject arg1, JObject arg2) const
	{
		return callObjectMethod(
			"thenCombineAsync",
			"(Ljava/util/concurrent/CompletionStage;Ljava/util/function/BiFunction;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenCompose(JObject arg0) const
	{
		return callObjectMethod(
			"thenCompose",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenComposeAsync(JObject arg0) const
	{
		return callObjectMethod(
			"thenComposeAsync",
			"(Ljava/util/function/Function;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenComposeAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"thenComposeAsync",
			"(Ljava/util/function/Function;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenRun(JObject arg0) const
	{
		return callObjectMethod(
			"thenRun",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenRunAsync(JObject arg0) const
	{
		return callObjectMethod(
			"thenRunAsync",
			"(Ljava/lang/Runnable;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::thenRunAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"thenRunAsync",
			"(Ljava/lang/Runnable;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::toCompletableFuture() const
	{
		return callObjectMethod(
			"toCompletableFuture",
			"()Ljava/util/concurrent/CompletableFuture;"
		);
	}
	JString CompletableFuture::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::whenComplete(JObject arg0) const
	{
		return callObjectMethod(
			"whenComplete",
			"(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::whenCompleteAsync(JObject arg0) const
	{
		return callObjectMethod(
			"whenCompleteAsync",
			"(Ljava/util/function/BiConsumer;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object()
		);
	}
	java::util::concurrent::CompletableFuture CompletableFuture::whenCompleteAsync(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"whenCompleteAsync",
			"(Ljava/util/function/BiConsumer;Ljava/util/concurrent/Executor;)Ljava/util/concurrent/CompletableFuture;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::util::concurrent

