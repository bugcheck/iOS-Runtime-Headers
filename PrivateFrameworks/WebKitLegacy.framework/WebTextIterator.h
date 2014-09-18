/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

+ (id)dd_iteratorForDocument:(id)arg1;

- (struct __DDScanQuery { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryFragment {} *x2; long long x3; long long x4; int (*x5)(); void *x6; }*)dd_newQueryStopRange:(id*)arg1;
- (void)advance;
- (bool)atEnd;
- (id)currentNode;
- (id)currentRange;
- (id)currentText;
- (unsigned long long)currentTextLength;
- (const unsigned short*)currentTextPointer;
- (bool)dd_checkCurrentRangeAgainstString:(struct __CFString { }*)arg1;
- (id)dd_collectDDRangesForQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryFragment {} *x2; long long x3; long long x4; int (*x5)(); void *x6; }*)arg1 forResults:(id)arg2;
- (id)dd_doUrlificationForQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned char x_1_1_2[4]; unsigned int x_1_1_3; } x1; struct __DDQueryFragment {} *x2; long long x3; long long x4; int (*x5)(); void *x6; }*)arg1 forResults:(id)arg2 referenceDate:(id)arg3 document:(id)arg4 DOMWasModified:(bool*)arg5 relevantResults:(id*)arg6 URLificationBlock:(id)arg7;
- (void)dealloc;
- (id)initWithRange:(id)arg1;

@end
