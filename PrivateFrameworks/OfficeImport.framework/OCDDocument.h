/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSData, NSMutableArray, OADBlipCollection, OADGraphicStyleCache, OADTextListStyle, OCDReader, OCDSummary, OCDWriter, OITSUPointerKeyDictionary;

@interface OCDDocument : NSObject {
    OADBlipCollection *mBlips;
    NSMutableArray *mCharts;
    OADTextListStyle *mDefaultTextStyle;
    OITSUPointerKeyDictionary *mDualDrawableMap;
    NSData *mEncryptionInfo;
    OADGraphicStyleCache *mGraphicStyleCache;
    OCDReader *mReader;
    OCDSummary *mSummary;
    OCDWriter *mWriter;
}

@property(readonly) OADBlipCollection * blips;
@property(readonly) NSMutableArray * charts;
@property(readonly) OADTextListStyle * defaultTextStyle;
@property(readonly) OITSUPointerKeyDictionary * dualDrawableMap;
@property(retain) OADGraphicStyleCache * graphicStyleCache;
@property(retain) OCDReader * reader;
@property(readonly) OCDSummary * summary;
@property(retain) OCDWriter * writer;

- (id)blips;
- (id)charts;
- (void)dealloc;
- (id)defaultTextStyle;
- (id)dualDrawableMap;
- (id)encryptionInfo;
- (id)graphicStyleCache;
- (id)init;
- (bool)isFromBinaryFile;
- (id)reader;
- (void)setEncryptionInfo:(id)arg1;
- (void)setGraphicStyleCache:(id)arg1;
- (void)setReader:(id)arg1;
- (void)setWriter:(id)arg1;
- (id)summary;
- (id)writer;

@end
