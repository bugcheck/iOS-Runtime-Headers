/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DAAPKit.framework/DAAPKit
 */

@class <DKDAAPParserDelegate>, DKDAAPParserContext, NSMutableArray;

@interface DKDAAPParser : NSObject {
    NSMutableArray *_containerStack;
    <DKDAAPParserDelegate> *_delegate;
    DKDAAPParserContext *_propertyParseContext;
    bool_canceled;
    bool_finished;
    bool_parsing;
}

@property(getter=isCanceled) bool canceled;
@property <DKDAAPParserDelegate> * delegate;
@property(getter=isFinished) bool finished;
@property(getter=isParsing) bool parsing;

- (void).cxx_destruct;
- (void)callDelegateDidCancel;
- (void)callDelegateDidEndContainerCode:(unsigned int)arg1;
- (void)callDelegateDidFailWithError:(id)arg1;
- (void)callDelegateDidFinish;
- (void)callDelegateDidParseDataCode:(unsigned int)arg1 bytes:(char *)arg2 contentLength:(unsigned int)arg3;
- (void)callDelegateDidStart;
- (void)callDelegateDidStartContainerCode:(unsigned int)arg1 contentLength:(unsigned int)arg2;
- (bool)callDelegateShouldParseCode:(unsigned int)arg1;
- (bool)callDelegateShouldParseCodeAsContainer:(unsigned int)arg1;
- (void)cancel;
- (id)delegate;
- (bool)isCanceled;
- (bool)isFinished;
- (bool)isParsing;
- (void)parse;
- (unsigned int)parseInputBuffer:(id)arg1;
- (void)prepareForParse;
- (void)setCanceled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setParsing:(bool)arg1;

@end
