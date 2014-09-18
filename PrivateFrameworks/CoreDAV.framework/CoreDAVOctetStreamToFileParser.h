/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {
    NSFileHandle *_fileHandle;
}

@property(retain) NSFileHandle * fileHandle;

- (void)dealloc;
- (id)fileHandle;
- (id)initWithFileHandle:(id)arg1;
- (bool)processData:(id)arg1 forTask:(id)arg2;
- (void)setFileHandle:(id)arg1;

@end
