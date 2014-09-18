/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <PLCloudScenarioConsumer>, NSArray;

@interface PLCloudScenarioProducer : NSObject {
    <PLCloudScenarioConsumer> *_consumer;
    NSArray *_triggers;
}

@property(retain) <PLCloudScenarioConsumer> * consumer;
@property(retain) NSArray * triggers;

- (void)activate;
- (id)consumer;
- (void)dealloc;
- (void)setConsumer:(id)arg1;
- (void)setTriggers:(id)arg1;
- (void)subscribeToTriggerType:(unsigned long long)arg1 withSelector:(SEL)arg2;
- (id)triggers;
- (void)unsubscribeFromTriggerType:(unsigned long long)arg1;

@end
