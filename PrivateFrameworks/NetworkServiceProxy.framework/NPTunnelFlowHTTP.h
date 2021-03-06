/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnelFlowHTTP : NPTunnelFlow {
    id /* block */  _postCompletionHandler;
    bool  _receivedHeaders;
    unsigned long long  _responseContentLength;
    NSMutableData * _responseData;
    bool  _responseSuccess;
    NSURL * _url;
}

@property (copy) id /* block */ postCompletionHandler;
@property bool receivedHeaders;
@property unsigned long long responseContentLength;
@property (retain) NSMutableData *responseData;
@property bool responseSuccess;
@property (retain) NSURL *url;

- (void).cxx_destruct;
- (void)closeClientFlowWithError:(id)arg1;
- (id)initWithTunnel:(id)arg1 URL:(id)arg2 delegate:(id)arg3;
- (bool)isClientFlowClosed;
- (id /* block */)postCompletionHandler;
- (void)postData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)receivedHeaders;
- (id)remoteHostname;
- (unsigned long long)responseContentLength;
- (id)responseData;
- (bool)responseSuccess;
- (void)sendDataToClient:(id)arg1 fromTunnel:(bool)arg2;
- (void)setPostCompletionHandler:(id /* block */)arg1;
- (void)setReceivedHeaders:(bool)arg1;
- (void)setResponseContentLength:(unsigned long long)arg1;
- (void)setResponseData:(id)arg1;
- (void)setResponseSuccess:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
