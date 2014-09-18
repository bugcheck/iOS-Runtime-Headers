/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSObject<OS_dispatch_queue>, PLOperator;

@interface PLXPCResponderOperatorComposition : NSObject {
    PLOperator *_operator;
    id _operatorBlock;
    NSDictionary *_registration;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property PLOperator * operator;
@property(copy) id operatorBlock;
@property(readonly) NSDictionary * registration;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOperator:(id)arg1 withRegistration:(id)arg2 withBlock:(id)arg3;
- (id)initWithWorkQueue:(id)arg1 withRegistration:(id)arg2 withBlock:(id)arg3;
- (id)operator;
- (id)operatorBlock;
- (id)registration;
- (id)respondToRequestForClientID:(short)arg1 withProcessName:(id)arg2 withKey:(id)arg3 withPayload:(id)arg4;
- (void)setOperator:(id)arg1;
- (void)setOperatorBlock:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
