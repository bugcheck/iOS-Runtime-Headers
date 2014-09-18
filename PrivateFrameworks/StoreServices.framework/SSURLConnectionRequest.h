/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSURLConnectionRequestDelegate>, NSString, NSURLRequest, SSAuthenticationContext, SSURLRequestProperties, SSVURLDataConsumer;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {
    SSAuthenticationContext *_authenticationContext;
    SSVURLDataConsumer *_dataConsumer;
    SSURLRequestProperties *_requestProperties;
    bool_runsInProcess;
    bool_sendsResponseForHTTPFailures;
    bool_shouldMescalSign;
}

@property(readonly) NSURLRequest * URLRequest;
@property(copy) SSAuthenticationContext * authenticationContext;
@property(retain) SSVURLDataConsumer * dataConsumer;
@property(copy,readonly) NSString * debugDescription;
@property <SSURLConnectionRequestDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) SSURLRequestProperties * requestProperties;
@property bool runsInProcess;
@property bool sendsResponseForHTTPFailures;
@property bool shouldMescalSign;
@property(readonly) Class superclass;

+ (id)newRadioRequestWithRequestProperties:(id)arg1;

- (id)URLRequest;
- (bool)_canRunInProcess;
- (id)authenticationContext;
- (id)copyXPCEncoding;
- (id)dataConsumer;
- (void)dealloc;
- (id)init;
- (id)initWithRequestProperties:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)requestProperties;
- (bool)runsInProcess;
- (bool)sendsResponseForHTTPFailures;
- (void)setAuthenticationContext:(id)arg1;
- (void)setDataConsumer:(id)arg1;
- (void)setRunsInProcess:(bool)arg1;
- (void)setSendsResponseForHTTPFailures:(bool)arg1;
- (void)setShouldMescalSign:(bool)arg1;
- (bool)shouldMescalSign;
- (bool)start;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithConnectionResponseBlock:(id)arg1;

@end
