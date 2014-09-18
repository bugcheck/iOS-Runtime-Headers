/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableData;

@interface SBKZipDeflateMemoryOutputStream : NSObject {
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    int _bufferingSize;
    char *_outputBuffer;
    NSMutableData *deflatedData;
    } zstream;
}

+ (id)dataByDeflatingData:(id)arg1;

- (void).cxx_destruct;
- (id)close;
- (void)dealloc;
- (id)initWithBufferingSize:(int)arg1 compressionType:(unsigned long long)arg2;
- (bool)writeBuffer:(const char *)arg1 size:(unsigned long long)arg2;

@end
