/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CPCharSequence, NSArray;

@interface CPTextLine : CPTextObject <CPDisposable> {
    double baseline;
    boolbaseLineIsNull;
    booldisposed;
    boolhasBeenProcessed;
    boolhasBeenSplit;
    boolhasTabs;
    boolirregular;
    boolisListItem;
    boollineBreakAfter;
    boolmaySplit;
    CPCharSequence *charSequence;
    NSArray *columnBreaks;
    int columnNumber;
    struct CPInlineContainer { unsigned int x1; id x2; struct CPInlineContainer {} *x3; } *inlineList;
    unsigned int leftSpacerIndex;
    int levels;
    int lineNumber;
    unsigned int listSpacerIndex;
    float maximumLetterGap;
    float maximumWordGap;
    double monospaceWidth;
    unsigned int rightSpacerIndex;
    unsigned int *spacesBefore;
    int tabsBefore;
    struct CPPDFStyle { struct CGColor {} *x1; struct CGColorSpace {} *x2; struct CGColor {} *x3; struct CGColorSpace {} *x4; double x5; double x6; unsigned char x7; unsigned char x8; int x9; double x10; id x11; double x12; union { unsigned char x_13_1_1; /* Warning: Unrecognized filer type: 'G' using 'void*' */ void*x_13_1_2; void*x_13_1_3; void*x_13_1_4; void*x_13_1_5; bycopy unsigned int x_13_1_6/* : ? */; void*x_13_1_7; void*x_13_1_8; BOOL x_13_1_9; void*x_13_1_10; } *x13; union { unsigned char x_14_1_1; void*x_14_1_2; void*x_14_1_3; void*x_14_1_4; void*x_14_1_5; bycopy unsigned int x_14_1_6/* : ? */; void*x_14_1_7; void*x_14_1_8; BOOL x_14_1_9; void*x_14_1_10; } *x14; struct CGColor {} *x15; struct CPPDFStyle {} *x16; } *uniformStyle;
    unsigned short uniformStyleFlags;
    struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; } *wordArray;
    unsigned int wordCount;
    NSArray *xsegments;
}

@property bool isListItem;
@property unsigned int leftSpacerIndex;
@property bool lineBreakAfter;
@property unsigned int listSpacerIndex;
@property unsigned int rightSpacerIndex;

- (void)accept:(id)arg1;
- (int)align;
- (struct CGPoint { double x1; double x2; })anchor;
- (void)anchorChunk:(id)arg1 atWordIndex:(unsigned int)arg2;
- (id)attributes;
- (long long)baseLineAscending:(id)arg1;
- (long long)baseLineDescending:(id)arg1;
- (double)baseline;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsOfWordAtIndex:(unsigned int)arg1;
- (bool)changesFontAt:(id)arg1;
- (id)charSequence;
- (id)columnBreaks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)firstWord;
- (void)fitBoundsToChildren;
- (bool)hasBeenProcessed;
- (bool)hasBeenSplit;
- (bool)hasDropCap;
- (bool)hasJustifiedAlignment;
- (bool)hasTabs;
- (bool)hyphenated;
- (id)init;
- (unsigned int)inlineCount;
- (struct CPInlineContainer { unsigned int x1; id x2; struct CPInlineContainer {} *x3; }*)inlineList;
- (bool)irregular;
- (bool)isIndivisible;
- (bool)isListItem;
- (bool)isMonospaced;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)lastWord;
- (unsigned int)leftSpacerIndex;
- (int)levels;
- (bool)lineBreakAfter;
- (unsigned int)listSpacerIndex;
- (bool)mapToWordPairs:(int (*)())arg1 passing:(void*)arg2;
- (bool)mapToWordPairsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (bool)mapToWords:(int (*)())arg1 passing:(void*)arg2;
- (bool)mapToWordsWithIndex:(int (*)())arg1 passing:(void*)arg2;
- (float)maximumLetterGap;
- (float)maximumWordGap;
- (double)medianFontSize;
- (double)monospaceWidth;
- (id)newTextLineFromWordAt:(unsigned int)arg1 lengthInWords:(unsigned int)arg2;
- (bool)overlapsHorizontally:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)overlapsWith:(id)arg1;
- (id)properties;
- (void)recomputeBaseline;
- (void)recomputeLevels;
- (bool)removeTextLines:(id)arg1 whereTrue:(int (*)())arg2 passing:(void*)arg3;
- (unsigned int)rightSpacerIndex;
- (void)setBaseline:(double)arg1;
- (void)setBaselineToNull;
- (void)setCharSequence:(id)arg1;
- (void)setColumnBreaks:(id)arg1;
- (void)setHasBeenProcessed:(bool)arg1;
- (void)setHasBeenSplit:(bool)arg1;
- (void)setHasTabs:(bool)arg1;
- (void)setIrregular:(bool)arg1;
- (void)setIsListItem:(bool)arg1;
- (void)setLeftSpacerIndex:(unsigned int)arg1;
- (void)setLevels:(int)arg1;
- (void)setLineBreakAfter:(bool)arg1;
- (void)setListSpacerIndex:(unsigned int)arg1;
- (void)setMaximumLetterGap:(float)arg1;
- (void)setMaximumWordGap:(float)arg1;
- (void)setRightSpacerIndex:(unsigned int)arg1;
- (void)setSpaces:(unsigned int)arg1 beforeWordAtIndex:(unsigned int)arg2;
- (void)setTabsBefore:(int)arg1;
- (unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg1;
- (bool)styleIsUniform:(struct CPPDFStyle {}**)arg1 styleFlags:(unsigned short)arg2;
- (int)tabsBefore;
- (long long)topIsAbove:(id)arg1;
- (void)translateObjectYBy:(double)arg1;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)wordArray;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)wordArrayOfSize:(unsigned int)arg1;
- (struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)wordAtIndex:(unsigned int)arg1;
- (unsigned int)wordCount;
- (long long)zOrder;

@end
