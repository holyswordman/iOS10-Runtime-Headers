/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSProcessAssertionClient : BSBaseXPCClient {
    NSMapTable * _assertionHandlersByIdentifier;
}

+ (id)clientQueue;
+ (id)sharedInstance;

- (void)_dispatchClientCalloutBlock:(id /* block */)arg1;
- (id)_errorWithCode:(unsigned long long)arg1;
- (void)_handleDestroy:(id)arg1;
- (void)_invalidate;
- (void)_sendEvent:(id)arg1 forMessageType:(unsigned long long)arg2 responseHandler:(id /* block */)arg3;
- (double)backgroundTimeRemaining:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (void)queue_connectionWasDestroyed;
- (void)queue_handleMessage:(id)arg1;
- (void)registerClientHandler:(id)arg1 forAssertionIdentifier:(id)arg2;
- (void)sendCreateAssertion:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (id)sendCreateAssertionSync:(id)arg1;
- (void)sendDestroyAssertion:(id)arg1;
- (void)sendUpdateAssertion:(id)arg1;
- (void)unregisterClientHandlerForAssertionIdentifier:(id)arg1;

@end
