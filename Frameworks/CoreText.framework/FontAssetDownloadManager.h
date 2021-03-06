/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSSet;

@interface FontAssetDownloadManager : NSObject {
    struct TCFRef<const __CFArray *> { 
        struct __CFArray {} *fRef; 
    } fDescriptors;
    NSMutableDictionary *fDownloadOptions;
    struct TCFRef<const __CFSet *> { 
        struct __CFSet {} *fRef; 
    } fMandatoryAttributes;
    NSSet *fPreciousFontLanguages;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id fProgressCallbackBlock;

    NSMutableDictionary *fProgressParams;
}

+ (id)availableFontAttributesArray;
+ (id)displayNameForCurrentUser:(id)arg1;
+ (id)enabledKeyboardLanguages;
+ (Class)getASAssetQueryClass;
+ (BOOL)shouldIgnoreFontAsset:(id)arg1;
+ (BOOL)shouldRetryWithServer;
+ (BOOL)shouldTryServer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)activateFontsFromAssetURL:(id)arg1;
- (BOOL)assetStalled:(id)arg1;
- (id)availableMobileAssets:(BOOL)arg1 error:(id*)arg2;
- (unsigned long)calculateDownloadSize:(id)arg1;
- (BOOL)callProgressCallbak:(unsigned int)arg1;
- (void)dealloc;
- (id)doFinalMatching;
- (void)downloadFontAssets;
- (BOOL)executeDownloadingFontAssets:(id)arg1 forDescriptors:(id)arg2 andFontFilePaths:(id)arg3;
- (id)extractMatchingAssetsForDescriptor:(struct __CTFontDescriptor { }*)arg1 from:(id)arg2 withFailInfo:(BOOL*)arg3 andFontFilePaths:(id)arg4;
- (id)getUnmatchedDescriptors;
- (id)initWithDescriptors:(struct __CFArray { }*)arg1 andMandatoryAttributes:(struct __CFSet { }*)arg2 withBlock:(id)arg3;
- (id)mobileAssetsForUnmatched:(id)arg1 andFontFilePaths:(id)arg2;
- (id)preciousFontLanguages;
- (void)setDownloadOptionsForMobileAsset;
- (void)setGarbageCollectionBehaviorForAsset:(id)arg1;
- (void)setProgressParam:(id)arg1 forKey:(id)arg2;

@end
