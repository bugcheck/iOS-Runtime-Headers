/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDParagraphProperties;

@interface WDParagraph : WDBlock {
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}

- (id)addAnnotation:(int)arg1 atIndex:(unsigned long long)arg2;
- (id)addAnnotation:(int)arg1;
- (id)addBookmark:(id)arg1 type:(int)arg2;
- (id)addBookmark;
- (id)addCharacterRun;
- (id)addDateTime:(id)arg1;
- (id)addEndnote;
- (id)addFieldMarker:(int)arg1;
- (id)addFieldMarker;
- (id)addFootnote;
- (id)addHyperlinkFieldMarker:(int)arg1;
- (id)addHyperlinkFieldMarker;
- (void)addRun:(id)arg1;
- (id)addSpecialCharacter;
- (id)addSymbol;
- (int)blockType;
- (void)clearProperties;
- (void)clearRuns;
- (void)dealloc;
- (id)initWithText:(id)arg1 string:(id)arg2;
- (id)initWithText:(id)arg1;
- (void)insertRun:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isContinuationOf:(id)arg1;
- (bool)isEmpty;
- (bool)isTextFrame;
- (float)maxReflectionDistance;
- (id)newRunIterator;
- (id)properties;
- (void)removeLastCharacter:(unsigned short)arg1;
- (void)removeRun:(id)arg1;
- (id)runAt:(unsigned long long)arg1;
- (unsigned long long)runCount;
- (id)runIterator;
- (id)runs;

@end
