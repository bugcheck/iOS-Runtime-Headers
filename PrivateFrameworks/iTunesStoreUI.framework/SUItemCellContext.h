/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface SUItemCellContext : SUArtworkCellContext {
    struct { 
        long long version; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
        int (*equal)(); 
        int (*hash)(); 
    struct __CFDictionary { } *_cachedRatingImages;
    } _stringSizeCacheKeyCallBacks;
    struct __CFDictionary { } *_stringSizes;
}

@property struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); } stringSizeCacheKeyCallBacks;

- (struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); })stringSizeCacheKeyCallBacks;
- (void)dealloc;
- (id)init;
- (id)ratingImageForRating:(float)arg1 style:(long long)arg2;
- (void)resetLayoutCaches;
- (void)setStringSizeCacheKeyCallBacks:(struct { long long x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); })arg1;
- (struct CGSize { double x1; double x2; })sizeForString:(id)arg1 font:(id)arg2 constrainedToSize:(struct CGSize { double x1; double x2; })arg3;

@end
