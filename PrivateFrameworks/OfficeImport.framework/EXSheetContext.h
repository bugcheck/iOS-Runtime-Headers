/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EXReadState, NSString, NSURL;

@interface EXSheetContext : NSObject <OCDDelayedNodeContext> {
    NSURL *mPackageLocation;
    EXReadState *mSheetState;
    NSString *mType;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)dealloc;
- (id)initWithSheetLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3;
- (bool)loadDelayedNode:(id)arg1;

@end
