/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSInputStream, NSObject<OS_dispatch_queue>, NSOutputStream, NSString;

@interface ATStreamWriter : NSObject <NSStreamDelegate> {
    unsigned long long _bytesWritten;
    id _canWriteDataBlock;
    id _didEncounterErrorBlock;
    id _didFinishWritingBlock;
    NSInputStream *_inputStream;
    unsigned long long _maximumBufferSize;
    NSOutputStream *_outputStream;
    NSObject<OS_dispatch_queue> *_queue;
    double _timestamp;
    struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } *_zstreamp;
    bool_closeOnStop;
    bool_compressed;
}

@property unsigned long long bytesWritten;
@property(copy) id canWriteDataBlock;
@property(getter=isCompressed) bool compressed;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) id didEncounterErrorBlock;
@property(copy) id didFinishWritingBlock;
@property(readonly) unsigned long long hash;
@property(retain) NSInputStream * inputStream;
@property unsigned long long maximumBufferSize;
@property(retain) NSOutputStream * outputStream;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(readonly) Class superclass;
@property double timestamp;

- (void).cxx_destruct;
- (id)_decompressData:(id)arg1;
- (unsigned long long)bytesWritten;
- (id)canWriteDataBlock;
- (void)dealloc;
- (id)didEncounterErrorBlock;
- (id)didFinishWritingBlock;
- (id)init;
- (id)initWithOutputStream:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (id)inputStream;
- (bool)isCompressed;
- (unsigned long long)maximumBufferSize;
- (id)outputStream;
- (id)queue;
- (void)setBytesWritten:(unsigned long long)arg1;
- (void)setCanWriteDataBlock:(id)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setDidEncounterErrorBlock:(id)arg1;
- (void)setDidFinishWritingBlock:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setMaximumBufferSize:(unsigned long long)arg1;
- (void)setOutputStream:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)start;
- (void)stop;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (double)timestamp;
- (bool)writeAllData:(id)arg1 error:(id*)arg2;
- (void)writeAllData:(id)arg1 withCompletion:(id)arg2;
- (void)writeStreamError:(struct { long long x1; int x2; })arg1;

@end
