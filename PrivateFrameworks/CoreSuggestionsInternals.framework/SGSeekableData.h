/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSData, NSString;

@interface SGSeekableData : NSObject <SGSeekable> {
    const void *_bytes;
    NSData *_data;
    unsigned long long _offsetInFile;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long offsetInFile;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (const void*)dataOfLength:(unsigned long long)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMemoryMappedPath:(id)arg1;
- (id)initWithMemoryMappedURL:(id)arg1;
- (unsigned long long)offsetInFile;
- (void)seekToFileOffset:(unsigned long long)arg1;

@end
