/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableData, NSOperationQueue, NSString, NSURLConnection, NSURLResponse;

@interface WBSAsynchronousRequestHelper : NSObject <NSURLConnectionDelegate> {
    NSURLConnection *_connection;
    NSMutableData *_data;
    id _handler;
    id _lifetimeExtender;
    NSOperationQueue *_queue;
    NSURLResponse *_response;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
- (void)sendRequest;

@end
