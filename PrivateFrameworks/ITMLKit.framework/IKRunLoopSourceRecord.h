/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface IKRunLoopSourceRecord : NSObject {
    id _completionBlock;
    id _evaluateBlock;
}

@property(copy) id completionBlock;
@property(copy) id evaluateBlock;

- (void).cxx_destruct;
- (id)completionBlock;
- (id)evaluateBlock;
- (id)initWithEvaluateBlock:(id)arg1 completionBlock:(id)arg2;
- (void)setCompletionBlock:(id)arg1;
- (void)setEvaluateBlock:(id)arg1;

@end
