/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString;

@interface SSLogFileOptions : NSObject <NSCopying> {
    NSString *_directoryPath;
    NSString *_fileName;
    long long _maxNumberOfLogFiles;
    unsigned long long _maxSizeInBytes;
}

@property(copy) NSString * logDirectoryPath;
@property(copy) NSString * logFileBaseName;
@property unsigned long long maxLogFileSize;
@property long long maxNumberOfLogFiles;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)logDirectoryPath;
- (id)logFileBaseName;
- (unsigned long long)maxLogFileSize;
- (long long)maxNumberOfLogFiles;
- (void)setLogDirectoryPath:(id)arg1;
- (void)setLogFileBaseName:(id)arg1;
- (void)setMaxLogFileSize:(unsigned long long)arg1;
- (void)setMaxNumberOfLogFiles:(long long)arg1;

@end
