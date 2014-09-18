/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSAttributedString, NSLayoutManager, NSParagraphStyle, NSTextContainer;

@interface NSATSTypesetter : NSTypesetter {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    struct CGSize { 
        double width; 
        double height; 
    void *_atsReserved[8];
    id _private;
    NSAttributedString *attributedString;
    NSParagraphStyle *currentParagraphStyle;
    NSTextContainer *currentTextContainer;
    unsigned long long currentTextContainerIndex;
    } currentTextContainerSize;
    NSLayoutManager *layoutManager;
    double lineFragmentPadding;
    } paragraphGlyphRange;
    } paragraphSeparatorGlyphRange;
    NSArray *textContainers;
}

+ (bool)_allowsScreenFontKerning;
+ (void)initialize;
+ (id)sharedInstance;
+ (id)sharedTypesetter;

- (struct { struct { /* ? */ } *x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; struct _NSRange { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; float x4; float x5; int (*x6)(); int (*x7)(); double x8; double x9; double x10; double x11; double x12; double x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_15_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_15_1_2; } x15; struct _NSRange { unsigned long long x_16_1_1; unsigned long long x_16_1_2; } x16; id x17; double x18; long long x19; struct { unsigned int x_20_1_1 : 4; unsigned int x_20_1_2 : 1; unsigned int x_20_1_3 : 1; unsigned int x_20_1_4 : 1; unsigned int x_20_1_5 : 4; unsigned int x_20_1_6 : 4; unsigned int x_20_1_7 : 1; unsigned int x_20_1_8 : 1; unsigned int x_20_1_9 : 1; unsigned int x_20_1_10 : 1; unsigned int x_20_1_11 : 2; unsigned int x_20_1_12 : 1; unsigned int x_20_1_13 : 10; } x20; void *x21[0]; }*)_allocateAuxData;
- (long long)_baseWritingDirection;
- (bool)_baselineRenderingMode;
- (const char *)_bidiLevels;
- (struct __CTTypesetter { }*)_ctTypesetter;
- (void)_doBidiProcessing;
- (void)_flushCachedObjects;
- (bool)_forceWordWrapping;
- (id)_getATSTypesetterGuts;
- (bool)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned long long*)arg1 characterIndex:(unsigned long long*)arg2 atPoint:(struct CGPoint { double x1; double x2; }*)arg3 renderingContext:(id*)arg4;
- (union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; long long x_1_1_4; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; } x2; }*)_lineFragmentRectForProposedRectArgs;
- (void)_setBaselineRenderingMode:(bool)arg1;
- (void)_setForceWordWrapping:(bool)arg1;
- (unsigned long long)_sweepDirectionForGlyphAtIndex:(long long)arg1;
- (bool)_usesScreenFonts;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1;
- (double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)arg1;
- (void)beginParagraph;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxForControlGlyphAtIndex:(unsigned long long)arg1 forTextContainer:(id)arg2 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 glyphPosition:(struct CGPoint { double x1; double x2; })arg4 characterIndex:(unsigned long long)arg5;
- (void)dealloc;
- (double)defaultTighteningFactor;
- (void)endLineWithGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)endParagraph;
- (unsigned int)hyphenCharacterForGlyphAtIndex:(unsigned long long)arg1;
- (float)hyphenationFactorForGlyphAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })layoutCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3;
- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long*)arg4;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint { double x1; double x2; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 remainingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)setDefaultTighteningFactor:(double)arg1;
- (bool)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)arg1;
- (bool)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg1;

@end
