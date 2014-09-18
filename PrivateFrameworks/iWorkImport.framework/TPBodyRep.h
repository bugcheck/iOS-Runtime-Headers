/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSSet, NSString;

@interface TPBodyRep : TSWPRep <TSKChangeSourceObserver> {
    NSSet *_lastSelectedInfos;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id)beginEditing;
- (id)colorBehindLayer:(id)arg1;
- (void)dealloc;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitRepChrome:(struct CGPoint { double x1; double x2; })arg1;
- (id)hitReps:(struct CGPoint { double x1; double x2; })arg1 withSlop:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(bool)arg3;
- (id)repForCharIndex:(unsigned long long)arg1 isStart:(bool)arg2;
- (id)siblings;
- (id)storage;
- (void)willBeRemoved;

@end
