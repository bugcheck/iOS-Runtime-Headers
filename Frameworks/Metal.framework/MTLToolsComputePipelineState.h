/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLDevice>, <MTLFunction>, NSString;

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI> {
    <MTLFunction> *_function;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) <MTLDevice> * device;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) unsigned long long staticLocalMemorySize;
@property(readonly) Class superclass;
@property(readonly) unsigned long long threadExecutionWidth;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (id)device;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (unsigned long long)staticLocalMemorySize;
- (unsigned long long)threadExecutionWidth;

@end
