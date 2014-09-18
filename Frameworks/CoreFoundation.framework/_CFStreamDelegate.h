/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface _CFStreamDelegate : NSObject <NSStreamDelegate> {
    struct { 
        long long version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    union { 
        int (*_rcb)(); 
        int (*_wcb)(); 
        int (*genericCallback)(); 
        void *genericPointer; 
    } _cb;
    } _client;
    unsigned long long _flags;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)dealloc;
- (id)initWithStreamEvents:(unsigned long long)arg1 callback:(void*)arg2 context:(struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
