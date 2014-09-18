/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CAMediaTimingFunction;

@interface TSCHMultiDataChartRepInterpolations : NSObject {
    CAMediaTimingFunction *mIndividualTimingFunction;
    CAMediaTimingFunction *mOverallTimingFunction;
}

@property(readonly) CAMediaTimingFunction * individual;
@property(readonly) CAMediaTimingFunction * overall;

+ (id)interpolationsWithOverallTimingFunction:(id)arg1 individualTimingFunction:(id)arg2;

- (void)dealloc;
- (id)individual;
- (id)initWithOverallTimingFunction:(id)arg1 individualTimingFunction:(id)arg2;
- (id)overall;

@end
