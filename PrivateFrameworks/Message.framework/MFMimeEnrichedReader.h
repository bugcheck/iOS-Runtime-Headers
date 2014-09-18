/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableString;

@interface MFMimeEnrichedReader : NSObject {
    struct { 
        unsigned short buffer[64]; 
        struct __CFString {} *theString; 
        unsigned short *directUniCharBuffer; 
        char *directCStringBuffer; 
        struct { 
            long long location; 
            long long length; 
        } rangeToBuffer; 
        long long bufferedRangeStart; 
        long long bufferedRangeEnd; 
    unsigned int _eatOneNewline : 1;
    unsigned int _insideComment : 1;
    unsigned int _wantsPlainText : 1;
    unsigned int _noFillLevel : 30;
    struct __CFArray { } *_commandStack;
    long long _currentIndex;
    float _indentWidth;
    } _inputBuffer;
    long long _inputLength;
    int _lastQuoteLevel;
    NSMutableString *_outputBuffer;
    id _outputString;
    struct __CFString { } *_postpendHTML;
    struct __CFString { } *_prependHTML;
}

+ (struct __CFCharacterSet { }*)parenSet;
+ (struct __CFCharacterSet { }*)punctuationSet;

- (void)appendNewLine:(id)arg1;
- (void)appendStringToBuffer:(id)arg1;
- (void)beginCommand:(id)arg1;
- (void)closeUpQuoting;
- (void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2;
- (void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2;
- (id)currentFont;
- (void)dealloc;
- (id)description;
- (void)endCommand:(id)arg1;
- (void)handleNoParameterCommand:(const struct { id x1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 2; }*)arg1;
- (void)mismatchError:(id)arg1;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (void)parseParameterString:(id)arg1;
- (int)readTokenInto:(id*)arg1;
- (void)resetStateWithString:(id)arg1 outputString:(id)arg2;
- (void)setWantsHTML:(bool)arg1;
- (void)setupFontStackEntry:(struct _CommandStackEntry { struct { /* ? */ } *x1; id x2; }*)arg1;

@end
