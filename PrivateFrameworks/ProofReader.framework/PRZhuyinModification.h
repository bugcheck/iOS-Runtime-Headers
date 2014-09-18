/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@class NSString;

@interface PRZhuyinModification : PRModification {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _additionalSyllableRange;
    unsigned char _letters[5];
    double _modificationScore;
    unsigned long long _modificationType;
    } _range;
    NSString *_replacementString;
    unsigned long long _syllableCountScore;
    } _syllableRange;
    bool_producesPartialSyllable;
}

- (bool)_shouldAppendLetter:(unsigned char)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })additionalSyllableRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })combinedSyllableRange;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 additionalSyllableRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char *)arg8 producesPartialSyllable:(bool)arg9;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char *)arg7 producesPartialSyllable:(bool)arg8;
- (bool)isEqual:(id)arg1;
- (double)modificationScore;
- (unsigned long long)modificationType;
- (bool)producesPartialSyllable;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)replacementString;
- (unsigned long long)syllableCountScore;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })syllableRange;

@end
