/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSURandomWriteChannel>;

@interface TSUZipFileWriter : TSUZipWriter {
    <TSURandomWriteChannel> *_writeChannel;
}

+ (void)zipDirectoryAtURL:(id)arg1 customDirectoryFilename:(id)arg2 toURL:(id)arg3 queue:(id)arg4 progressHandler:(id)arg5;
+ (void)zipDirectoryAtURL:(id)arg1 toURL:(id)arg2 queue:(id)arg3 completion:(id)arg4;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)writeChannel;

@end
